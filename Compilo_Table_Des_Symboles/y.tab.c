/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "compil.y"

  #include <stdlib.h>
  #include <stdio.h>
  #include <string.h>
  #include "table_symbole.h"

  int yylex ();
  void yyerror(char *s);
  

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
  

#line 245 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tNB = 3,                        /* tNB  */
  YYSYMBOL_tID = 4,                        /* tID  */
  YYSYMBOL_tVIDE = 5,                      /* tVIDE  */
  YYSYMBOL_tERROR = 6,                     /* tERROR  */
  YYSYMBOL_tEGAL = 7,                      /* tEGAL  */
  YYSYMBOL_tADD = 8,                       /* tADD  */
  YYSYMBOL_tSOU = 9,                       /* tSOU  */
  YYSYMBOL_tMUL = 10,                      /* tMUL  */
  YYSYMBOL_tDIV = 11,                      /* tDIV  */
  YYSYMBOL_tPERCENT = 12,                  /* tPERCENT  */
  YYSYMBOL_tAND = 13,                      /* tAND  */
  YYSYMBOL_tOR = 14,                       /* tOR  */
  YYSYMBOL_tTILD = 15,                     /* tTILD  */
  YYSYMBOL_tANDLOG = 16,                   /* tANDLOG  */
  YYSYMBOL_tORLOG = 17,                    /* tORLOG  */
  YYSYMBOL_tDD = 18,                       /* tDD  */
  YYSYMBOL_tDG = 19,                       /* tDG  */
  YYSYMBOL_tMOINSMOINS = 20,               /* tMOINSMOINS  */
  YYSYMBOL_tPLUSPLUS = 21,                 /* tPLUSPLUS  */
  YYSYMBOL_tPO = 22,                       /* tPO  */
  YYSYMBOL_tPF = 23,                       /* tPF  */
  YYSYMBOL_tAO = 24,                       /* tAO  */
  YYSYMBOL_tAF = 25,                       /* tAF  */
  YYSYMBOL_tCO = 26,                       /* tCO  */
  YYSYMBOL_tCF = 27,                       /* tCF  */
  YYSYMBOL_tPOINT = 28,                    /* tPOINT  */
  YYSYMBOL_tVIRGULE = 29,                  /* tVIRGULE  */
  YYSYMBOL_tPTVIRGULE = 30,                /* tPTVIRGULE  */
  YYSYMBOL_tINF = 31,                      /* tINF  */
  YYSYMBOL_tSUP = 32,                      /* tSUP  */
  YYSYMBOL_tBACKSLASH = 33,                /* tBACKSLASH  */
  YYSYMBOL_tCHAPEAU = 34,                  /* tCHAPEAU  */
  YYSYMBOL_tINTERROG = 35,                 /* tINTERROG  */
  YYSYMBOL_tEXCALM = 36,                   /* tEXCALM  */
  YYSYMBOL_tDOLLAR = 37,                   /* tDOLLAR  */
  YYSYMBOL_tIF = 38,                       /* tIF  */
  YYSYMBOL_tELSEIF = 39,                   /* tELSEIF  */
  YYSYMBOL_tELSE = 40,                     /* tELSE  */
  YYSYMBOL_tWHILE = 41,                    /* tWHILE  */
  YYSYMBOL_tFOR = 42,                      /* tFOR  */
  YYSYMBOL_tMAIN = 43,                     /* tMAIN  */
  YYSYMBOL_tRETURN = 44,                   /* tRETURN  */
  YYSYMBOL_tVOID = 45,                     /* tVOID  */
  YYSYMBOL_tINT = 46,                      /* tINT  */
  YYSYMBOL_tBOOL = 47,                     /* tBOOL  */
  YYSYMBOL_tCHAR = 48,                     /* tCHAR  */
  YYSYMBOL_tTRUE = 49,                     /* tTRUE  */
  YYSYMBOL_tFALSE = 50,                    /* tFALSE  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_TypeMain = 52,                  /* TypeMain  */
  YYSYMBOL_TypeVariable = 53,              /* TypeVariable  */
  YYSYMBOL_NameVariable = 54,              /* NameVariable  */
  YYSYMBOL_Value = 55,                     /* Value  */
  YYSYMBOL_ValueArithmetic = 56,           /* ValueArithmetic  */
  YYSYMBOL_Arithmetic = 57,                /* Arithmetic  */
  YYSYMBOL_Add = 58,                       /* Add  */
  YYSYMBOL_Sou = 59,                       /* Sou  */
  YYSYMBOL_Bitwise = 60,                   /* Bitwise  */
  YYSYMBOL_BitwiseAnd = 61,                /* BitwiseAnd  */
  YYSYMBOL_BitwiseOr = 62,                 /* BitwiseOr  */
  YYSYMBOL_ValueLogic = 63,                /* ValueLogic  */
  YYSYMBOL_Logic = 64,                     /* Logic  */
  YYSYMBOL_AndLogic = 65,                  /* AndLogic  */
  YYSYMBOL_OrLogic = 66,                   /* OrLogic  */
  YYSYMBOL_Control = 67,                   /* Control  */
  YYSYMBOL_If = 68,                        /* If  */
  YYSYMBOL_While = 69,                     /* While  */
  YYSYMBOL_For = 70,                       /* For  */
  YYSYMBOL_Programme = 71,                 /* Programme  */
  YYSYMBOL_FonctionMain = 72,              /* FonctionMain  */
  YYSYMBOL_Fonction = 73,                  /* Fonction  */
  YYSYMBOL_ArgFormat = 74,                 /* ArgFormat  */
  YYSYMBOL_ArgList = 75,                   /* ArgList  */
  YYSYMBOL_Retour = 76,                    /* Retour  */
  YYSYMBOL_Body = 77,                      /* Body  */
  YYSYMBOL_Instructions = 78,              /* Instructions  */
  YYSYMBOL_Instruction = 79,               /* Instruction  */
  YYSYMBOL_Expression = 80,                /* Expression  */
  YYSYMBOL_Initialisation = 81,            /* Initialisation  */
  YYSYMBOL_Affectation = 82                /* Affectation  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  131

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    62,    63,    64,    65,    67,    68,
      68,    69,    69,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    83,    87,    87,    88,    89,    93,    93,    93,
      94,    94,    94,    94,    95,    96,   100,   100,   100,   101,
     102,   103,   104,   105,   109,   110,   111,   115,   116,   118,
     119,   120,   121,   123,   127,   127,   128,   128,   129,   133,
     134,   135,   136,   137,   138,   141,   152,   164
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tNB", "tID", "tVIDE",
  "tERROR", "tEGAL", "tADD", "tSOU", "tMUL", "tDIV", "tPERCENT", "tAND",
  "tOR", "tTILD", "tANDLOG", "tORLOG", "tDD", "tDG", "tMOINSMOINS",
  "tPLUSPLUS", "tPO", "tPF", "tAO", "tAF", "tCO", "tCF", "tPOINT",
  "tVIRGULE", "tPTVIRGULE", "tINF", "tSUP", "tBACKSLASH", "tCHAPEAU",
  "tINTERROG", "tEXCALM", "tDOLLAR", "tIF", "tELSEIF", "tELSE", "tWHILE",
  "tFOR", "tMAIN", "tRETURN", "tVOID", "tINT", "tBOOL", "tCHAR", "tTRUE",
  "tFALSE", "$accept", "TypeMain", "TypeVariable", "NameVariable", "Value",
  "ValueArithmetic", "Arithmetic", "Add", "Sou", "Bitwise", "BitwiseAnd",
  "BitwiseOr", "ValueLogic", "Logic", "AndLogic", "OrLogic", "Control",
  "If", "While", "For", "Programme", "FonctionMain", "Fonction",
  "ArgFormat", "ArgList", "Retour", "Body", "Instructions", "Instruction",
  "Expression", "Initialisation", "Affectation", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-46)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-30)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,    -1,    16,   -46,   -46,     5,    20,    60,   -46,   -33,
      81,    81,   -46,   -46,   -46,   -46,    -2,    47,    47,   -46,
     -46,   -46,   101,    84,    72,   -46,   -46,   -46,    82,   -46,
     -46,   -46,    86,    90,    93,     7,   101,   115,     2,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,    98,    83,    96,   -46,
     -46,   112,    14,    14,    14,     7,   -46,   -46,   131,   -46,
     -46,   -46,   115,   -46,    12,   -46,   -46,   -46,   -46,   -46,
     -46,    14,   -46,   -46,   -46,   -46,    10,   -46,   -46,    24,
      49,   124,     7,     7,     7,     7,     7,     7,     7,    12,
      62,   -46,   131,    67,    65,    14,    14,   122,   137,   138,
     -46,    27,    27,   -46,   -46,   -46,   140,   140,   -46,   -46,
     -46,    83,    83,    83,   139,   141,   142,    59,   -46,   -46,
     143,   144,    14,    83,    79,   145,   147,   -46,    83,   148,
     -46
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     2,     6,     7,     0,     0,     0,    44,    45,
       0,     0,     1,     3,     2,    46,     0,     0,     0,    49,
       5,     4,     0,     0,     0,    47,    48,     8,    51,    50,
      12,    54,     0,     0,     0,     0,     0,    11,     0,    62,
      63,    64,    36,    37,    38,    61,     0,    56,     0,    59,
      60,     0,     0,     0,     0,     0,    11,    13,    53,    14,
      23,    24,    65,    66,     0,    22,    21,    55,    57,    58,
      52,     0,    27,    28,    29,    32,     0,    30,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    67,     9,    10,     0,     0,     0,     0,     0,     0,
      15,    16,    17,    18,    19,    20,    25,    26,    33,    34,
      35,     0,     0,     0,     0,     0,     0,    39,    42,    43,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
      41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,     1,   -22,   -46,   -19,   -29,   -46,   -46,   -46,
     -46,   -46,   -46,   -45,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   154,   -46,   158,   121,   -46,   156,   -43,   -46,   -46,
     -46,   146
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,    36,    56,    91,    57,    81,    39,    40,    59,
      60,    61,    75,    94,    77,    78,    41,    42,    43,    44,
       7,     8,     9,    17,    23,    45,    25,    46,    47,    48,
      49,    50
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,     6,    37,    -5,    68,    38,    58,    76,    79,    80,
      30,    27,    13,    14,    62,    30,    27,    22,    27,    93,
      -4,    19,    65,    66,    11,    37,    95,    96,    38,    55,
      74,    74,    74,    97,    89,    92,    71,    84,    85,    86,
      95,    96,    90,    20,    21,     3,     4,    98,    10,    74,
     109,   110,    22,   101,   102,   103,   104,   105,   106,   107,
      12,    72,    73,    72,    73,    95,    96,    90,   114,   115,
     116,    24,    99,    74,    74,    30,    27,   124,   -29,   -29,
     125,    95,    96,    95,    96,   129,    30,    27,   108,    37,
      37,    37,    38,    38,    38,    95,    96,    31,   120,   121,
      74,    37,   126,    16,    38,    27,    37,    29,    52,    38,
      32,    51,    53,    33,    34,    54,    35,    20,    21,     3,
       4,    32,    64,    67,    33,    34,    69,    35,    20,    21,
       3,     4,    82,    83,    84,    85,    86,    87,    88,    82,
      83,    84,    85,    86,    87,    88,   111,   100,    82,    83,
      84,    85,    86,     1,     2,     3,     4,    20,    21,     3,
       4,   112,   113,    15,   117,   122,   118,   119,   123,    18,
     127,   128,    70,   130,    26,     0,     0,     0,     0,     0,
       0,     0,    63
};

static const yytype_int16 yycheck[] =
{
      22,     0,    24,     4,    47,    24,    35,    52,    53,    54,
       3,     4,    45,    46,    36,     3,     4,    16,     4,    64,
       4,    23,    20,    21,     4,    47,    16,    17,    47,    22,
      52,    53,    54,    23,    22,    64,    22,    10,    11,    12,
      16,    17,    64,    45,    46,    47,    48,    23,    43,    71,
      95,    96,    51,    82,    83,    84,    85,    86,    87,    88,
       0,    49,    50,    49,    50,    16,    17,    89,   111,   112,
     113,    24,    23,    95,    96,     3,     4,   122,    16,    17,
     123,    16,    17,    16,    17,   128,     3,     4,    23,   111,
     112,   113,   111,   112,   113,    16,    17,    25,    39,    40,
     122,   123,    23,    22,   123,     4,   128,    23,    22,   128,
      38,    29,    22,    41,    42,    22,    44,    45,    46,    47,
      48,    38,     7,    25,    41,    42,    30,    44,    45,    46,
      47,    48,     8,     9,    10,    11,    12,    13,    14,     8,
       9,    10,    11,    12,    13,    14,    24,    23,     8,     9,
      10,    11,    12,    45,    46,    47,    48,    45,    46,    47,
      48,    24,    24,     9,    25,    22,    25,    25,    24,    11,
      25,    24,    51,    25,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    45,    46,    47,    48,    52,    53,    71,    72,    73,
      43,     4,     0,    45,    46,    72,    22,    74,    74,    23,
      45,    46,    53,    75,    24,    77,    77,     4,    54,    23,
       3,    25,    38,    41,    42,    44,    53,    54,    56,    58,
      59,    67,    68,    69,    70,    76,    78,    79,    80,    81,
      82,    29,    22,    22,    22,    22,    54,    56,    57,    60,
      61,    62,    54,    82,     7,    20,    21,    25,    78,    30,
      75,    22,    49,    50,    54,    63,    64,    65,    66,    64,
      64,    57,     8,     9,    10,    11,    12,    13,    14,    22,
      54,    55,    57,    64,    64,    16,    17,    23,    23,    23,
      23,    57,    57,    57,    57,    57,    57,    57,    23,    64,
      64,    24,    24,    24,    78,    78,    78,    25,    25,    25,
      39,    40,    22,    24,    64,    78,    23,    25,    24,    78,
      25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    57,    57,
      57,    58,    59,    60,    60,    61,    62,    63,    63,    63,
      64,    64,    64,    64,    65,    66,    67,    67,    67,    68,
      68,    68,    69,    70,    71,    71,    71,    72,    73,    74,
      74,    75,    75,    76,    77,    77,    78,    78,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     2,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     1,     1,     7,
      11,    14,     7,     7,     1,     1,     2,     4,     4,     2,
       3,     2,     4,     2,     2,     3,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* TypeMain: tINT  */
