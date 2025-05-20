%{
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "table_symbole.h"
#include "f_write_util.h"
int yylex ();
void yyerror(char *s);
int current_type;
int label_counter = 0;
int next_label() {
    return label_counter++;
}

%}
%union { 
  int nb; 
  char* str;  // nom de variable
}
%type <str> NameVariable
%type <nb> Expression

%token <nb> tNB
%token <str> tID
%token tVIDE tEGAL tPO tPF tSOU tADD tDIV tMUL tERROR tAO tAF tPOINT tCO tCF tINF tSUP tBACKSLASH tCHAPEAU tINTERROG tEXCALM tDOLLAR tPERCENT tPTVIRGULE tVIRGULE 
%token tOR tAND tTILD tANDLOG tORLOG tDD tDG
%token tIF tELSE tWHILE tFOR
%token tEGAL_EGAL tDIFF tINF_EGAL tSUP_EGAL
%left tEGAL_EGAL tDIFF
%left tINF tSUP tINF_EGAL tSUP_EGAL


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
ArgList : Declaration | Declaration tVIRGULE ArgList

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
    | Declaration tPTVIRGULE
    | InitAffect tPTVIRGULE
    | IfStatement

    ;

Retour 
    : tRETURN Expression
    ;
IfStatement
    : tIF tPO Expression tPF Body {
        printf("[IF] condition temporaire idx = %d\n", $3);
        int label_else = next_label();
        int label_end = next_label();

        f_write("JMF", $3, label_else, 0, 0, 0);
        // Bloc IF
        remove_all_tmp(); // Nettoyer avant le bloc
        // Code du corps généré dans $5
        f_write("JMP", label_end, 0, 0, 0, 0);
        f_write("LABEL", label_else, 0, 0, 0, 0);
        f_write("LABEL", label_end, 0, 0, 0, 0);
    }
    | tIF tPO Expression tPF Body tELSE Body {
        int label_else = next_label();
        int label_end = next_label();

        f_write("JMF", $3, label_else, 0, 0, 0);

        // les instructions du bloc if (dans $5) sont déjà exécutées par yyparse
        f_write("JMP", label_end, 0, 0, 0, 0);
        f_write("LABEL", label_else, 0, 0, 0, 0);
        
        // idem ici, bloc else déjà parcouru
        f_write("LABEL", label_end, 0, 0, 0, 0);
    }


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
    | Expression tSOU Expression {
        printf("[SOU] %d - %d\n", $1, $3);
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
        f_write("SUB",idx, 0, $1, 0, $3);
    }
    | Expression tMUL Expression{
        printf("[MUL] %d * %d\n", $1, $3);
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
        f_write("MUL",idx, 0, $1, 0, $3);
    }
    | Expression tDIV Expression {
        printf("[DIV] %d / %d\n", $1, $3);
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
        f_write("DIV",idx, 0, $1, 0, $3);
    }
        | Expression tINF Expression {
        printf("[INF] %d < %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;
        
        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("INF", idx, 0, $1, 0, $3);
    }
    | Expression tSUP Expression {
        printf("[SUP] %d > %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;

        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("SUP", idx, 0, $1, 0, $3);
    }
    | Expression tEGAL_EGAL Expression {
        printf("[EGAL_EGAL] %d == %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;

        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("EQU", idx, 0, $1, 0, $3);
    }
    | Expression tDIFF Expression {
        printf("[DIFF] %d != %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;

        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("NEQ", idx, 0, $1, 0, $3);
    }
    | Expression tINF_EGAL Expression {
        printf("[INF_EGAL] %d <= %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;

        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("INFE", idx, 0, $1, 0, $3);
    }
    | Expression tSUP_EGAL Expression {
        printf("[SUP_EGAL] %d >= %d\n", $1, $3);
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;

        add_tmp(sym);
        int idx = get_index(sym);
        $$ = idx;
        f_write("SUPE", idx, 0, $1, 0, $3);
    }

    | tPO Expression tPF {
        printf("[PARENTHESES] %d \n", $2);
        /*
        symbol* sym = malloc(sizeof(symbol));
        sym->type = VARIABLE;
        sym->scope = LOCAL;
        sym->initialised = 1;
        sym->name = strdup("tmp");
        sym->value = -1;
        sym->dtype = current_type;
        
        add_tmp(sym);
        int idx=get_index(sym);
        */
        $$=$2;
        f_write("COP",$2, 0, 0, 0, $2);
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
        if (idx < 0) {
            printf("[ERROR] Variable %s pas déclarée\n", $1);
            exit(1);
        }
        if (get_symbol(idx)->initialised == 0) {
            printf("[ERROR] Variable %s pas initialisée\n", $1);
            exit(1);
        }
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
