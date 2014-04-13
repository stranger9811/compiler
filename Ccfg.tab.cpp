/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "Ccfg.ypp"

#include <stdlib.h>
#include <stdio.h>
#include <string>
#include<string.h>
#include<vector>
#include <cstring>
#include<iostream>
#include <utility>
#include <algorithm>
#include <map>
//#include "functions.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

using namespace std;
int no_line;
bool maindef;
struct symbol_table *current_symbol_table;
int max_index=0;
vector <struct code_element> global_code;

int yylex();
int yyparse();
int yywrap();

int newTemp() {
	max_index++;
	return max_index;		
}
void yyerror(const char *s,string color=KRED,string e="")
{

        
   fprintf(stderr, "%sline %d: %s %s%s",color.c_str(),no_line, s,e.c_str(),KNRM);

}

void *c;



/* Line 371 of yacc.c  */
#line 118 "Ccfg.tab.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Ccfg.tab.hpp".  */
#ifndef YY_YY_CCFG_TAB_HPP_INCLUDED
# define YY_YY_CCFG_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 52 "Ccfg.ypp"

	#include "resources.h"


/* Line 387 of yacc.c  */
#line 155 "Ccfg.tab.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_STRUCT = 258,
     T_BREAK = 259,
     T_CONTINUE = 260,
     T_TYPEDEF = 261,
     T_CHAR = 262,
     T_DOUBLE = 263,
     T_INT = 264,
     T_FLOAT = 265,
     T_LONG_LONG = 266,
     T_FOR = 267,
     T_IF = 268,
     T_ELSE = 269,
     T_WHILE = 270,
     T_GOTO = 271,
     T_RETURN = 272,
     T_PRINTF = 273,
     T_VOID = 274,
     T_SCANF = 275,
     T_SIZEOF = 276,
     T_UNSIGNED = 277,
     T_SIGNED = 278,
     T_CONST = 279,
     T_SHORT = 280,
     T_EXTERN = 281,
     T_LONG = 282,
     T_BOOL = 283,
     T_APOS = 284,
     T_DEC_FLOAT = 285,
     T_DEC_INT = 286,
     T_STRING = 287,
     T_HEADER = 288,
     ID = 289,
     T_MAIN = 290,
     T_IO_INT = 291,
     T_IO_LONG_LONG = 292,
     T_IO_STRING = 293,
     T_IO_FLOAT = 294,
     T_DIVIDE_SELF = 295,
     T_MULT_SELF = 296,
     T_MINUS_SELF = 297,
     T_PLUS_SELF = 298,
     T_OR = 299,
     T_AND = 300,
     T_NOT_EQUAL = 301,
     T_EQUAL_TEST = 302,
     T_GREATER_THAN_EQUAL = 303,
     T_LESS_THAN_EQUAL = 304,
     DEREF = 305,
     UMINUS = 306,
     UPLUS = 307,
     T_SUB_ONE = 308,
     T_ADD_ONE = 309,
     T_THIS_POINTER = 310
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 56 "Ccfg.ypp"

long long integer;
long double real;
char lexeme[10000];
struct attr *attributes;
//Yet to include exponential numbers and hexadecimals.


