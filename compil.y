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
    | tVOID  { current_type = 1; }
    | tBOOL  { current_type = 2; }
    | tCHAR  { current_type = 3; }

NameVariable : tID {
        printf("[DEBUG]");
        printf("[Name] %s\n", $1);
        symbol* sym = malloc(sizeof(symbol));
        sym->name = strdup($1);
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 0;
        sym->value = 0;
        sym->dtype = current_type;
        add_symbol(sym);
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
    int idx = get_index_by_name($1);
    if (idx >= 0) {
        symbol* sym = get_symbol(idx);
        sym->initialised = 1;
    }
};
Initialisation : TypeVariable NameVariable;
InitAffect : TypeVariable NameVariable tEGAL Expression;
Expression
    : Expression tADD Expression
    | Expression tSOU Expression
    | Expression tMUL Expression
    | Expression tDIV Expression
    | Expression tPERCENT Expression
    | Expression tANDLOG Expression
    | Expression tORLOG Expression
    | tPO Expression tPF
    | Value
    ;

Value
    : NameVariable
    | tNB
    | tTRUE
    | tFALSE
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
  yyparse();
  
  printf(">> Fin yyparse\n");
  return 0;
}
