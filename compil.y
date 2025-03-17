%{
#include <stdlib.h>
#include <stdio.h>
  int yylex ();
int var[26];
void yyerror(char *s);
%}
%union { int nb; char var; }
%token tVIDE tEGAL tMOINSMOINS tPO tPF tSOU tADD tDIV tMUL tERROR tAO tAF tPOINT tCO tCF tINF tSUP tBACKSLASH tCHAPEAU tINTERROG tEXCALM tDOLLAR tPERCENT tPTVIRGULE tVIRGULE tPLUSPLUS
%token tOR tAND tTILD tANDLOG tORLOG tDD tDG
%token tIF tELSE tWHILE tFOR
%token <nb> tNB
%token <var> tID
%token tMAIN tRETURN 
%token tVOID tINT tBOOL tCHAR tTRUE tFALSE
%start Programme
%left tAND tOR tANDLOG tORLOG
%left tADD tSOU tMOINSMOINS tPLUSPLUS 
%left tMUL tDIV tPERCENT
%%
Programme : FonctionMain;

FonctionMain : TypeMain tMAIN ArgFormat Body

TypeMain : tINT | tVOID 

ArgFormat : tPO tPF |tPO ArgList tPF
ArgList : TypeVariable NameVariable | TypeVariable NameVariable tVIRGULE ArgList
TypeVariable : tINT | tVOID | tBOOL | tCHAR
NameVariable : tID

Body: tAO tAF | tAO Instructions tAF
Instructions : Instruction | Instruction Instructions
Instruction: Expression tPTVIRGULE
Expression : Initialisation | Affectation | Retour | Add | Sou

Value : Arithmetic | Logic

Retour : tRETURN Arithmetic
Initialisation : TypeVariable NameVariable | TypeVariable Affectation
Affectation : NameVariable tEGAL Value

ValueArithmetic : NameVariable | tNB
Arithmetic : ValueArithmetic | Bitwise | tPO Arithmetic tPF 
            | Arithmetic tADD Arithmetic 
            | Arithmetic tSOU Arithmetic 
            | Arithmetic tMUL Arithmetic 
            | Arithmetic tDIV Arithmetic
            | Arithmetic tPERCENT Arithmetic

Add : ValueArithmetic tPLUSPLUS 
Sou : ValueArithmetic tMOINSMOINS

Bitwise : BitwiseAnd | BitwiseOr
BitwiseAnd : Arithmetic tAND Arithmetic
BitwiseOr : Arithmetic tOR Arithmetic

ValueLogic : tTRUE | tFALSE | NameVariable
Logic : AndLogic | OrLogic | ValueLogic | tPO Logic tPF
AndLogic : Logic tANDLOG Logic
OrLogic : Logic tORLOG Logic 

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
