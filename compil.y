%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "table_symbole.h"
#include "f_write_util.h"
int yylex ();
int var[26];
void yyerror(char *s);
int current_type;
%}
%union { 
  int nb; 
  char var; 
  char* str;  // nom de variable
}
%type <str> NameVariable
%type <nb> Expression

%token <nb> tNB
%token <str> tID
%token tVIDE tEGAL tPO tPF tSOU tADD tDIV tMUL tERROR tAO tAF tPOINT tCO tCF tINF tSUP tBACKSLASH tCHAPEAU tINTERROG tEXCALM tDOLLAR tPERCENT tPTVIRGULE tVIRGULE 
%token tOR tAND tTILD tANDLOG tORLOG tDD tDG
%token tIF tELSE tWHILE tFOR

%token tMAIN tRETURN 
%token tVOID tINT tBOOL tCHAR tTRUE tFALSE
%start Programme
%left tAND tOR tANDLOG tORLOG
%left tADD tSOU   
%left tMUL tDIV tPERCENT
%%

Programme : FonctionMain | Fonction | Fonction FonctionMain;

FonctionMain : TypeMain tMAIN ArgFormat Body {printf("[MAIN]\n");}
Fonction : TypeVariable tID  ArgFormat Body

TypeMain : tINT | tVOID 

ArgFormat : tPO tPF | tPO ArgList tPF
ArgList : TypeVariable NameVariable | TypeVariable NameVariable tVIRGULE ArgList

TypeVariable 
    : tINT   { current_type = 0; }
    | tBOOL  { current_type = 1; }
    | tVOID  { current_type = 2; }
    | tCHAR  { current_type = 3; }

NameVariable : tID {
        
        $$ = $1;
    }

Body 
    : tAO tAF
    | tAO Instructions tAF
    ;

Instructions 
    : Instruction 
    | Instruction Instructions 
    ;

Instruction
    : Retour tPTVIRGULE
    | Affectation tPTVIRGULE
    | Expression tPTVIRGULE
    | Declaration tPTVIRGULE
    | InitAffect tPTVIRGULE
    ;

Retour 
    : tRETURN Expression
    ;

Affectation : NameVariable tEGAL Expression {
    
    int idx = get_index_by_name($1);
    if (idx >= 0) {

        printf("[Affectation Expression] %s = %d\n", $1, $3);
        symbol* sym = get_symbol(idx);
        sym->name = strdup($1);
        sym->initialised = 1;
        sym->value = $3;
        f_write("COP", idx, 0, 0, 0, $3);
        printf("[Affectation] %s idx = %d\n", $1,idx);
        remove_all_tmp();
    } else {
        printf("[ERROR] Variable %s pas déclarée\n", $1);
        exit(1);
    }
}; 
Declaration : TypeVariable NameVariable{
    int idx = get_index_by_name($2);
    if (idx >= 0) {
        printf("[ERROR] Variable %s déjà déclarée\n", $2);
        exit(1);
    } else {
        printf("[Declaration] %s\n", $2);
        symbol* sym = malloc(sizeof(symbol));
        sym->name = strdup($2);
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 0;
        sym->value = 0;
        sym->dtype = current_type;
        add_symbol(sym);
        remove_all_tmp();
    }
};
InitAffect : TypeVariable NameVariable tEGAL Expression {
    int idx = get_index_by_name($2);
    if (idx < 0) {
        symbol* sym = malloc(sizeof(symbol));
        sym->name = strdup($2);
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->value = $4;
        sym->dtype = current_type;
        add_symbol(sym);

        idx=get_index(sym);
        printf("[InitAfect Expression] %s\n", $2);
        f_write("COP", idx, 0, 0, 0, $4);
        remove_all_tmp();
    }
};

Expression
    : Expression tADD Expression {
        printf("[ADD] %d + %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;
        
        add_tmp(sym);
        int idx=get_index(sym);
        $$=idx;
        f_write("ADD",idx, 0, $1, 0, $3);
    }
    | Expression tSOU Expression
    | Expression tMUL Expression
    | Expression tDIV Expression
    | Expression tPERCENT Expression
    | Expression tANDLOG Expression
    | Expression tORLOG Expression {}
    | tPO Expression tPF {
        
    }
    | tNB {
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;
        
        add_tmp(sym);
        int idx=get_index(sym);
        $$=idx;
        f_write("AFC",idx, 0, 0, 1, $1);
    }
    | NameVariable {
        
        int idx = get_index_by_name($1);
        //f_write("COP",idx, 0, 0, 0, idx);
        $$=idx;
    }
    ;




%%

void yyerror(char *s) 
{ 
  fprintf(stderr, "%s\n", s); 
}

int main(void) {
  extern int yydebug;
  //yydebug = 1;
  printf("Compilo\n");

  FILE *f = fopen("assembly.txt", "w");
  
  yyparse();
  
  printf(">> Fin yyparse\n");
  print_table();
  free_table();
  return 0;
}
