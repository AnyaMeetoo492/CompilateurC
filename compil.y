%{
#include <stdlib.h>
#include <stdio.h>
  int yylex ();
int var[26];
void yyerror(char *s);
%}
%union { int nb; char var; }
%token tVIDE tEGAL tPO tPF tSOU tADD tDIV tMUL tERROR tAO tAF tPOINT tCO tCF tINF tSUP tBACKSLASH tCHAPEAU tINTERROG tEXCALM tVERTICAL tDOLLAR tPERCENT tPTVIRGULE tVIRGULE
%token <nb> tNB
%token <var> tID
%token tMAIN tINT tVOID tRETURN
%start Programme
%%
Programme : FonctionMain;

FonctionMain : TypeMain tMAIN ArgFormat Body

TypeMain : tINT | tVOID 

ArgFormat : tPO tPF |tPO ArgList tPF
ArgList : TypeVariable NameVariable | TypeVariable NameVariable tVIRGULE ArgList
TypeVariable : tINT | tVOID 
NameVariable : tID

Body: tAO tAF | tAO Instructions tAF
Instructions : Instruction | Instruction Instructions
Instruction: Expression tPTVIRGULE
Expression : Initialisation | Affectation | Retour | Arithmetic
Retour : tRETURN Arithmetic
Initialisation : TypeVariable NameVariable | TypeVariable Affectation
Affectation : NameVariable tEGAL Value

Value : NameVariable | tNB
Arithmetic : Value | Add
Add : Value tADD tADD | Value tADD Value 


// yacc -d compil.y && flex compil.l && gcc y.tab.c lex.yy.c -o compil.exe && ./compil.exe < test.c 

%%
void yyerror(char *s) 
{ 
  fprintf(stderr, "%s\n", s); 
}
int main(void) {
  printf("Compilo\n"); // yydebug=1;
  yyparse();
  return 0;
} 