#line 60 "compil.y"
                  { (yyval.var) = "int"; }
#line 1407 "y.tab.c"
    break;

  case 3: /* TypeMain: tVOID  */
#line 61 "compil.y"
                  { (yyval.var) = "void"; }
#line 1413 "y.tab.c"
    break;

  case 4: /* TypeVariable: tINT  */
#line 62 "compil.y"
                      { (yyval.var) = "int"; }
#line 1419 "y.tab.c"
    break;

  case 5: /* TypeVariable: tVOID  */
#line 63 "compil.y"
                      { (yyval.var) = "void"; }
#line 1425 "y.tab.c"
    break;

  case 6: /* TypeVariable: tBOOL  */
#line 64 "compil.y"
                      { (yyval.var) = "bool"; }
#line 1431 "y.tab.c"
    break;

  case 7: /* TypeVariable: tCHAR  */
#line 65 "compil.y"
                      { (yyval.var) = "char"; }
#line 1437 "y.tab.c"
    break;

  case 8: /* NameVariable: tID  */
#line 67 "compil.y"
                     { (yyval.var) = (yyvsp[0].var); }
#line 1443 "y.tab.c"
    break;

  case 11: /* ValueArithmetic: NameVariable  */
#line 69 "compil.y"
                                 { (yyval.nb) = 0; }
