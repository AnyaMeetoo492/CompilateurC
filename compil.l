%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%%
main { printf("tMAIN, %s, %d\n", yytext, yyleng); return tMAIN;}
return { printf("tRETURN\n"); return tRETURN;}

void { printf("tVOID, %s, %d\n", yytext, yyleng); return tVOID;}
int { printf("tINT\n"); return tINT;}
bool { printf("tBOOL\n"); return tBOOL; }
char { printf("tCHAR\n"); return tCHAR; }

true { printf("tTRUE\n"); return tTRUE; }
false { printf("tFALSE\n"); return tFALSE; }

[ \t]+	{};
[0-9]+	{
	  //yylval.nb = atoi(yytext);
	  printf("tNB, %s, %d\n", yytext, yyleng);
	  return tNB;
	}

[a-z]+	{
	  //yylval.var = yytext[0];
	  printf("tID\n");
	  return tID;
	}

"="	{ printf("tEGAL, %s, %d\n", yytext, yyleng); return tEGAL;}
"-"	{ printf("tSOU\n"); return tSOU;}
"+"	{ printf("tADD\n"); return tADD;}
"*"	{ printf("tMUL\n"); return tMUL;}
"/"	{ printf("tDIV\n"); return tDIV;}
"++" { printf("tPLUSPLUS\n"); return tPLUSPLUS;}
"--" { printf("tMOINSMOINS\n"); return tMOINSMOINS;}

"("	{ printf("tPO\n"); return tPO;}
")"	{ printf("tPF\n"); return tPF;}
"{" { printf("tAO\n"); return tAO;}
"}" { printf("tAF\n"); return tAF;}
"["	{ printf("tCO\n"); return tCO;}
"]"	{ printf("tCF\n"); return tCF;}

"." { printf("tPOINT\n"); return tPOINT;}
"\\" { printf("tBACKSLASH\n"); return tBACKSLASH;}
"?"	{ printf("tINTERROG\n"); return tINTERROG;}
";" { printf("tPTVIRGULE\n"); return tPTVIRGULE;}
"," { printf("tVIRGULE\n"); return tVIRGULE;}
"" { printf("tVIDE\n"); return tVIDE;}

"<"	{ printf("tINF\n"); return tINF;}
">"	{ printf("tSUP\n"); return tSUP;}
">>" { printf("tDD\n"); return tDD;}
"<<" { printf("tDG\n"); return tDG;}

"^"	{ printf("tCHAPEAU\n"); return tCHAPEAU;}
"!" { printf("tEXCLAM\n"); return tEXCALM;}
"$" { printf("tDOLLAR\n"); return tDOLLAR;}

"%" { printf("tPERCENT\n"); return tPERCENT;}
"&" { printf("tAND\n"); return tAND;}
"|" { printf("tOR\n"); return tOR;}
"~"	{ printf("tTILD\n"); return tTILD;}

"&&" { printf("tANDLOG\n"); return tANDLOG;}
"||" { printf("tORLOG\n"); return tORLOG;}





\n	{ printf("tFL\n"); }
.	{ printf("tERROR\n"); return tERROR;}

%%
int yywrap()
{
return 1 ;
}
