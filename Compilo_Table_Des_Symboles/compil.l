%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
%}

%%

main        { return tMAIN; }
return      { return tRETURN; }
if          { return tIF; }
elseif      { return tELSEIF; }
else        { return tELSE; }
while       { return tWHILE; }
for         { return tFOR; }

void        { return tVOID; }
int         { return tINT; }
bool        { return tBOOL; }
char        { return tCHAR; }

true        { return tTRUE; }
false       { return tFALSE; }

[ \t]+      { }

[0-9]+      {
    yylval.nb = atoi(yytext);
    return tNB;
}

[a-z]+      {
    yylval.var = strdup(yytext);
    return tID;
}

"="         { return tEGAL; }
"++"        { return tPLUSPLUS; }
"--"        { return tMOINSMOINS; }
"+"         { return tADD; }
"-"         { return tSOU; }
"*"         { return tMUL; }
"/"         { return tDIV; }
"%"         { return tPERCENT; }

"&"         { return tAND; }
"|"         { return tOR; }
"~"         { return tTILD; }
"&&"        { return tANDLOG; }
"||"        { return tORLOG; }
">>"        { return tDD; }
"<<"        { return tDG; }

"("         { return tPO; }
")"         { return tPF; }
"{"         { return tAO; }
"}"         { return tAF; }
"["         { return tCO; }
"]"         { return tCF; }

"."         { return tPOINT; }
";"         { return tPTVIRGULE; }
","         { return tVIRGULE; }
"\\"        { return tBACKSLASH; }
"^"         { return tCHAPEAU; }
"?"         { return tINTERROG; }
"!"         { return tEXCALM; }
"$"         { return tDOLLAR; }
"<"         { return tINF; }
">"         { return tSUP; }

\n          { }
.           { return tERROR; }

%%

int yywrap() {
    return 1;
}