#line 1449 "y.tab.c"
    break;

  case 12: /* ValueArithmetic: tNB  */
#line 69 "compil.y"
                                                   { (yyval.nb) = (yyvsp[0].nb); }
#line 1455 "y.tab.c"
    break;

  case 15: /* Arithmetic: tPO Arithmetic tPF  */
#line 75 "compil.y"
                                 { (yyval.nb) = (yyvsp[-1].nb); }
#line 1461 "y.tab.c"
    break;

  case 16: /* Arithmetic: Arithmetic tADD Arithmetic  */
#line 76 "compil.y"
                                         { (yyval.nb) = (yyvsp[-2].nb) + (yyvsp[0].nb); }
#line 1467 "y.tab.c"
    break;

  case 17: /* Arithmetic: Arithmetic tSOU Arithmetic  */
#line 77 "compil.y"
                                         { (yyval.nb) = (yyvsp[-2].nb) - (yyvsp[0].nb); }
#line 1473 "y.tab.c"
    break;

  case 18: /* Arithmetic: Arithmetic tMUL Arithmetic  */
#line 78 "compil.y"
                                         { (yyval.nb) = (yyvsp[-2].nb) * (yyvsp[0].nb); }
#line 1479 "y.tab.c"
    break;

  case 19: /* Arithmetic: Arithmetic tDIV Arithmetic  */
