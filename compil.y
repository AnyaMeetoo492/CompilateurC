%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "table_symbole.h"
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
%type <nb> Value

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
    | Initialisation tPTVIRGULE
    | InitAffect tPTVIRGULE
    ;

Retour 
    : tRETURN Expression
    ;

Affectation : NameVariable tEGAL Expression {
    print_table();
    int idx = get_index_by_name($1);
    printf("[Affectation] index de variable %d\n", idx);
    if (idx >= 0) {
        symbol* sym = get_symbol(idx);
        
        sym->initialised = 1;
        sym->value = $3;
        printf("[Affectation] %s = %d\n", $1, $3);
    } else {
        printf("[ERROR] Variable %s déjà déclarée\n", $1);
        exit(1);
    }
};
Initialisation : TypeVariable NameVariable{
    int idx = get_index_by_name($2);
    if (idx >= 0) {
        printf("[ERROR] Variable %s déjà déclarée\n", $2);
        exit(1);
    } else {
        symbol* sym = malloc(sizeof(symbol));
        sym->name = strdup($2);
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 0;
        sym->value = 0;
        sym->dtype = current_type;
        add_symbol(sym);
        printf("[Initialisation] %s\n", $2);
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
        printf("[Initialisation] %s\n", $2);
    }
};
Expression
    : Expression tADD Expression {
        $$ = $1 + $3;
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->value = $$;
        sym->dtype = current_type;
        printf("[ADD] %d\n", $$);
        add_tmp(sym);
    }
    | Expression tSOU Expression
    | Expression tMUL Expression
    | Expression tDIV Expression
    | Expression tPERCENT Expression
    | Expression tANDLOG Expression
    | Expression tORLOG Expression {}
    | tPO Expression tPF {
        $$ = $2;
    }
    | Value {
        $$= $1;
    }
    ;

Value
    : NameVariable {
        int idx = get_index_by_name($1);
        if (idx >= 0) {
            symbol* sym = get_symbol(idx);
            if (sym->initialised == 0) {
                printf("[ERROR] Variable %s non initialisée\n", $1);
                exit(1);
            }
            $$ = sym->value;
        } else {
            printf("[ERROR] Variable %s non déclarée\n", $1);
            exit(1);
        }
    }
    | tNB {
        
        $$ = $1;
    }
    | tTRUE {
        $$ = 1;
    }
    | tFALSE {
        $$ = 0;
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

  int indx = get_index_by_name("b");
  printf("Index de b : %d\n", indx);
  yyparse();
  
  printf(">> Fin yyparse\n");
  print_table();
  indx = get_index_by_name("b");
  printf("Index de b : %d\n", indx);
  free_table();
  return 0;
}
