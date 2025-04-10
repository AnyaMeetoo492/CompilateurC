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
    tERROR = 261,                  /* tERROR  */
    tEGAL = 262,                   /* tEGAL  */
    tADD = 263,                    /* tADD  */
    tSOU = 264,                    /* tSOU  */
    tMUL = 265,                    /* tMUL  */
    tDIV = 266,                    /* tDIV  */
    tPERCENT = 267,                /* tPERCENT  */
    tAND = 268,                    /* tAND  */
    tOR = 269,                     /* tOR  */
    tTILD = 270,                   /* tTILD  */
    tANDLOG = 271,                 /* tANDLOG  */
    tORLOG = 272,                  /* tORLOG  */
    tDD = 273,                     /* tDD  */
    tDG = 274,                     /* tDG  */
    tMOINSMOINS = 275,             /* tMOINSMOINS  */
    tPLUSPLUS = 276,               /* tPLUSPLUS  */
    tPO = 277,                     /* tPO  */
    tPF = 278,                     /* tPF  */
    tAO = 279,                     /* tAO  */
    tAF = 280,                     /* tAF  */
    tCO = 281,                     /* tCO  */
    tCF = 282,                     /* tCF  */
    tPOINT = 283,                  /* tPOINT  */
    tVIRGULE = 284,                /* tVIRGULE  */
    tPTVIRGULE = 285,              /* tPTVIRGULE  */
    tINF = 286,                    /* tINF  */
    tSUP = 287,                    /* tSUP  */
    tBACKSLASH = 288,              /* tBACKSLASH  */
    tCHAPEAU = 289,                /* tCHAPEAU  */
    tINTERROG = 290,               /* tINTERROG  */
    tEXCALM = 291,                 /* tEXCALM  */
    tDOLLAR = 292,                 /* tDOLLAR  */
    tIF = 293,                     /* tIF  */
    tELSEIF = 294,                 /* tELSEIF  */
    tELSE = 295,                   /* tELSE  */
    tWHILE = 296,                  /* tWHILE  */
    tFOR = 297,                    /* tFOR  */
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
#define tNB 258
#define tID 259
#define tVIDE 260
#define tERROR 261
#define tEGAL 262
#define tADD 263
#define tSOU 264
#define tMUL 265
#define tDIV 266
#define tPERCENT 267
#define tAND 268
#define tOR 269
#define tTILD 270
#define tANDLOG 271
#define tORLOG 272
#define tDD 273
#define tDG 274
#define tMOINSMOINS 275
#define tPLUSPLUS 276
#define tPO 277
#define tPF 278
#define tAO 279
#define tAF 280
#define tCO 281
#define tCF 282
#define tPOINT 283
#define tVIRGULE 284
#define tPTVIRGULE 285
#define tINF 286
#define tSUP 287
#define tBACKSLASH 288
#define tCHAPEAU 289
#define tINTERROG 290
#define tEXCALM 291
#define tDOLLAR 292
#define tIF 293
#define tELSEIF 294
#define tELSE 295
#define tWHILE 296
#define tFOR 297
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
#line 12 "compil.y"

    int nb;              // for numbers and expressions returning int
    char *var;           // for variable names and type keywords
    struct {
      char* name;
      int value;
    } affect;            // for Affectation results
  

#line 177 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
