  %{
  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "table_symbole.h"

  int yylex ();
  void yyerror(char *s);
  %}

  //---------------------- TYPES ----------------------
  %union {
    int nb;              // for numbers and expressions returning int
    char *var;           // for variable names and type keywords
    struct {
      char* name;
      int value;
    } affect;            // for Affectation results
  }

  // Tokens with values
  %token <nb> tNB
  %token <var> tID

  // Non-terminals with specific types
  %type <var> TypeMain TypeVariable NameVariable
  %type <nb> ValueArithmetic Arithmetic Value Bitwise BitwiseAnd BitwiseOr
  %type <nb> ValueLogic Logic AndLogic OrLogic
  %type <affect> Affectation


  //---------------------- TOKENS ----------------------
  %token tVIDE tERROR

  %token tEGAL tADD tSOU tMUL tDIV tPERCENT
  %token tAND tOR tTILD tANDLOG tORLOG tDD tDG
  %token tMOINSMOINS tPLUSPLUS

  %token tPO tPF tAO tAF tCO tCF
  %token tPOINT tVIRGULE tPTVIRGULE
  %token tINF tSUP tBACKSLASH tCHAPEAU tINTERROG tEXCALM tDOLLAR

  %token tIF tELSEIF tELSE tWHILE tFOR

  %token tMAIN tRETURN
  %token tVOID tINT tBOOL tCHAR tTRUE tFALSE

  //---------------------- START ----------------------
  %start Programme

  //---------------------- PRECEDENCE ----------------------
  %left tAND tOR tANDLOG tORLOG
  %left tADD tSOU tMOINSMOINS tPLUSPLUS 
  %left tMUL tDIV tPERCENT

  %%

  //---------------------- TYPES ----------------------

  TypeMain : tINT { $$ = "int"; }
          | tVOID { $$ = "void"; }
  TypeVariable : tINT { $$ = "int"; }
              | tVOID { $$ = "void"; }
              | tBOOL { $$ = "bool"; }
              | tCHAR { $$ = "char"; }

  NameVariable : tID { $$ = $1; }
  Value : Arithmetic | Logic
  ValueArithmetic : NameVariable { $$ = 0; } | tNB { $$ = $1; }

  //---------------------- ARITHMETIC ----------------------

  Arithmetic : ValueArithmetic
            | Bitwise 
            | tPO Arithmetic tPF { $$ = $2; }
            | Arithmetic tADD Arithmetic { $$ = $1 + $3; }
            | Arithmetic tSOU Arithmetic { $$ = $1 - $3; }
            | Arithmetic tMUL Arithmetic { $$ = $1 * $3; }
            | Arithmetic tDIV Arithmetic { $$ = $1 / $3; }
            | Arithmetic tPERCENT Arithmetic { $$ = $1 % $3; }

  Add : ValueArithmetic tPLUSPLUS
  Sou : ValueArithmetic tMOINSMOINS

  //---------------------- BITWISE ----------------------

  Bitwise : BitwiseAnd | BitwiseOr
  BitwiseAnd : Arithmetic tAND Arithmetic { $$ = $1 & $3; }
  BitwiseOr : Arithmetic tOR Arithmetic { $$ = $1 | $3; }

  //---------------------- LOGIC ----------------------

  ValueLogic : tTRUE { $$ = 1; } | tFALSE { $$ = 0; } | NameVariable { $$ = 0; }
  Logic : AndLogic | OrLogic | ValueLogic | tPO Logic tPF { $$ = $2; }
  AndLogic : Logic tANDLOG Logic { $$ = $1 && $3; }
  OrLogic : Logic tORLOG Logic { $$ = $1 || $3; }

  //---------------------- CONTROL STRUCTURES ----------------------

  Control : If | While | For
  If : tIF tPO Logic tPF tAO Instructions tAF 
    | tIF tPO Logic tPF tAO Instructions tAF tELSE tAO Instructions tAF
    | tIF tPO Logic tPF tAO Instructions tAF tELSEIF tPO Logic tPF tAO Instructions tAF
  While : tWHILE tPO Logic tPF tAO Instructions tAF
  For : tFOR tPO Logic tPF tAO Instructions tAF

  //---------------------- PROGRAMME ----------------------

  Programme : FonctionMain
            | Fonction
            | Fonction FonctionMain

  //---------------------- FUNCTIONS ----------------------

  FonctionMain : TypeMain tMAIN ArgFormat Body
  Fonction : TypeVariable tID ArgFormat Body

  ArgFormat : tPO tPF 
            | tPO ArgList tPF
  ArgList : TypeVariable NameVariable 
          | TypeVariable NameVariable tVIRGULE ArgList

  Retour : tRETURN Arithmetic

  //---------------------- BODY ----------------------

  Body: tAO tAF | tAO Instructions tAF
  Instructions : Instruction | Instruction Instructions
  Instruction: Expression tPTVIRGULE

  //---------------------- EXPRESSIONS ----------------------

  Expression : Initialisation 
            | Affectation 
            | Retour 
            | Add 
            | Sou
            | Control

  Initialisation : 
    TypeVariable NameVariable {
      symbol * s = malloc(sizeof(symbol));
      s->name = $2;
      s->type = VARIABLE;
      s->scope = LOCAL;
      s->initialised = 0;
      s->value = 0;
      if (strcmp($1, "int") == 0) s->dtype = INT;
      add_symbol(s);
    }

  | TypeVariable Affectation {
      symbol* s = malloc(sizeof(symbol));
      s->name = $2.name;
      s->type = VARIABLE;
      s->scope = LOCAL;
      s->initialised = 1;
      s->value = $2.value;

      if (strcmp($1, "int") == 0) s->dtype = INT;
      add_symbol(s);
    }

  Affectation : NameVariable tEGAL Value {
    $$.name = $1;
    $$.value = $3;
  }

  %%

  //---------------------- ERROR ----------------------

  void yyerror(char *s) { 
    fprintf(stderr, "Error: %s\n", s); 
  }

  int main(void) {
    printf("Compilo\n");
    yyparse();

    return 0;
  }