/* Line 387 of yacc.c  */
#line 234 "Ccfg.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CCFG_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 262 "Ccfg.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   404

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    66,     2,     2,     2,    64,    53,     2,
      41,    74,    62,    60,    43,    61,    72,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
      58,    48,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    42,     2,    73,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    40,    51,    75,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    44,    45,    46,    47,    49,
      50,    54,    55,    57,    59,    65,    67,    68,    69,    70,
      71,    77,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    10,    12,    16,    18,
      22,    27,    31,    35,    40,    42,    45,    47,    49,    51,
      53,    55,    57,    59,    62,    64,    69,    73,    78,    82,
      87,    90,    92,    94,    98,   100,   104,   106,   109,   111,
     116,   118,   121,   124,   126,   130,   134,   136,   138,   147,
     162,   178,   188,   192,   194,   198,   202,   206,   210,   214,
     218,   220,   224,   228,   232,   236,   241,   246,   249,   253,
     255,   258,   261,   263,   266,   268,   270,   274,   276,   278,
     280,   283,   288,   292,   296
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      84,     0,    -1,    83,    -1,    83,    -1,    83,    -1,    -1,
      85,    -1,    86,    80,    85,    -1,    86,    -1,    87,   103,
      76,    -1,     6,    87,    34,    76,    -1,    87,    90,    94,
      -1,    89,    90,    94,    -1,     3,    34,    94,    76,    -1,
      33,    -1,    87,    62,    -1,    88,    -1,    11,    -1,     9,
      -1,     7,    -1,    10,    -1,     8,    -1,    28,    -1,    89,
      62,    -1,    19,    -1,    34,    41,    91,    74,    -1,    34,
      41,    74,    -1,    35,    41,    91,    74,    -1,    35,    41,
      74,    -1,    87,   103,    43,    91,    -1,    87,   103,    -1,
      40,    -1,    75,    -1,    92,    95,    93,    -1,    96,    -1,
      95,    80,    96,    -1,    96,    -1,    97,    76,    -1,    99,
      -1,   100,    43,    80,    97,    -1,   100,    -1,    87,    98,
      -1,    17,   100,    -1,    17,    -1,   101,    43,    98,    -1,
     103,    43,    98,    -1,   101,    -1,   103,    -1,    13,    41,
     100,    74,    92,    80,    95,    93,    -1,    13,    41,   100,
      74,    92,    80,    95,    93,    81,    14,    92,    80,    95,
      93,    -1,    12,    41,    97,    76,    80,    97,    76,    80,
      97,    82,    74,    92,    80,    95,    93,    -1,    15,    80,
      41,    97,    74,    92,    80,    95,    93,    -1,   100,    60,
     100,    -1,    90,    -1,   100,    55,   100,    -1,   100,    58,
     100,    -1,   100,    56,   100,    -1,   100,    59,   100,    -1,
     100,    57,   100,    -1,   100,    54,   100,    -1,   101,    -1,
     100,    61,   100,    -1,   100,    62,   100,    -1,   100,    63,
     100,    -1,   100,    64,   100,    -1,   100,    50,    80,   100,
      -1,   100,    49,    80,   100,    -1,    66,   100,    -1,    41,
     100,    74,    -1,   103,    -1,    60,   100,    -1,    61,   100,
      -1,   102,    -1,    62,   100,    -1,    77,    -1,    78,    -1,
     103,    48,   100,    -1,    31,    -1,    30,    -1,    34,    -1,
      34,   104,    -1,    42,    34,    73,   104,    -1,    42,    34,
      73,    -1,    42,    31,    73,    -1,    42,    31,    73,   104,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   161,   161,   169,   178,   186,   188,   193,   199,   205,
     217,   220,   245,   270,   273,   276,   282,   289,   290,   291,
     292,   293,   294,   296,   302,   308,   313,   318,   325,   333,
     334,   336,   350,   361,   374,   378,   401,   415,   427,   440,
     452,   459,   490,   497,   505,   522,   535,   545,   554,   570,
     586,   612,   639,   680,   682,   704,   725,   746,   767,   788,
     809,   811,   853,   894,   935,   967,   983,   999,  1007,  1009,
    1032,  1034,  1036,  1045,  1051,  1062,  1073,  1140,  1149,  1157,
    1164,  1171,  1172,  1173,  1174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRUCT", "T_BREAK", "T_CONTINUE",
  "T_TYPEDEF", "T_CHAR", "T_DOUBLE", "T_INT", "T_FLOAT", "T_LONG_LONG",
  "T_FOR", "T_IF", "T_ELSE", "T_WHILE", "T_GOTO", "T_RETURN", "T_PRINTF",
  "T_VOID", "T_SCANF", "T_SIZEOF", "T_UNSIGNED", "T_SIGNED", "T_CONST",
  "T_SHORT", "T_EXTERN", "T_LONG", "T_BOOL", "T_APOS", "T_DEC_FLOAT",
  "T_DEC_INT", "T_STRING", "T_HEADER", "ID", "T_MAIN", "T_IO_INT",
  "T_IO_LONG_LONG", "T_IO_STRING", "T_IO_FLOAT", "'{'", "'('", "'['",
  "','", "T_DIVIDE_SELF", "T_MULT_SELF", "T_MINUS_SELF", "T_PLUS_SELF",
  "'='", "T_OR", "T_AND", "'|'", "'^'", "'&'", "T_NOT_EQUAL",
  "T_EQUAL_TEST", "'>'", "T_GREATER_THAN_EQUAL", "'<'",
  "T_LESS_THAN_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "DEREF", "'!'",
  "UMINUS", "UPLUS", "T_SUB_ONE", "T_ADD_ONE", "T_THIS_POINTER", "'.'",
  "']'", "')'", "'}'", "';'", "\"true\"", "\"false\"", "$accept",
  "Marker_If", "Marker_Else", "Marker_For", "epsilon", "code1", "code",
  "decl", "type", "basic", "void", "func", "args", "brac_open",
  "brac_close", "block", "M", "S", "S1", "init", "block_stmt", "expr",
  "assign_stmt", "number", "identifier", "array", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     123,    40,    91,    44,   295,   296,   297,   298,    61,   299,
     300,   124,    94,    38,   301,   302,    62,   303,    60,   304,
      43,    45,    42,    47,    37,   305,    33,   306,   307,   308,
     309,   310,    46,    93,    41,   125,    59,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    81,    82,    83,    84,    85,    85,    86,
      86,    86,    86,    86,    86,    87,    87,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    93,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   102,   102,   103,
     103,   104,   104,   104,   104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     1,     3,     1,     3,
       4,     3,     3,     4,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     3,     4,     3,     4,
       2,     1,     1,     3,     1,     3,     1,     2,     1,     4,
       1,     2,     2,     1,     3,     3,     1,     1,     8,    14,
      15,     9,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     4,     4,     2,     3,     1,
       2,     2,     1,     2,     1,     1,     3,     1,     1,     1,
       2,     4,     3,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    19,    21,    18,    20,    17,    24,    22,
      14,     0,     6,     5,     0,    16,     0,     0,     0,     1,
       0,     2,    79,     0,    15,     0,     0,     0,    23,     0,
       0,     0,     5,    43,    78,    77,    31,     0,     0,     0,
       0,     0,    74,    75,     0,    53,     0,     0,    34,     0,
      38,    40,    60,    72,    69,     0,     7,     0,     0,    80,
       0,    11,     9,    12,     0,     0,     0,    42,     0,    70,
      71,    73,    67,    79,    41,    46,    47,     5,    36,    13,
      37,     5,     5,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    26,     0,     0,
       0,     0,    28,     0,     0,     0,     0,    68,     0,     0,
      32,     0,    33,     0,     0,     0,    59,    54,    56,    58,
      55,    57,    52,    61,    62,    63,    64,    76,    30,    25,
      83,    82,    27,     5,     0,     0,    44,    45,    35,    39,
      66,    65,     0,    84,    81,     0,     5,     0,    29,     0,
       0,     5,     5,     5,     0,     0,    48,     5,     5,     0,
       3,    51,     0,     4,     0,     0,     5,     5,     0,     0,
       5,     5,    49,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   111,   159,   162,    21,    11,    12,    13,    44,    15,
      16,    45,    99,    46,   112,    47,    77,    78,    49,    74,
      50,    51,    52,    53,    54,    59
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -118
static const yytype_int16 yypact[] =
{
      31,    -1,    73,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
    -118,    36,  -118,    63,    10,  -118,    17,   160,    -7,  -118,
      31,  -118,    49,     8,  -118,   160,    -3,    30,  -118,   160,
      34,    37,  -118,   251,  -118,  -118,  -118,   251,   251,   251,
     251,   251,  -118,  -118,    -5,  -118,   199,    22,  -118,    23,
    -118,   298,  -118,  -118,    54,    27,  -118,     0,   -18,  -118,
      15,  -118,  -118,  -118,   238,   251,    64,   314,    67,  -118,
    -118,  -118,  -118,    76,  -118,    72,   -28,    44,  -118,  -118,
    -118,  -118,  -118,  -118,   251,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,  -118,  -118,    -5,    58,
      61,    62,  -118,    66,    98,   276,   238,  -118,   103,   103,
    -118,   199,  -118,   238,   251,   251,    88,    88,   260,   260,
     190,   190,     3,     3,  -118,  -118,  -118,   314,    99,  -118,
      76,    76,  -118,  -118,   136,   104,  -118,  -118,  -118,  -118,
     329,   340,    73,  -118,  -118,   238,  -118,   136,  -118,   105,
     199,  -118,  -118,    44,   199,   238,   166,    44,  -118,   168,
    -118,  -118,   110,  -118,   136,   136,  -118,  -118,   199,   199,
      44,    44,  -118,  -118
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,   -13,  -118,  -118,  -102,  -118,   167,  -118,     1,  -118,
    -118,    46,   -55,  -117,    26,     6,   -62,   -11,   -60,   -15,
    -118,    71,   -32,  -118,   -12,   -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
      20,    14,    26,    18,   104,   103,    48,     3,     4,     5,
       6,     7,    75,   100,    48,   109,   101,   146,    48,    66,
      95,    14,     3,     4,     5,     6,     7,    55,     9,    73,
     151,    61,    76,    17,     1,    63,    19,     2,     3,     4,
       5,     6,     7,     9,    22,    23,   135,   166,   167,    60,
       8,    27,    23,   139,   160,    24,   163,    24,    98,     9,
      25,    98,    29,    -8,    10,    92,    93,    94,   113,   114,
     115,    57,    24,    62,    97,    64,    75,    75,    65,    28,
       3,     4,     5,     6,     7,   149,   128,   148,   153,   102,
      57,    58,   157,   136,   137,   158,    76,    76,    79,    80,
     138,     9,    95,    96,    67,   106,   170,   171,    68,    69,
      70,    71,    72,   143,   144,   108,    82,    83,    58,   110,
     145,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   129,   150,   130,   131,   105,    73,   154,   155,
     132,   107,   142,    98,    86,    87,    88,    89,    90,    91,
      92,    93,    94,   168,   169,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     3,     4,     5,
       6,     7,    30,    31,   133,    32,    36,    33,   147,   156,
      -5,   152,   164,   161,   165,   140,   141,    56,     9,     0,
      34,    35,     0,     0,    22,    23,   172,   173,     0,     0,
      36,    37,     0,     0,     0,     0,     3,     4,     5,     6,
       7,    30,    31,     0,    32,     0,    33,     0,     0,     0,
      38,    39,    40,     0,     0,     0,    41,     9,     0,    34,
      35,     0,     0,    22,    23,     0,     0,    42,    43,     0,
      37,     0,     0,     0,     0,     3,     4,     5,     6,     7,
      90,    91,    92,    93,    94,    33,     0,     0,     0,    38,
      39,    40,     0,     0,     0,    41,     9,     0,    34,    35,
       0,     0,    22,    23,     0,     0,    42,    43,     0,    37,
       0,    34,    35,     0,     0,    22,    23,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,    38,    39,
      40,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,    38,    39,    40,     0,    42,    43,    41,    88,    89,
      90,    91,    92,    93,    94,    82,    83,     0,    42,    43,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    81,     0,     0,     0,     0,     0,    82,    83,     0,
     134,     0,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    82,    83,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    83,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-118)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      13,     0,    14,     2,    64,    60,    17,     7,     8,     9,
      10,    11,    44,    31,    25,    43,    34,   134,    29,    32,
      48,    20,     7,     8,     9,    10,    11,    34,    28,    34,
     147,    25,    44,    34,     3,    29,     0,     6,     7,     8,
       9,    10,    11,    28,    34,    35,   106,   164,   165,    41,
      19,    34,    35,   113,   156,    62,   158,    62,    57,    28,
      14,    60,    16,     0,    33,    62,    63,    64,    81,    82,
      83,    41,    62,    76,    74,    41,   108,   109,    41,    62,
       7,     8,     9,    10,    11,   145,    98,   142,   150,    74,
      41,    42,   154,   108,   109,   155,   108,   109,    76,    76,
     111,    28,    48,    76,    33,    41,   168,   169,    37,    38,
      39,    40,    41,   130,   131,    43,    49,    50,    42,    75,
     133,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    74,   146,    73,    73,    65,    34,   151,   152,
      74,    74,    43,   142,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   166,   167,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     7,     8,     9,
      10,    11,    12,    13,    76,    15,    40,    17,    74,   153,
      14,    76,    14,   157,    74,   114,   115,    20,    28,    -1,
      30,    31,    -1,    -1,    34,    35,   170,   171,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,     7,     8,     9,    10,
      11,    12,    13,    -1,    15,    -1,    17,    -1,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    66,    28,    -1,    30,
      31,    -1,    -1,    34,    35,    -1,    -1,    77,    78,    -1,
      41,    -1,    -1,    -1,    -1,     7,     8,     9,    10,    11,
      60,    61,    62,    63,    64,    17,    -1,    -1,    -1,    60,
      61,    62,    -1,    -1,    -1,    66,    28,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    77,    78,    -1,    41,
      -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    -1,    77,    78,    66,    58,    59,
      60,    61,    62,    63,    64,    49,    50,    -1,    77,    78,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      74,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    49,    50,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    19,    28,
      33,    84,    85,    86,    87,    88,    89,    34,    87,     0,
      80,    83,    34,    35,    62,    90,   103,    34,    62,    90,
      12,    13,    15,    17,    30,    31,    40,    41,    60,    61,
      62,    66,    77,    78,    87,    90,    92,    94,    96,    97,
      99,   100,   101,   102,   103,    34,    85,    41,    42,   104,
      41,    94,    76,    94,    41,    41,    80,   100,   100,   100,
     100,   100,   100,    34,    98,   101,   103,    95,    96,    76,
      76,    43,    49,    50,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    48,    76,    74,    87,    91,
      31,    34,    74,    91,    97,   100,    41,    74,    43,    43,
      75,    80,    93,    80,    80,    80,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   103,    74,
      73,    73,    74,    76,    74,    97,    98,    98,    96,    97,
     100,   100,    43,   104,   104,    80,    92,    74,    91,    97,
      80,    92,    76,    95,    80,    80,    93,    95,    97,    81,
      83,    93,    82,    83,    14,    74,    92,    92,    80,    80,
      95,    95,    93,    93
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 161 "Ccfg.ypp"
    {
				(yyval.integer) = global_code.size();
#ifdef debug
cout << "Marker if :" << (yyval.integer) << endl;
#endif

			}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 169 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->nextlist = ((compiler *)c)->makelist(global_code.size());
				code_element temp;
				temp.data1 = Jump;

				global_code.push_back(temp);
			}
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 178 "Ccfg.ypp"
    {
				(yyval.integer) = global_code.size();
				code_element temp;
				temp.data1 = Jump;

				global_code.push_back(temp);
}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 186 "Ccfg.ypp"
    {;}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 189 "Ccfg.ypp"
    {
				((compiler *)c)->backpatch((yyvsp[(1) - (1)].attributes)->nextlist,global_code.size());
			}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 193 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
						(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;
						((compiler *)c)->backpatch((yyvsp[(1) - (3)].attributes)->nextlist,(yyvsp[(2) - (3)].integer));
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
						}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 199 "Ccfg.ypp"
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;
			 	free((yyvsp[(1) - (1)].attributes));
			}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 205 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
							if(current_symbol_table->table.find(string( (yyvsp[(2) - (3)].attributes)->var_name[0])) != current_symbol_table->table.end())
								yyerror("error: redeclaration \n");
							else{
							(yyvsp[(2) - (3)].attributes)->my_type = (yyvsp[(1) - (3)].attributes)->my_type;
							(yyvsp[(2) - (3)].attributes)->dimension[0]= (yyvsp[(1) - (3)].attributes)->dimension[0];
							} 
							

							free((yyvsp[(1) - (3)].attributes));
							free((yyvsp[(2) - (3)].attributes));
							}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 217 "Ccfg.ypp"
    {(yyval.attributes) = new attr();

								free((yyvsp[(2) - (4)].attributes));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 220 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[(1) - (3)].attributes)->my_type == (yyvsp[(3) - (3)].attributes)->my_type)
								{
									if ((yyvsp[(1) - (3)].attributes)->dimension[0] == (yyvsp[(3) - (3)].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
										struct llm temp;

										temp.my_type= (yyvsp[(1) - (3)].attributes)->my_type; 
										temp.dimension = (yyvsp[(1) - (3)].attributes)->dimension[0];
										current_symbol_table->table[string((yyvsp[(2) - (3)].attributes)->var_name[0])]=(temp);									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;

								//printf("type is %d. block is %d\n",$1->my_type,$3->my_type);
								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(2) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
								}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 245 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[(1) - (3)].attributes)->my_type == (yyvsp[(3) - (3)].attributes)->my_type)
								{
									if ((yyvsp[(1) - (3)].attributes)->dimension[0] == (yyvsp[(3) - (3)].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
										struct llm temp;

										temp.my_type= (yyvsp[(1) - (3)].attributes)->my_type; 
										temp.dimension = (yyvsp[(1) - (3)].attributes)->dimension[0];
										current_symbol_table->table[string((yyvsp[(2) - (3)].attributes)->var_name[0])]=(temp);									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;


								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(2) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
								}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 270 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
								free((yyvsp[(3) - (4)].attributes));
								}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 273 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)	malloc(sizeof(attr));}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 276 "Ccfg.ypp"
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0]+1;
								free((yyvsp[(1) - (2)].attributes));
								}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 282 "Ccfg.ypp"
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr)); 
				(yyval.attributes)->my_type=(yyvsp[(1) - (1)].attributes)->my_type; 
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
				free((yyvsp[(1) - (1)].attributes));
				}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 289 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Long_long; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 290 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Int; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 291 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Char; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 292 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Float; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 293 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Double; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 294 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Bool; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 296 "Ccfg.ypp"
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0]+1;
				free((yyvsp[(1) - (2)].attributes));
				}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 302 "Ccfg.ypp"
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = Void;
				(yyval.attributes)->dimension[0] = 0;
				}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 308 "Ccfg.ypp"
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));
						strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (4)].lexeme));
						 free((yyvsp[(3) - (4)].attributes));
						}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 313 "Ccfg.ypp"
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (3)].lexeme));

							}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 318 "Ccfg.ypp"
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");
							 free((yyvsp[(3) - (4)].attributes));
							}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 325 "Ccfg.ypp"
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");

							}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 333 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));   free((yyvsp[(1) - (4)].attributes)); free((yyvsp[(2) - (4)].attributes));}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 334 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));   free((yyvsp[(1) - (2)].attributes)); free((yyvsp[(2) - (2)].attributes));}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 336 "Ccfg.ypp"
    { 
					(yyval.attributes) = new attr();

					#ifdef debug
						printf("creating new symbol table\n");
					#endif
				  struct symbol_table *temp = new  symbol_table;
				  current_symbol_table->children.push_back(temp); 
				  temp->parent = current_symbol_table;

				  current_symbol_table = temp;
				 
		 }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 350 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();

				#ifdef debug
					printf("destroying symbol table\n");
				#endif
				  struct symbol_table *temp = current_symbol_table;
				  current_symbol_table = temp->parent;
				  delete temp;
		 }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 361 "Ccfg.ypp"
    {	
									#ifdef debug
						 				cout << "block -> brac_open M brac_close \n";
						 			#endif
									(yyval.attributes) = (attr*)malloc(sizeof(attr)); 
									(yyval.attributes)->my_type = (yyvsp[(2) - (3)].attributes)->my_type;
									(yyval.attributes)->dimension[0] = (yyvsp[(2) - (3)].attributes)->dimension[0];

									(yyval.attributes)->nextlist = (yyvsp[(2) - (3)].attributes)->nextlist;

									free((yyvsp[(2) - (3)].attributes));
									}
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 374 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[(1) - (1)].attributes));
}
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 379 "Ccfg.ypp"
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				#ifdef debug
					cout << "M -> S M\n";
				#endif
