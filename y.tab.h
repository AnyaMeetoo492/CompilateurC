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
    tNB = 258,                     /* tNB  */
    tID = 259,                     /* tID  */
    tVIDE = 260,                   /* tVIDE  */
    tEGAL = 261,                   /* tEGAL  */
    tPO = 262,                     /* tPO  */
    tPF = 263,                     /* tPF  */
    tSOU = 264,                    /* tSOU  */
    tADD = 265,                    /* tADD  */
    tDIV = 266,                    /* tDIV  */
    tMUL = 267,                    /* tMUL  */
    tERROR = 268,                  /* tERROR  */
    tAO = 269,                     /* tAO  */
    tAF = 270,                     /* tAF  */
    tPOINT = 271,                  /* tPOINT  */
    tCO = 272,                     /* tCO  */
    tCF = 273,                     /* tCF  */
    tINF = 274,                    /* tINF  */
    tSUP = 275,                    /* tSUP  */
    tBACKSLASH = 276,              /* tBACKSLASH  */
    tCHAPEAU = 277,                /* tCHAPEAU  */
    tINTERROG = 278,               /* tINTERROG  */
    tEXCALM = 279,                 /* tEXCALM  */
    tDOLLAR = 280,                 /* tDOLLAR  */
    tPERCENT = 281,                /* tPERCENT  */
    tPTVIRGULE = 282,              /* tPTVIRGULE  */
    tVIRGULE = 283,                /* tVIRGULE  */
    tOR = 284,                     /* tOR  */
    tAND = 285,                    /* tAND  */
    tTILD = 286,                   /* tTILD  */
    tANDLOG = 287,                 /* tANDLOG  */
    tORLOG = 288,                  /* tORLOG  */
    tDD = 289,                     /* tDD  */
    tDG = 290,                     /* tDG  */
    tIF = 291,                     /* tIF  */
    tELSE = 292,                   /* tELSE  */
    tWHILE = 293,                  /* tWHILE  */
    tFOR = 294,                    /* tFOR  */
    tMAIN = 295,                   /* tMAIN  */
    tRETURN = 296,                 /* tRETURN  */
    tVOID = 297,                   /* tVOID  */
    tINT = 298,                    /* tINT  */
    tBOOL = 299,                   /* tBOOL  */
    tCHAR = 300,                   /* tCHAR  */
    tTRUE = 301,                   /* tTRUE  */
    tFALSE = 302                   /* tFALSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define tNB 258
#define tID 259
#define tVIDE 260
#define tEGAL 261
#define tPO 262
#define tPF 263
#define tSOU 264
#define tADD 265
#define tDIV 266
#define tMUL 267
#define tERROR 268
#define tAO 269
#define tAF 270
#define tPOINT 271
#define tCO 272
#define tCF 273
#define tINF 274
#define tSUP 275
#define tBACKSLASH 276
#define tCHAPEAU 277
#define tINTERROG 278
#define tEXCALM 279
#define tDOLLAR 280
#define tPERCENT 281
#define tPTVIRGULE 282
#define tVIRGULE 283
#define tOR 284
#define tAND 285
#define tTILD 286
#define tANDLOG 287
#define tORLOG 288
#define tDD 289
#define tDG 290
#define tIF 291
#define tELSE 292
#define tWHILE 293
#define tFOR 294
#define tMAIN 295
#define tRETURN 296
#define tVOID 297
#define tINT 298
#define tBOOL 299
#define tCHAR 300
#define tTRUE 301
#define tFALSE 302

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "compil.y"
 
  int nb; 
  char var; 
  char* str;  // nom de variable

#line 167 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
