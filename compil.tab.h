/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMPIL_TAB_H_INCLUDED
# define YY_YY_COMPIL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tNB = 258,                     /* tNB  */
    tID = 259,                     /* tID  */
    tVIDE = 260,                   /* tVIDE  */
    tEGAL = 261,                   /* tEGAL  */
    tMOINSMOINS = 262,             /* tMOINSMOINS  */
    tPO = 263,                     /* tPO  */
    tPF = 264,                     /* tPF  */
    tSOU = 265,                    /* tSOU  */
    tADD = 266,                    /* tADD  */
    tDIV = 267,                    /* tDIV  */
    tMUL = 268,                    /* tMUL  */
    tERROR = 269,                  /* tERROR  */
    tAO = 270,                     /* tAO  */
    tAF = 271,                     /* tAF  */
    tPOINT = 272,                  /* tPOINT  */
    tCO = 273,                     /* tCO  */
    tCF = 274,                     /* tCF  */
    tINF = 275,                    /* tINF  */
    tSUP = 276,                    /* tSUP  */
    tBACKSLASH = 277,              /* tBACKSLASH  */
    tCHAPEAU = 278,                /* tCHAPEAU  */
    tINTERROG = 279,               /* tINTERROG  */
    tEXCALM = 280,                 /* tEXCALM  */
    tDOLLAR = 281,                 /* tDOLLAR  */
    tPERCENT = 282,                /* tPERCENT  */
    tPTVIRGULE = 283,              /* tPTVIRGULE  */
    tVIRGULE = 284,                /* tVIRGULE  */
    tPLUSPLUS = 285,               /* tPLUSPLUS  */
    tOR = 286,                     /* tOR  */
    tAND = 287,                    /* tAND  */
    tTILD = 288,                   /* tTILD  */
    tANDLOG = 289,                 /* tANDLOG  */
    tORLOG = 290,                  /* tORLOG  */
    tDD = 291,                     /* tDD  */
    tDG = 292,                     /* tDG  */
    tIF = 293,                     /* tIF  */
    tELSE = 294,                   /* tELSE  */
    tWHILE = 295,                  /* tWHILE  */
    tFOR = 296,                    /* tFOR  */
    tMAIN = 297,                   /* tMAIN  */
    tRETURN = 298,                 /* tRETURN  */
    tVOID = 299,                   /* tVOID  */
    tINT = 300,                    /* tINT  */
    tBOOL = 301,                   /* tBOOL  */
    tCHAR = 302,                   /* tCHAR  */
    tTRUE = 303,                   /* tTRUE  */
    tFALSE = 304                   /* tFALSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "compil.y"
 
  int nb; 
  char var; 
  char* str;  // nom de variable

#line 119 "compil.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_COMPIL_TAB_H_INCLUDED  */