/*				if ($1->my_type != Useless)
				{
					$$->my_type = $1->my_type;
					$$->dimension[0] = $1->dimension[0];
				}
				else
				{
					$$->my_type = $2->my_type;
					$$->dimension[0] = $2->dimension[0];
				}
				if ($$->my_type!=$2->my_type) yyerror("Different return types for same function\n");
*/				
				((compiler *)c)->backpatch((yyvsp[(1) - (3)].attributes)->nextlist,(yyvsp[(2) - (3)].integer));
				(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;
				free((yyvsp[(1) - (3)].attributes));
				free((yyvsp[(3) - (3)].attributes));
			}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 401 "Ccfg.ypp"
    {
				#ifdef debug
						cout << "M -> S\n";
				#endif
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];	

				(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;

				free((yyvsp[(1) - (1)].attributes));
				}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 415 "Ccfg.ypp"
    {
				#ifdef debug
						cout << "S -> S1\n";
				#endif
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0];

				(yyval.attributes)->nextlist = (yyvsp[(1) - (2)].attributes)->nextlist;

				free((yyvsp[(1) - (2)].attributes));
			}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 427 "Ccfg.ypp"
    {
					#ifdef debug
							cout << "S -> block_stmt\n";
					#endif
					(yyval.attributes) = (attr*)malloc(sizeof(attr));
					(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
					(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;
					(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
					free((yyvsp[(1) - (1)].attributes));
					}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 440 "Ccfg.ypp"
    {
					(yyval.attributes) = new attr(); 
					(yyval.attributes)->my_type = (yyvsp[(4) - (4)].attributes)->my_type; 
					((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->truelist,(yyvsp[(3) - (4)].integer));
					((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->falselist,(yyvsp[(3) - (4)].integer));
					(yyval.attributes)->truelist = (yyvsp[(4) - (4)].attributes)->truelist;
					(yyval.attributes)->falselist = (yyvsp[(4) - (4)].attributes)->falselist;

					free((yyvsp[(1) - (4)].attributes));
					free((yyvsp[(4) - (4)].attributes));
				}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 452 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr(); 
				(yyval.attributes)->my_type = Bool; 
				(yyval.attributes)->truelist = (yyvsp[(1) - (1)].attributes)->truelist; 
				(yyval.attributes)->falselist = (yyvsp[(1) - (1)].attributes)->falselist; 
				free((yyvsp[(1) - (1)].attributes));
			}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 459 "Ccfg.ypp"
    {
			#ifdef debug
						 cout << "S1 -> type init\n";
			#endif
			(yyval.attributes) = (attr*)malloc(sizeof(attr));
			struct llm temp;

			temp.my_type= (yyvsp[(1) - (2)].attributes)->my_type; 
			for(int i=0;i<(yyvsp[(2) - (2)].attributes)->index;i++) {
				/* checking if variable is already declared */

						if(current_symbol_table->table.find(string( (yyvsp[(2) - (2)].attributes)->var_name[i])) != current_symbol_table->table.end())
							yyerror("error: redeclaration \n");
					
				/*   ------------------------------------ */
						else {
							temp.dimension = (yyvsp[(2) - (2)].attributes)->dimension[i];
							current_symbol_table->table[string((yyvsp[(2) - (2)].attributes)->var_name[i])]=(temp);
						}

			}
#ifdef debug
			printf("Variables declared \n"); 
				for(int i=0;i<(yyvsp[(2) - (2)].attributes)->index;i++) {
					printf("%s %d\n",(yyvsp[(2) - (2)].attributes)->var_name[i],(yyvsp[(2) - (2)].attributes)->dimension[i]);
				}
			#endif
				(yyval.attributes)->my_type = Useless;
				free((yyvsp[(1) - (2)].attributes));
				free((yyvsp[(2) - (2)].attributes));
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 490 "Ccfg.ypp"
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));

								(yyval.attributes)->my_type = (yyvsp[(2) - (2)].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0];
								free((yyvsp[(2) - (2)].attributes));
								}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 497 "Ccfg.ypp"
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type = Void;
								(yyval.attributes)->dimension[0] = 0;
						
								}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 506 "Ccfg.ypp"
    {
						 		#ifdef debug
						 				cout << "init -> assign_stmt ',' init\n";
						 		#endif
						 		(yyval.attributes) = (attr*)malloc(sizeof(attr));
								strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (3)].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (3)].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->dimension[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[(3) - (3)].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
						}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 522 "Ccfg.ypp"
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (3)].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (3)].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->dimension[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[(3) - (3)].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
							}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 535 "Ccfg.ypp"
    {
						#ifdef debug
						 				cout << "init -> assign_stmt\n";
						 		#endif
						(yyval.attributes) = (attr*)malloc(sizeof(attr));
						strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].attributes)->var_name[0]);
						(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
						(yyval.attributes)->index = 1;
						free((yyvsp[(1) - (1)].attributes));
					}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 545 "Ccfg.ypp"
    {
					(yyval.attributes) = (attr*)malloc(sizeof(attr));
					strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].attributes)->var_name[0]);
					(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
					(yyval.attributes)->index = 1;
					free((yyvsp[(1) - (1)].attributes));
				  }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 554 "Ccfg.ypp"
    {
											#ifdef debug
												cout << "block_expr : T_IF '('expr')' '{'M'}'";
											#endif
											(yyval.attributes) = new attr();
											if ((yyvsp[(3) - (8)].attributes)->my_type != Bool) yyerror("condition is not bool inside if statement");
											(yyval.attributes)->my_type = (yyvsp[(7) - (8)].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[(7) - (8)].attributes)->dimension[0];

											((compiler *)c)->backpatch((yyvsp[(3) - (8)].attributes)->truelist, (yyvsp[(6) - (8)].integer));
											(yyval.attributes)->nextlist = ((compiler *)c)->merge_list((yyvsp[(3) - (8)].attributes)->falselist,(yyvsp[(7) - (8)].attributes)->nextlist);
											
											delete (yyvsp[(5) - (8)].attributes);
											delete (yyvsp[(8) - (8)].attributes);
 											free((yyvsp[(3) - (8)].attributes)); free((yyvsp[(7) - (8)].attributes));
}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 571 "Ccfg.ypp"
    {
												(yyval.attributes) = new attr();
												if ((yyvsp[(3) - (14)].attributes)->my_type != Bool) yyerror("Condition is not bool inside if statement\n");										
												((compiler *)c)->backpatch((yyvsp[(3) - (14)].attributes)->truelist, (yyvsp[(6) - (14)].integer));
												((compiler *)c)->backpatch((yyvsp[(3) - (14)].attributes)->falselist, (yyvsp[(12) - (14)].integer));
												vector <int> temp;
												temp = ((compiler *)c)->merge_list((yyvsp[(7) - (14)].attributes)->nextlist, (yyvsp[(9) - (14)].attributes)->nextlist);
												(yyval.attributes)->nextlist = ((compiler *)c)->merge_list(temp, (yyvsp[(13) - (14)].attributes)->nextlist);
													
												delete (yyvsp[(5) - (14)].attributes);
												delete (yyvsp[(8) - (14)].attributes),delete (yyvsp[(11) - (14)].attributes),delete (yyvsp[(14) - (14)].attributes);
	 											free((yyvsp[(3) - (14)].attributes)); free((yyvsp[(7) - (14)].attributes)); free((yyvsp[(13) - (14)].attributes));
	 											free((yyvsp[(9) - (14)].attributes));
	 										}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 587 "Ccfg.ypp"
    {
											(yyval.attributes) = new attr();
											
											if((yyvsp[(6) - (15)].attributes)->my_type != Bool) yyerror("Condition not bool in For statement\n");

											(yyval.attributes)->my_type = (yyvsp[(14) - (15)].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[(14) - (15)].attributes)->dimension[0];										
											
											(yyval.attributes)->nextlist = (yyvsp[(6) - (15)].attributes)->falselist;
											((compiler *)c)->backpatch((yyvsp[(14) - (15)].attributes)->nextlist, (yyvsp[(8) - (15)].integer));
											global_code[(yyvsp[(10) - (15)].integer)].result.int_val = (yyvsp[(5) - (15)].integer);
											((compiler *)c)->backpatch((yyvsp[(6) - (15)].attributes)->truelist, (yyvsp[(13) - (15)].integer));
											code_element temp;
											temp.data1 = Jump;
											temp.result.int_val = (yyvsp[(8) - (15)].integer);
											global_code.push_back(temp);

											free((yyvsp[(3) - (15)].attributes));
											free((yyvsp[(6) - (15)].attributes));
											free((yyvsp[(9) - (15)].attributes));
											free((yyvsp[(12) - (15)].attributes));
											free((yyvsp[(14) - (15)].attributes));
											free((yyvsp[(15) - (15)].attributes));
										}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 612 "Ccfg.ypp"
    {
									(yyval.attributes) = new attr();

									if((yyvsp[(4) - (9)].attributes)->my_type != Bool) yyerror("Condition not bool in While statement\n");
									
									(yyval.attributes)->my_type = (yyvsp[(8) - (9)].attributes)->my_type;
									(yyval.attributes)->dimension[0]= (yyvsp[(8) - (9)].attributes)->dimension[0];

									((compiler *)c)->backpatch((yyvsp[(8) - (9)].attributes)->nextlist, (yyvsp[(2) - (9)].integer));
									((compiler *)c)->backpatch((yyvsp[(4) - (9)].attributes)->truelist, (yyvsp[(7) - (9)].integer));
									(yyval.attributes)->nextlist = (yyvsp[(4) - (9)].attributes)->falselist;
#ifdef debug
cout << "Marker if :" << (yyvsp[(7) - (9)].integer) << endl;
#endif
									struct code_element temp;
									temp.data1 = Jump;
									temp.result.int_val = (yyvsp[(2) - (9)].integer);

									global_code.push_back(temp);

									delete (yyvsp[(6) - (9)].attributes);
									delete (yyvsp[(9) - (9)].attributes); 
									free((yyvsp[(4) - (9)].attributes));
									free((yyvsp[(8) - (9)].attributes));
	}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 639 "Ccfg.ypp"
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp_code.arg2 = (yyvsp[(3) - (3)].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "+";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(1) - (3)].attributes)->code.begin(),(yyvsp[(1) - (3)].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr+expr\n");

						#endif

						if((yyvsp[(1) - (3)].attributes)->my_type==Char || (yyvsp[(1) - (3)].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else if((yyvsp[(3) - (3)].attributes)->my_type==Char || (yyvsp[(3) - (3)].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else {
							if((yyvsp[(1) - (3)].attributes)->my_type==Double || (yyvsp[(3) - (3)].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Float || (yyvsp[(3) - (3)].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Long_long || (yyvsp[(3) - (3)].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[(1) - (3)].attributes)->my_type;
						}
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 680 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[(1) - (1)].attributes));
}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 682 "Ccfg.ypp"
    {
						
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "==";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 704 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "<";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 725 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = ">";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 746 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "<=";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 767 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = ">=";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 788 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());
						(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = "!=";
						temp.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp.arg2 = (yyvsp[(3) - (3)].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 809 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[(1) - (1)].attributes));
}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 811 "Ccfg.ypp"
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp_code.arg2 = (yyvsp[(3) - (3)].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "-";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(1) - (3)].attributes)->code.begin(),(yyvsp[(1) - (3)].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr-expr\n");

						#endif

						if((yyvsp[(1) - (3)].attributes)->my_type==Char || (yyvsp[(1) - (3)].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else if((yyvsp[(3) - (3)].attributes)->my_type==Char || (yyvsp[(3) - (3)].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else {
							if((yyvsp[(1) - (3)].attributes)->my_type==Double || (yyvsp[(3) - (3)].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Float || (yyvsp[(3) - (3)].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Long_long || (yyvsp[(3) - (3)].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[(1) - (3)].attributes)->my_type;
						}
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 853 "Ccfg.ypp"
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp_code.arg2 = (yyvsp[(3) - (3)].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "*";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(1) - (3)].attributes)->code.begin(),(yyvsp[(1) - (3)].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr*expr\n");

						#endif

						if((yyvsp[(1) - (3)].attributes)->my_type==Char || (yyvsp[(1) - (3)].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else if((yyvsp[(3) - (3)].attributes)->my_type==Char || (yyvsp[(3) - (3)].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else {
							if((yyvsp[(1) - (3)].attributes)->my_type==Double || (yyvsp[(3) - (3)].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Float || (yyvsp[(3) - (3)].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Long_long || (yyvsp[(3) - (3)].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[(1) - (3)].attributes)->my_type;
						}
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 63:
/* Line 1787 of yacc.c  */
#line 894 "Ccfg.ypp"
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp_code.arg2 = (yyvsp[(3) - (3)].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(1) - (3)].attributes)->code.begin(),(yyvsp[(1) - (3)].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr/expr\n");

						#endif

						if((yyvsp[(1) - (3)].attributes)->my_type==Char || (yyvsp[(1) - (3)].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else if((yyvsp[(3) - (3)].attributes)->my_type==Char || (yyvsp[(3) - (3)].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else {
							if(((yyvsp[(1) - (3)].attributes)->my_type==Double) || ((yyvsp[(3) - (3)].attributes)->my_type==Double) )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Float || (yyvsp[(3) - (3)].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[(1) - (3)].attributes)->my_type==Long_long || (yyvsp[(3) - (3)].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[(1) - (3)].attributes)->my_type;
						}
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 935 "Ccfg.ypp"
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[(1) - (3)].attributes)->place;
						temp_code.arg2 = (yyvsp[(3) - (3)].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "%";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(1) - (3)].attributes)->code.begin(),(yyvsp[(1) - (3)].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr\%expr\n");
						#endif

						if(!((yyvsp[(1) - (3)].attributes)->my_type==Int || (yyvsp[(1) - (3)].attributes)->my_type==Long_long || (yyvsp[(1) - (3)].attributes)->my_type==Bool))        /* Added Bool*/
							yyerror("error: MOD supports only bool,int,long long");
						else if(!((yyvsp[(3) - (3)].attributes)->my_type==Int || (yyvsp[(3) - (3)].attributes)->my_type==Long_long || (yyvsp[(3) - (3)].attributes)->my_type==Bool))
							yyerror("error: MOD supports only bool,int,long long");
						else
							(yyval.attributes)->my_type=(yyvsp[(3) - (3)].attributes)->my_type;
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
					}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 967 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr();
						((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->truelist,(yyvsp[(3) - (4)].integer));
						(yyval.attributes)->truelist = (yyvsp[(4) - (4)].attributes)->truelist;
						(yyval.attributes)->falselist = ((compiler *)c)->merge_list((yyvsp[(1) - (4)].attributes)->falselist,(yyvsp[(4) - (4)].attributes)->falselist);


						if(!((yyvsp[(1) - (4)].attributes)->my_type==Bool || (yyvsp[(1) - (4)].attributes)->my_type==Int || (yyvsp[(1) - (4)].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else if(!((yyvsp[(4) - (4)].attributes)->my_type==Bool || (yyvsp[(4) - (4)].attributes)->my_type==Int || (yyvsp[(4) - (4)].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else 
							(yyval.attributes)->my_type=Bool;
						free((yyvsp[(1) - (4)].attributes));
						free((yyvsp[(4) - (4)].attributes));
					}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 983 "Ccfg.ypp"
    {	
						(yyval.attributes) = new attr();
 
						if(!((yyvsp[(1) - (4)].attributes)->my_type==Bool || (yyvsp[(1) - (4)].attributes)->my_type==Int || (yyvsp[(1) - (4)].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. left operand is \n");
						else if(!((yyvsp[(4) - (4)].attributes)->my_type==Bool || (yyvsp[(4) - (4)].attributes)->my_type==Int || (yyvsp[(4) - (4)].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. right operand is \n");
						else 
							(yyval.attributes)->my_type=Bool;

						((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->falselist,(yyvsp[(3) - (4)].integer));
						(yyval.attributes)->truelist = ((compiler *)c)->merge_list((yyvsp[(1) - (4)].attributes)->truelist,(yyvsp[(4) - (4)].attributes)->truelist);
						(yyval.attributes)->falselist = (yyvsp[(4) - (4)].attributes)->falselist;
						free((yyvsp[(1) - (4)].attributes));
						free((yyvsp[(4) - (4)].attributes));
					}
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 999 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
					(yyval.attributes)->my_type = Bool;

					(yyval.attributes)->truelist = (yyvsp[(2) - (2)].attributes)->falselist;
					(yyval.attributes)->falselist = (yyvsp[(2) - (2)].attributes)->truelist;

					 free((yyvsp[(2) - (2)].attributes));
					 }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 1007 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type = (yyvsp[(2) - (3)].attributes)->my_type; free((yyvsp[(2) - (3)].attributes));}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 1009 "Ccfg.ypp"
    {
			(yyval.attributes) = new attr();
			(yyval.attributes)->place.var = (yyvsp[(1) - (1)].attributes)->place.var; 
			(yyval.attributes)->place.args_type = 1;
			struct symbol_table *temp = current_symbol_table;
			int flag = 1;
			while(flag) {
			           	if( temp->table.find(string( (yyvsp[(1) - (1)].attributes)->var_name[0])) != temp->table.end()){
						(yyval.attributes)->my_type = temp->table[string((yyvsp[(1) - (1)].attributes)->var_name[0])].my_type;
#ifdef debug
printf("expr-->identifier:\nidentifier is of type %d\n",(yyval.attributes)->my_type);
#endif
							flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[(1) - (1)].attributes)->var_name[0])].dimension - (yyvsp[(1) - (1)].attributes)->dimension[0];
				}
				if(temp->parent==NULL && flag==1) {
					yyerror("error: variable not declared\n");
					flag = 0;
				}
				temp = temp->parent;
			}
			free((yyvsp[(1) - (1)].attributes));
		  }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 1032 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; free((yyvsp[(2) - (2)].attributes));}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 1034 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; free((yyvsp[(2) - (2)].attributes));}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 1036 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->place = (yyvsp[(1) - (1)].attributes)->place;


				(yyval.attributes)->place.args_type = (yyval.attributes)->place.args_type;
				(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = 0;
			}
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 1045 "Ccfg.ypp"
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; 
								(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0]+1;
								free((yyvsp[(2) - (2)].attributes));
								}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 1051 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;

			}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 1062 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;
	}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 1073 "Ccfg.ypp"
    {
							#ifdef debug
								printf("In assign_stmt -> identifier '=' expr\n");

							#endif 
							(yyval.attributes) = new attr();
							(yyval.attributes)->my_type = Void;
							struct code_element temp_code;
							temp_code.arg1 = (yyvsp[(3) - (3)].attributes)->place;
							temp_code.result = (yyvsp[(1) - (3)].attributes)->place;
							temp_code.data2 = "=";
							temp_code.data1 = Assignment;
							(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
							(yyval.attributes)->code.push_back(temp_code);
							global_code.push_back(temp_code);


							#ifdef debug
								printf("===============CODE GENERATED====================\n");
								for(int i=0;i<global_code.size();i++) {
									if(global_code[i].data1==Jump) {
										cout << "jump instruction\n";
										continue;
									}
									cout << global_code[i].data2 << "\t";
									cout << "(" << global_code[i].arg1.var << "," << global_code[i].arg1.temp << "," << global_code[i].arg1.int_val << "," << global_code[i].arg1.float_val << "," << global_code[i].arg1.args_type << ")\t(" << global_code[i].arg2.var << ","<<global_code[i].arg2.temp << "," << global_code[i].arg2.int_val << "," << global_code[i].arg2.float_val << "," << global_code[i].arg2.args_type<<")\t(" << global_code[i].result.var << "," << global_code[i].result.temp << "," << global_code[i].result.int_val << "," << global_code[i].result.float_val << "," << global_code[i].result.args_type<< ")\n";

								}	
								printf("===============CODE GENERATION END====================\n");
							#endif 
	                       struct symbol_table *temp = current_symbol_table;
                       		int flag = 1;
                        	while(flag) {
                                        if( temp->table.find(string( (yyvsp[(1) - (3)].attributes)->var_name[0])) != temp->table.end()){
                                                (yyval.attributes)->my_type = temp->table[string((yyvsp[(1) - (3)].attributes)->var_name[0])].my_type;
                                                flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[(1) - (3)].attributes)->var_name[0])].dimension - (yyvsp[(1) - (3)].attributes)->dimension[0];

                                	}
                                	if(temp->parent==NULL && flag==1) {
                                        	yyerror("error: variable not declared\n");
                                        	flag = 0;
                                	}
                                	temp = temp->parent;
                        	}
				enum type_enum t = (yyval.attributes)->my_type;
				enum type_enum tt = (yyvsp[(3) - (3)].attributes)->my_type; 
				if (t == Int && tt== Long_long)
					yyerror("Warning: assigning long long to an integer\n",KYEL);
				else if (t==Int && tt == Float)
					yyerror("Warning: assigning float to an int\n",KYEL);
				else if (t==Int && tt == Double)
					yyerror("Warning: assigning int to double\n",KYEL);
				else if (t==Float && tt == Double)
					yyerror("Warning: assigning float to a double\n",KYEL);
				else if (t==Long_long && tt == Float)
					yyerror("Warning: assigning long long to a float\n",KYEL);
				else if (t==Long_long && tt == Double)
					yyerror("Warning: assigning long long to a double\n",KYEL);
				else if (t != tt || (yyval.attributes)->dimension[0] != (yyvsp[(3) - (3)].attributes)->dimension[0] )
					yyerror("Warning: Type mismatch\n",KYEL);

				free((yyvsp[(1) - (3)].attributes));
				free((yyvsp[(3) - (3)].attributes));

				}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 1140 "Ccfg.ypp"
    {
						#ifdef debug 
							printf("number-> T_DEC_INT\n");
						#endif
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.int_val = (yyvsp[(1) - (1)].integer);
						(yyval.attributes)->place.args_type = 3;
						(yyval.attributes)->my_type =Int;
					}
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 1149 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.float_val = (yyvsp[(1) - (1)].real);
						(yyval.attributes)->place.args_type = 4;
						(yyval.attributes)->my_type = Int;
					}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 1157 "Ccfg.ypp"
    {  	
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.var = (yyvsp[(1) - (1)].lexeme);
						(yyval.attributes)->place.args_type = 1;
						strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].lexeme));
							(yyval.attributes)->dimension[0] = 0;
					 }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 1164 "Ccfg.ypp"
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (2)].lexeme));
							(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0];
							free((yyvsp[(2) - (2)].attributes));
		}
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 1171 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = (yyvsp[(4) - (4)].attributes)->dimension[0] +1; printf("%s",(yyvsp[(2) - (4)].lexeme)); free((yyvsp[(4) - (4)].attributes));}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 1172 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = 1;}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 1173 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));  (yyval.attributes)->dimension[0] = 1;}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 1174 "Ccfg.ypp"
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = (yyvsp[(4) - (4)].attributes)->dimension[0] + 1; free((yyvsp[(4) - (4)].attributes));}
    break;


/* Line 1787 of yacc.c  */
#line 3046 "Ccfg.tab.cpp"
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2050 of yacc.c  */
#line 1176 "Ccfg.ypp"


void wrg(args a)
{
	switch (a.args_type)
	{
		case 1: cout << a.var;
				break;
		case 2: cout << "t" << a.temp;
				break;
		case 3: cout << a.int_val;
				break;
		case 4: cout << a.float_val;
				break;				
	}
}


void print()
{
	for (int i=0;i<global_code.size();i++)
	{
		code_element a=global_code[i];
		if (a.data1==Assignment)
		{
			cout << i << ":\t";
			 wrg(a.result); cout << "= ";
			 wrg(a.arg1);
			 cout << " " << a.data2 << " ";
			 wrg(a.arg2);
		}
		else if(a.data1==Jump)
		{
			cout << i << ":\t";
			if (a.data2 == "") cout << "\t\tgoto " << a.result.int_val;
			else
			{ 
				cout << "if ";
			 	wrg(a.arg1);
			 	cout << " " << a.data2 << " ";
			 	wrg(a.arg2);
			 	cout << " then goto " << a.result.int_val;
			}
		}
		cout << endl;
	}
}

int main()
{
		no_line = 1;
		maindef = 0;
		current_symbol_table = new symbol_table;
		current_symbol_table->parent = NULL;
		c = (void *) (new compiler);
        yyparse();
        if (!maindef) yyerror("main function not defined");
		print();


		return 0;
}
