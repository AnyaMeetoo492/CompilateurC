%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%%

[ \t]+	{};
[0-9]+	{
	  //yylval.nb = atoi(yytext);
	  printf("tNB, %s, %d\n", yytext, yyleng);
	  return tNB;
	}
"="	{ printf("tEGAL, %s, %d\n", yytext, yyleng); }
"-"	{ printf("tSOU\n"); }
"+"	{ printf("tADD\n"); return tADD;}
"*"	{ printf("tMUL\n"); }
"/"	{ printf("tDIV\n"); }
"("	{ printf("tPO\n"); }
")"	{ printf("tPF\n"); }
"{" { printf("tAO\n"); }
"}" { printf("tAF\n"); }
"." { printf("tPOINT\n");}
"["	{ printf("tCO\n"); }
"]"	{ printf("tCF\n"); }
"<"	{ printf("tINF\n"); }
">"	{ printf("tSUP\n"); }
"\\" { printf("tBACKSLASH\n"); }
"^"	{ printf("tCHAPEAU\n"); }
"?"	{ printf("tINTERROG\n"); }
"!" { printf("tEXCLAM\n"); }
"|" { printf("tVERTICAL\n"); }
"$" { printf("tDOLLAR\n"); }
"%" { printf("tPERCENT\n"); }
";" { printf("tPTVIRGULE\n"); }
[a-z]	{
	  //yylval.var = yytext[0];
	  printf("tID\n");
	}
\n	{ printf("tFL\n"); }
.	{ printf("tERROR\n"); }
main { printf("tMAIN, %s, %d\n", yytext, yyleng);}
int { printf("tINT\n");}
void { printf("tVOID, %s, %d\n", yytext, yyleng);}
%%
int yywrap()
{
return 1 ;
}
int main ()
{
yylex() ;
return 1 ;
}
