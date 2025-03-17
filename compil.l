%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%%
main { printf("tMAIN, %s, %d\n", yytext, yyleng); return tMAIN;}
int { printf("tINT\n"); return tINT;}
void { printf("tVOID, %s, %d\n", yytext, yyleng); return tVOID;}
return { printf("tRETURN\n"); return tRETURN;}

[ \t]+	{};
[0-9]+	{
	  //yylval.nb = atoi(yytext);
	  printf("tNB, %s, %d\n", yytext, yyleng);
	  return tNB;
	}
"="	{ printf("tEGAL, %s, %d\n", yytext, yyleng); return tEGAL;}
"-"	{ printf("tSOU\n"); return tSOU;}
"+"	{ printf("tADD\n"); return tADD;}
"*"	{ printf("tMUL\n"); return tMUL;}
"/"	{ printf("tDIV\n"); return tDIV;}
"("	{ printf("tPO\n"); return tPO;}
")"	{ printf("tPF\n"); return tPF;}
"{" { printf("tAO\n"); return tAO;}
"}" { printf("tAF\n"); return tAF;}
"." { printf("tPOINT\n"); return tPOINT;}
"["	{ printf("tCO\n"); return tCO;}
"]"	{ printf("tCF\n"); return tCF;}
"<"	{ printf("tINF\n"); return tINF;}
">"	{ printf("tSUP\n"); return tSUP;}
"\\" { printf("tBACKSLASH\n"); return tBACKSLASH;}
"^"	{ printf("tCHAPEAU\n"); return tCHAPEAU;}
"?"	{ printf("tINTERROG\n"); return tINTERROG;}
"!" { printf("tEXCLAM\n"); return tEXCALM;}
"|" { printf("tVERTICAL\n"); return tVERTICAL;}
"$" { printf("tDOLLAR\n"); return tDOLLAR;}
"%" { printf("tPERCENT\n"); return tPERCENT;}
";" { printf("tPTVIRGULE\n"); return tPTVIRGULE;}
"," { printf("tVIRGULE\n"); return tVIRGULE;}
"" { printf("tVIDE\n"); return tVIDE;}
[a-z]+	{
	  //yylval.var = yytext[0];
	  printf("tID\n");
	  return tID;
	}
\n	{ printf("tFL\n"); }
.	{ printf("tERROR\n"); return tERROR;}

%%
int yywrap()
{
return 1 ;
}
