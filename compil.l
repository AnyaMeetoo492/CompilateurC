%{ 
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%%
main { return tMAIN;}
return { return tRETURN;}

if { return tIF;}
else { return tELSE;}

while { return tWHILE;}
for { return tFOR;}

void { return tVOID;}
int { return tINT;}
bool { return tBOOL; }
char { return tCHAR; }

true { return tTRUE; }
false { return tFALSE; }

[ \t]+	{};
[0-9]+	{
	yylval.nb = atoi(yytext);
	return tNB;}

[a-z]+	{
	yylval.var = yytext[0];
	return tID;}

"="	{ return tEGAL;}
"-"	{ return tSOU;}
"+"	{ return tADD;}
"*"	{ return tMUL;}
"/"	{ return tDIV;}
"++" { return tPLUSPLUS;}
"--" { return tMOINSMOINS;}

"("	{ return tPO;}
")"	{ return tPF;}
"{" { return tAO;}
"}" { return tAF;}
"["	{ return tCO;}
"]"	{ return tCF;}

"." { return tPOINT;}
"\\" { return tBACKSLASH;}
"?"	{ return tINTERROG;}
";" { return tPTVIRGULE;}
"," { return tVIRGULE;}
"" { return tVIDE;}

"<"	{ return tINF;}
">"	{ return tSUP;}
">>" { return tDD;}
"<<" { return tDG;}

"^"	{ return tCHAPEAU;}
"!" { return tEXCALM;}
"$" { return tDOLLAR;}

"%" { return tPERCENT;}
"&" { return tAND;}
"|" { return tOR;}
"~"	{ return tTILD;}

"&&" { return tANDLOG;}
"||" { return tORLOG;}


\n	{ }
.	{ return tERROR;}

%%
int yywrap()
{
return 1 ;
}
