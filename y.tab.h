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
    tMOINSMOINS = 260,             /* tMOINSMOINS  */
    tPO = 261,                     /* tPO  */
    tPF = 262,                     /* tPF  */
    tSOU = 263,                    /* tSOU  */
    tADD = 264,                    /* tADD  */
    tDIV = 265,                    /* tDIV  */
    tMUL = 266,                    /* tMUL  */
    tERROR = 267,                  /* tERROR  */
    tAO = 268,                     /* tAO  */
    tAF = 269,                     /* tAF  */
    tPOINT = 270,                  /* tPOINT  */
    tCO = 271,                     /* tCO  */
    tCF = 272,                     /* tCF  */
    tINF = 273,                    /* tINF  */
    tSUP = 274,                    /* tSUP  */
    tBACKSLASH = 275,              /* tBACKSLASH  */
    tCHAPEAU = 276,                /* tCHAPEAU  */
    tINTERROG = 277,               /* tINTERROG  */
    tEXCALM = 278,                 /* tEXCALM  */
    tDOLLAR = 279,                 /* tDOLLAR  */
    tPERCENT = 280,                /* tPERCENT  */
    tPTVIRGULE = 281,              /* tPTVIRGULE  */
    tVIRGULE = 282,                /* tVIRGULE  */
    tPLUSPLUS = 283,               /* tPLUSPLUS  */
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
    tELSEIF = 295,                 /* tELSEIF  */
    tNB = 296,                     /* tNB  */
    tID = 297,                     /* tID  */
    tMAIN = 298,                   /* tMAIN  */
    tRETURN = 299,                 /* tRETURN  */
    tVOID = 300,                   /* tVOID  */
    tINT = 301,                    /* tINT  */
    tBOOL = 302,                   /* tBOOL  */
    tCHAR = 303,                   /* tCHAR  */
    tTRUE = 304,                   /* tTRUE  */
    tFALSE = 305                   /* tFALSE  */
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
#define tMOINSMOINS 260
#define tPO 261
#define tPF 262
#define tSOU 263
#define tADD 264
#define tDIV 265
#define tMUL 266
#define tERROR 267
#define tAO 268
#define tAF 269
#define tPOINT 270
#define tCO 271
#define tCF 272
#define tINF 273
#define tSUP 274
#define tBACKSLASH 275
#define tCHAPEAU 276
#define tINTERROG 277
#define tEXCALM 278
#define tDOLLAR 279
#define tPERCENT 280
#define tPTVIRGULE 281
#define tVIRGULE 282
#define tPLUSPLUS 283
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
#define tELSEIF 295
#define tNB 296
#define tID 297
#define tMAIN 298
#define tRETURN 299
#define tVOID 300
#define tINT 301
#define tBOOL 302
#define tCHAR 303
#define tTRUE 304
#define tFALSE 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "compil.y"
 int nb; char var; 

#line 170 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