#line 79 "compil.y"
                                         { (yyval.nb) = (yyvsp[-2].nb) / (yyvsp[0].nb); }
#line 1485 "y.tab.c"
    break;

  case 20: /* Arithmetic: Arithmetic tPERCENT Arithmetic  */
#line 80 "compil.y"
                                             { (yyval.nb) = (yyvsp[-2].nb) % (yyvsp[0].nb); }
#line 1491 "y.tab.c"
    break;

  case 25: /* BitwiseAnd: Arithmetic tAND Arithmetic  */
#line 88 "compil.y"
                                          { (yyval.nb) = (yyvsp[-2].nb) & (yyvsp[0].nb); }
#line 1497 "y.tab.c"
    break;

  case 26: /* BitwiseOr: Arithmetic tOR Arithmetic  */
#line 89 "compil.y"
                                        { (yyval.nb) = (yyvsp[-2].nb) | (yyvsp[0].nb); }
#line 1503 "y.tab.c"
    break;

  case 27: /* ValueLogic: tTRUE  */
#line 93 "compil.y"
                     { (yyval.nb) = 1; }
#line 1509 "y.tab.c"
    break;

  case 28: /* ValueLogic: tFALSE  */
#line 93 "compil.y"
                                          { (yyval.nb) = 0; }
