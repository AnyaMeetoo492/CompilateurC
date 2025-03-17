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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    tVIDE = 258,                   /* tVIDE  */
    tEGAL = 259,                   /* tEGAL  */
    tPO = 260,                     /* tPO  */
    tPF = 261,                     /* tPF  */
    tSOU = 262,                    /* tSOU  */
    tADD = 263,                    /* tADD  */
    tDIV = 264,                    /* tDIV  */
    tMUL = 265,                    /* tMUL  */
    tERROR = 266,                  /* tERROR  */
    tAO = 267,                     /* tAO  */
    tAF = 268,                     /* tAF  */
    tPOINT = 269,                  /* tPOINT  */
    tCO = 270,                     /* tCO  */
    tCF = 271,                     /* tCF  */
    tINF = 272,                    /* tINF  */
    tSUP = 273,                    /* tSUP  */
    tBACKSLASH = 274,              /* tBACKSLASH  */
    tCHAPEAU = 275,                /* tCHAPEAU  */
    tINTERROG = 276,               /* tINTERROG  */
    tEXCALM = 277,                 /* tEXCALM  */
    tVERTICAL = 278,               /* tVERTICAL  */
    tDOLLAR = 279,                 /* tDOLLAR  */
    tPERCENT = 280,                /* tPERCENT  */
    tPTVIRGULE = 281,              /* tPTVIRGULE  */
    tVIRGULE = 282,                /* tVIRGULE  */
    tNB = 283,                     /* tNB  */
    tID = 284,                     /* tID  */
    tMAIN = 285,                   /* tMAIN  */
    tINT = 286,                    /* tINT  */
    tVOID = 287,                   /* tVOID  */
    tRETURN = 288                  /* tRETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define tVIDE 258
#define tEGAL 259
#define tPO 260
#define tPF 261
#define tSOU 262
#define tADD 263
#define tDIV 264
#define tMUL 265
#define tERROR 266
#define tAO 267
#define tAF 268
#define tPOINT 269
#define tCO 270
#define tCF 271
#define tINF 272
#define tSUP 273
#define tBACKSLASH 274
#define tCHAPEAU 275
#define tINTERROG 276
#define tEXCALM 277
#define tVERTICAL 278
#define tDOLLAR 279
#define tPERCENT 280
#define tPTVIRGULE 281
#define tVIRGULE 282
#define tNB 283
#define tID 284
#define tMAIN 285
#define tINT 286
#define tVOID 287
#define tRETURN 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "compil.y"
 int nb; char var; 

#line 136 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