#line 1515 "y.tab.c"
    break;

  case 29: /* ValueLogic: NameVariable  */
#line 93 "compil.y"
                                                                     { (yyval.nb) = 0; }
#line 1521 "y.tab.c"
    break;

  case 33: /* Logic: tPO Logic tPF  */
#line 94 "compil.y"
                                                          { (yyval.nb) = (yyvsp[-1].nb); }
#line 1527 "y.tab.c"
    break;

  case 34: /* AndLogic: Logic tANDLOG Logic  */
#line 95 "compil.y"
                                 { (yyval.nb) = (yyvsp[-2].nb) && (yyvsp[0].nb); }
#line 1533 "y.tab.c"
    break;

  case 35: /* OrLogic: Logic tORLOG Logic  */
#line 96 "compil.y"
                               { (yyval.nb) = (yyvsp[-2].nb) || (yyvsp[0].nb); }
#line 1539 "y.tab.c"
    break;

  case 65: /* Initialisation: TypeVariable NameVariable  */
#line 141 "compil.y"
                              {
      symbol * s = malloc(sizeof(symbol));
      s->name = (yyvsp[0].var);
      s->type = VARIABLE;
      s->scope = LOCAL;
      s->initialised = 0;
      s->value = 0;
      if (strcmp((yyvsp[-1].var), "int") == 0) s->dtype = INT;
      add_symbol(s);
    }
#line 1554 "y.tab.c"
    break;

  case 66: /* Initialisation: TypeVariable Affectation  */
#line 152 "compil.y"
                             {
      symbol* s = malloc(sizeof(symbol));
      s->name = (yyvsp[0].affect).name;
      s->type = VARIABLE;
      s->scope = LOCAL;
      s->initialised = 1;
      s->value = (yyvsp[0].affect).value;

      if (strcmp((yyvsp[-1].var), "int") == 0) s->dtype = INT;
      add_symbol(s);
    }
#line 1570 "y.tab.c"
    break;

  case 67: /* Affectation: NameVariable tEGAL Value  */
#line 164 "compil.y"
                                         {
    (yyval.affect).name = (yyvsp[-2].var);
    (yyval.affect).value = (yyvsp[0].nb);
  }
#line 1579 "y.tab.c"
    break;


#line 1583 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 169 "compil.y"


  //---------------------- ERROR ----------------------

  void yyerror(char *s) { 
    fprintf(stderr, "Error: %s\n", s); 
  }

  int main(void) {
    printf("Compilo\n");
    yyparse();

    return 0;
  }
