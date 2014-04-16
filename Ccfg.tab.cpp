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
int totalerrs;
bool maindef;
struct symbol_table *current_symbol_table;
int max_index=0;
vector <struct code_element> global_code;
map <string, int> stackaddr;
string reg[32];
extern void codegen();
extern void create_mips();



int yylex();
int yyparse();
int yywrap();

int newTemp() {
	max_index++;
	return max_index;		
}


int check_keyword(string identifier);
void yyerror(const char *s,string color=KRED,string e="")
{
	if(color==KRED)
   		totalerrs++;
    fprintf(stderr, "%sline %d: %s %s%s",color.c_str(),no_line, s,e.c_str(),KNRM);

}

void *c;
FILE *text;
map <int,int> label_info;
int is_declaration = 0;
int global_scope = 1;
int main_function_line = -1;



/* Line 371 of yacc.c  */
#line 134 "Ccfg.tab.cpp"

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
#line 68 "Ccfg.ypp"

	#include "resources.h"


/* Line 387 of yacc.c  */
#line 171 "Ccfg.tab.cpp"

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
     T_PRINT_INT = 273,
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
#line 72 "Ccfg.ypp"

long long integer;
long double real;
char lexeme[10000];
struct lexemeNparam *lexemeNparamlist;
struct funcparams *paramlist;
struct attr *attributes;
//Yet to include exponential numbers and hexadecimals.


/* Line 387 of yacc.c  */
#line 252 "Ccfg.tab.cpp"
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
#line 280 "Ccfg.tab.cpp"

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
#define YYLAST   426

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

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
      22,    27,    28,    35,    36,    43,    48,    50,    53,    55,
      57,    59,    61,    63,    65,    67,    70,    72,    77,    81,
      86,    90,    95,    98,   100,   102,   106,   108,   112,   114,
     117,   119,   121,   125,   127,   129,   134,   136,   137,   141,
     144,   146,   149,   153,   157,   159,   161,   163,   172,   187,
     188,   205,   206,   217,   221,   226,   230,   234,   238,   242,
     246,   250,   252,   256,   260,   264,   268,   273,   278,   281,
     285,   287,   290,   293,   295,   298,   300,   302,   306,   308,
     310,   312,   315,   320,   324,   328
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      84,     0,    -1,    83,    -1,    83,    -1,    83,    -1,    -1,
      85,    -1,    86,    80,    85,    -1,    86,    -1,    89,   110,
      76,    -1,     6,    89,    34,    76,    -1,    -1,    89,    92,
      87,    40,    97,    95,    -1,    -1,    91,    92,    88,    40,
      97,    95,    -1,     3,    34,    96,    76,    -1,    33,    -1,
      89,    62,    -1,    90,    -1,    11,    -1,     9,    -1,     7,
      -1,    10,    -1,     8,    -1,    28,    -1,    91,    62,    -1,
      19,    -1,    34,   103,    93,    74,    -1,    34,    41,    74,
      -1,    35,    41,    93,    74,    -1,    35,    41,    74,    -1,
      93,    43,    89,   110,    -1,    89,   110,    -1,    40,    -1,
      75,    -1,    94,    97,    95,    -1,    98,    -1,    97,    80,
      98,    -1,    98,    -1,   100,    76,    -1,   104,    -1,    76,
      -1,    99,    43,   107,    -1,   107,    -1,    83,    -1,   107,
      43,    80,   100,    -1,   107,    -1,    -1,    89,   101,   102,
      -1,    17,   107,    -1,    17,    -1,    18,   107,    -1,   108,
      43,   102,    -1,   110,    43,   102,    -1,   108,    -1,   110,
      -1,    41,    -1,    13,    41,   107,    74,    94,    80,    97,
      95,    -1,    13,    41,   107,    74,    94,    80,    97,    95,
      81,    14,    94,    80,    97,    95,    -1,    -1,    12,    41,
     100,    76,    80,   100,    76,    80,   100,    82,    74,    94,
      80,   105,    97,    95,    -1,    -1,    15,    80,    41,   100,
      74,    94,    80,   106,    97,    95,    -1,   107,    60,   107,
      -1,    34,    41,    99,    74,    -1,   107,    55,   107,    -1,
     107,    58,   107,    -1,   107,    56,   107,    -1,   107,    59,
     107,    -1,   107,    57,   107,    -1,   107,    54,   107,    -1,
     108,    -1,   107,    61,   107,    -1,   107,    62,   107,    -1,
     107,    63,   107,    -1,   107,    64,   107,    -1,   107,    50,
      80,   107,    -1,   107,    49,    80,   107,    -1,    66,   107,
      -1,    41,   107,    74,    -1,   110,    -1,    60,   107,    -1,
      61,   107,    -1,   109,    -1,    62,   107,    -1,    77,    -1,
      78,    -1,   110,    48,   107,    -1,    31,    -1,    30,    -1,
      34,    -1,    34,   111,    -1,    42,    34,    73,   111,    -1,
      42,    34,    73,    -1,    42,    31,    73,    -1,    42,    31,
      73,   111,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   181,   181,   189,   198,   206,   208,   213,   219,   225,
     239,   244,   242,   293,   292,   343,   346,   351,   357,   364,
     365,   366,   367,   368,   369,   371,   377,   383,   398,   405,
     413,   425,   443,   487,   504,   515,   528,   532,   558,   572,
     589,   601,   607,   624,   634,   639,   654,   662,   662,   707,
     722,   729,   756,   775,   792,   802,   816,   833,   849,   869,
     865,   904,   901,   935,   976,  1030,  1052,  1073,  1094,  1115,
    1136,  1157,  1163,  1205,  1246,  1287,  1319,  1335,  1351,  1359,
    1364,  1415,  1417,  1419,  1437,  1443,  1454,  1466,  1552,  1561,
    1569,  1576,  1618,  1629,  1640,  1653
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRUCT", "T_BREAK", "T_CONTINUE",
  "T_TYPEDEF", "T_CHAR", "T_DOUBLE", "T_INT", "T_FLOAT", "T_LONG_LONG",
  "T_FOR", "T_IF", "T_ELSE", "T_WHILE", "T_GOTO", "T_RETURN",
  "T_PRINT_INT", "T_VOID", "T_SCANF", "T_SIZEOF", "T_UNSIGNED", "T_SIGNED",
  "T_CONST", "T_SHORT", "T_EXTERN", "T_LONG", "T_BOOL", "T_APOS",
  "T_DEC_FLOAT", "T_DEC_INT", "T_STRING", "T_HEADER", "ID", "T_MAIN",
  "T_IO_INT", "T_IO_LONG_LONG", "T_IO_STRING", "T_IO_FLOAT", "'{'", "'('",
  "'['", "','", "T_DIVIDE_SELF", "T_MULT_SELF", "T_MINUS_SELF",
  "T_PLUS_SELF", "'='", "T_OR", "T_AND", "'|'", "'^'", "'&'",
  "T_NOT_EQUAL", "T_EQUAL_TEST", "'>'", "T_GREATER_THAN_EQUAL", "'<'",
  "T_LESS_THAN_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "DEREF", "'!'",
  "UMINUS", "UPLUS", "T_SUB_ONE", "T_ADD_ONE", "T_THIS_POINTER", "'.'",
  "']'", "')'", "'}'", "';'", "\"true\"", "\"false\"", "$accept",
  "Marker_If", "Marker_Else", "Marker_For", "epsilon", "code1", "code",
  "decl", "$@1", "$@2", "type", "basic", "void", "func", "args",
  "brac_open", "brac_close", "block", "M", "S", "exprlist", "S1", "$@3",
  "init", "circl_brac_open", "block_stmt", "$@4", "$@5", "expr",
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
      86,    87,    86,    88,    86,    86,    86,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   100,   100,
     100,   100,   102,   102,   102,   102,   103,   104,   104,   105,
     104,   106,   104,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   109,   109,
     110,   110,   111,   111,   111,   111
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     1,     3,     1,     3,
       4,     0,     6,     0,     6,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     4,     3,     4,
       3,     4,     2,     1,     1,     3,     1,     3,     1,     2,
       1,     1,     3,     1,     1,     4,     1,     0,     3,     2,
       1,     2,     3,     3,     1,     1,     1,     8,    14,     0,
      16,     0,    10,     3,     4,     3,     3,     3,     3,     3,
       3,     1,     3,     3,     3,     3,     4,     4,     2,     3,
       1,     2,     2,     1,     2,     1,     1,     3,     1,     1,
       1,     2,     4,     3,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    21,    23,    20,    22,    19,    26,    24,
      16,     0,     6,     5,     0,    18,     0,     0,     0,     1,
       0,     2,    90,     0,    17,    11,     0,     0,    25,    13,
       0,     0,     5,    50,     0,    89,    88,    90,    33,     0,
       0,     0,     0,     0,    41,    85,    86,    47,     0,     0,
      36,     0,    40,    46,    71,    83,    80,     0,     7,    56,
       0,     0,    91,     0,     0,     9,     0,     0,     0,     0,
      49,    51,     5,     0,    81,    82,    84,    78,     0,     5,
      38,    15,    39,     5,     5,     5,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    28,
       0,     0,     0,     0,    30,     0,     0,     0,     0,     0,
       0,    44,     0,    43,    79,    90,    48,    54,    55,    34,
       0,    35,     0,     0,     0,    70,    65,    67,    69,    66,
      68,    63,    72,    73,    74,    75,    87,    94,    93,    32,
       0,    27,    29,     5,     5,     5,     0,     0,     0,    64,
       0,     0,    37,    45,    77,    76,    95,    92,     0,    12,
      14,     0,     5,     0,    42,    52,    53,    31,     0,     0,
       5,     5,     5,    61,     0,    57,     0,     5,     0,     3,
       5,     0,     4,     0,    62,     0,     5,     5,     0,    59,
       5,     0,    58,     5,    60
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   120,   178,   181,    21,    11,    12,    13,    64,    66,
      47,    15,    16,    25,   103,    48,   121,    49,    79,    80,
     112,    51,    78,   116,    61,    52,   191,   176,    53,    54,
      55,    56,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -131
static const yytype_int16 yypact[] =
{
     112,    -8,   119,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,    35,  -131,    55,     3,  -131,     5,   152,   -14,  -131,
     112,  -131,    54,    27,  -131,  -131,    -2,    56,  -131,  -131,
      66,    83,  -131,   243,   243,  -131,  -131,    75,  -131,   243,
     243,   243,   243,   243,  -131,  -131,  -131,    63,   191,    57,
    -131,    58,  -131,   311,  -131,  -131,    87,    60,  -131,    68,
       2,   119,  -131,    -1,   103,  -131,   104,   230,   243,   107,
     327,   327,   243,   268,  -131,  -131,  -131,  -131,   121,    81,
    -131,  -131,  -131,  -131,  -131,  -131,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,  -131,  -131,
      93,    95,     7,   -31,  -131,   -28,   191,   191,    96,   289,
     230,  -131,   -25,   327,  -131,   129,  -131,   132,    10,  -131,
     191,  -131,   230,   243,   243,   362,   362,    41,    41,    90,
      90,    29,    29,  -131,  -131,  -131,   327,   129,   129,  -131,
     119,  -131,  -131,    81,    81,  -131,   136,   105,   243,  -131,
     121,   121,  -131,  -131,   342,   353,  -131,  -131,     7,  -131,
    -131,   230,  -131,   136,   327,  -131,  -131,  -131,   101,   191,
    -131,  -131,    81,  -131,   230,   164,   191,  -131,   167,  -131,
      81,   110,  -131,   136,  -131,   136,  -131,  -131,   191,  -131,
      81,   191,  -131,    81,  -131
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,   -13,  -131,  -131,   -67,  -131,   165,  -131,  -131,  -131,
       1,  -131,  -131,   171,   125,  -129,  -130,  -131,   -82,    -6,
    -131,   -63,  -131,  -106,  -131,  -131,  -131,  -131,   -11,   -62,
    -131,   -12,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
      20,    14,    26,    18,   108,   111,     3,     4,     5,     6,
       7,    50,   140,   159,   160,   140,   117,   162,   148,    69,
      57,    14,    70,    71,   143,   144,    17,     9,    73,    74,
      75,    76,    77,   100,   170,    19,   101,    22,    23,    27,
      23,   115,   175,   141,   165,   166,   142,   147,    24,   149,
     184,   156,   157,   151,   186,    -8,   187,   109,    97,   153,
     192,   113,   102,   194,   102,    24,   118,    28,    63,    24,
     122,   123,   124,   104,    65,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   172,   117,   117,
     139,    94,    95,    96,   180,    59,    60,    59,   168,    90,
      91,    92,    93,    94,    95,    96,   190,    67,   179,   193,
     182,   177,   154,   155,   152,     1,    72,    60,     2,     3,
       4,     5,     6,     7,    68,    24,     3,     4,     5,     6,
       7,     8,   161,    81,    82,    97,    98,   164,   118,   118,
       9,   158,    99,   106,   107,    10,   167,     9,   110,   169,
      92,    93,    94,    95,    96,   115,   119,   173,   174,     3,
       4,     5,     6,     7,    30,    31,   137,    32,   138,    33,
      34,    60,   145,   188,   189,   150,    38,   171,    -5,   163,
       9,   183,    35,    36,   185,    58,    37,    29,   105,     0,
       0,     0,    38,    39,     0,     0,     0,     0,     3,     4,
       5,     6,     7,    30,    31,     0,    32,     0,    33,    34,
       0,     0,    40,    41,    42,     0,     0,     0,    43,     9,
       0,    35,    36,     0,     0,    37,     0,     0,    44,    45,
      46,     0,    39,     0,     0,     0,     0,     3,     4,     5,
       6,     7,     0,     0,     0,     0,     0,    33,    34,     0,
       0,    40,    41,    42,     0,     0,     0,    43,     9,     0,
      35,    36,     0,     0,    37,     0,     0,    44,    45,    46,
       0,    39,     0,    35,    36,     0,     0,    37,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,     0,     0,
      40,    41,    42,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,    45,    46,    43,
       0,     0,     0,     0,     0,     0,     0,    84,    85,     0,
      45,    46,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,    84,    85,
       0,     0,   114,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    83,     0,     0,     0,     0,     0,
      84,    85,     0,   146,     0,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    84,    85,     0,     0,
       0,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    85,     0,     0,     0,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    88,    89,
      90,    91,    92,    93,    94,    95,    96
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-131)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      13,     0,    14,     2,    67,    72,     7,     8,     9,    10,
      11,    17,    43,   143,   144,    43,    78,   146,    43,    32,
      34,    20,    33,    34,   106,   107,    34,    28,    39,    40,
      41,    42,    43,    31,   163,     0,    34,    34,    35,    34,
      35,    34,   172,    74,   150,   151,    74,   110,    62,    74,
     180,   137,   138,    43,   183,     0,   185,    68,    48,   122,
     190,    72,    61,   193,    63,    62,    78,    62,    41,    62,
      83,    84,    85,    74,    76,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,   169,   150,   151,
     102,    62,    63,    64,   176,    41,    42,    41,   161,    58,
      59,    60,    61,    62,    63,    64,   188,    41,   175,   191,
     177,   174,   123,   124,   120,     3,    41,    42,     6,     7,
       8,     9,    10,    11,    41,    62,     7,     8,     9,    10,
      11,    19,   145,    76,    76,    48,    76,   148,   150,   151,
      28,   140,    74,    40,    40,    33,   158,    28,    41,   162,
      60,    61,    62,    63,    64,    34,    75,   170,   171,     7,
       8,     9,    10,    11,    12,    13,    73,    15,    73,    17,
      18,    42,    76,   186,   187,    43,    40,    76,    14,    74,
      28,    14,    30,    31,    74,    20,    34,    16,    63,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,     7,     8,
       9,    10,    11,    12,    13,    -1,    15,    -1,    17,    18,
      -1,    -1,    60,    61,    62,    -1,    -1,    -1,    66,    28,
      -1,    30,    31,    -1,    -1,    34,    -1,    -1,    76,    77,
      78,    -1,    41,    -1,    -1,    -1,    -1,     7,     8,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,
      -1,    60,    61,    62,    -1,    -1,    -1,    66,    28,    -1,
      30,    31,    -1,    -1,    34,    -1,    -1,    76,    77,    78,
      -1,    41,    -1,    30,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    -1,    77,    78,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      77,    78,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    74,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    74,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    49,    50,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    50,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    56,    57,
      58,    59,    60,    61,    62,    63,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    19,    28,
      33,    84,    85,    86,    89,    90,    91,    34,    89,     0,
      80,    83,    34,    35,    62,    92,   110,    34,    62,    92,
      12,    13,    15,    17,    18,    30,    31,    34,    40,    41,
      60,    61,    62,    66,    76,    77,    78,    89,    94,    96,
      98,   100,   104,   107,   108,   109,   110,    34,    85,    41,
      42,   103,   111,    41,    87,    76,    88,    41,    41,    80,
     107,   107,    41,   107,   107,   107,   107,   107,   101,    97,
      98,    76,    76,    43,    49,    50,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    48,    76,    74,
      31,    34,    89,    93,    74,    93,    40,    40,   100,   107,
      41,    83,    99,   107,    74,    34,   102,   108,   110,    75,
      80,    95,    80,    80,    80,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,    73,    73,   110,
      43,    74,    74,    97,    97,    76,    74,   100,    43,    74,
      43,    43,    98,   100,   107,   107,   111,   111,    89,    95,
      95,    80,    94,    74,   107,   102,   102,   110,   100,    80,
      94,    76,    97,    80,    80,    95,   106,   100,    81,    83,
      97,    82,    83,    14,    95,    74,    94,    94,    80,    80,
      97,   105,    95,    97,    95
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
#line 181 "Ccfg.ypp"
    {
				(yyval.integer) = global_code.size();
#ifdef debug
cout << "Marker if :" << (yyval.integer) << endl;
#endif

			}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 189 "Ccfg.ypp"
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
#line 198 "Ccfg.ypp"
    {
				(yyval.integer) = global_code.size();
				code_element temp;
				temp.data1 = Jump;

				global_code.push_back(temp);
}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 206 "Ccfg.ypp"
    {;}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 209 "Ccfg.ypp"
    {
				((compiler *)c)->backpatch((yyvsp[(1) - (1)].attributes)->nextlist,global_code.size());
			}
    break;

  case 7:
/* Line 1787 of yacc.c  */
#line 213 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
						(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;
						((compiler *)c)->backpatch((yyvsp[(1) - (3)].attributes)->nextlist,(yyvsp[(2) - (3)].integer));
						free((yyvsp[(1) - (3)].attributes));
						free((yyvsp[(3) - (3)].attributes));
						}
    break;

  case 8:
/* Line 1787 of yacc.c  */
#line 219 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;
			 	free((yyvsp[(1) - (1)].attributes));
			}
    break;

  case 9:
/* Line 1787 of yacc.c  */
#line 225 "Ccfg.ypp"
    {
							(yyval.attributes) = new attr();
							if(current_symbol_table->table.find(string( (yyvsp[(2) - (3)].attributes)->var_name[0])) != current_symbol_table->table.end())
								yyerror("error: redeclaration \n");
							else
							{
								(yyvsp[(2) - (3)].attributes)->my_type = (yyvsp[(1) - (3)].attributes)->my_type;
								(yyvsp[(2) - (3)].attributes)->dimension[0]= (yyvsp[(1) - (3)].attributes)->dimension[0];
							} 
							

							free((yyvsp[(1) - (3)].attributes));
							free((yyvsp[(2) - (3)].attributes));
							}
    break;

  case 10:
/* Line 1787 of yacc.c  */
#line 239 "Ccfg.ypp"
    {(yyval.attributes) = new attr();

								free((yyvsp[(2) - (4)].attributes));}
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 244 "Ccfg.ypp"
    {
		struct llm temp;

		temp.my_type= (yyvsp[(1) - (2)].attributes)->my_type; 
		temp.dimension = (yyvsp[(1) - (2)].attributes)->dimension[0];
		temp.funcline = global_code.size();
		int total = temp.paramlist.total = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.total;

		for (int i=0;i<total;i++)
		{
			temp.paramlist.dimension[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.dimension[i];
			temp.paramlist.my_type[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.my_type[i];
			temp.paramlist.my_args[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.my_args[i];

		}

		symbol_table *tempTable = current_symbol_table;
		while (tempTable->parent != NULL) tempTable= tempTable->parent;
		tempTable->table[(yyvsp[(2) - (2)].lexemeNparamlist)->lexeme]=(temp); 
		((compiler *)c)-> gencalleecode(1);

		
	}
    break;

  case 12:
/* Line 1787 of yacc.c  */
#line 268 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[(1) - (6)].attributes)->my_type == (yyvsp[(5) - (6)].attributes)->my_type)
								{
									if ((yyvsp[(1) - (6)].attributes)->dimension[0] == (yyvsp[(5) - (6)].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else if((yyvsp[(1) - (6)].attributes)->my_type == Void && !(yyvsp[(5) - (6)].attributes)->isreturn) ;
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[(5) - (6)].attributes)->nextlist;

								free((yyvsp[(1) - (6)].attributes));
								free((yyvsp[(2) - (6)].lexemeNparamlist));
								free((yyvsp[(5) - (6)].attributes));
								delete (yyvsp[(6) - (6)].attributes);
								((compiler *)c)-> gencalleecode(0);
								((compiler *)c)-> writemipscode("jr","$ra");
								}
    break;

  case 13:
/* Line 1787 of yacc.c  */
#line 293 "Ccfg.ypp"
    {
		struct llm temp;

		temp.my_type= (yyvsp[(1) - (2)].attributes)->my_type; 
		temp.dimension = (yyvsp[(1) - (2)].attributes)->dimension[0];
		temp.funcline = global_code.size();
		int total = temp.paramlist.total = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.total;

		for (int i=0;i<total;i++)
		{
			temp.paramlist.dimension[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.dimension[i];
			temp.paramlist.my_type[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.my_type[i];
			temp.paramlist.my_args[i] = (yyvsp[(2) - (2)].lexemeNparamlist)->my_params.my_args[i];

		}

		symbol_table *tempTable = current_symbol_table;
		while (tempTable->parent != NULL) tempTable= tempTable->parent;
		tempTable->table[(yyvsp[(2) - (2)].lexemeNparamlist)->lexeme]=(temp); 
		((compiler *)c)-> gencalleecode(1);

		
	}
    break;

  case 14:
/* Line 1787 of yacc.c  */
#line 317 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								if ((yyvsp[(1) - (6)].attributes)->my_type == (yyvsp[(5) - (6)].attributes)->my_type && (yyvsp[(5) - (6)].attributes)->isreturn)
								{
									if ((yyvsp[(1) - (6)].attributes)->dimension[0] == (yyvsp[(5) - (6)].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else if((yyvsp[(1) - (6)].attributes)->my_type == Void && !(yyvsp[(5) - (6)].attributes)->isreturn) ;
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								(yyval.attributes)->nextlist = (yyvsp[(5) - (6)].attributes)->nextlist;


								free((yyvsp[(1) - (6)].attributes));
								free((yyvsp[(2) - (6)].lexemeNparamlist));
								free((yyvsp[(5) - (6)].attributes));
								delete (yyvsp[(6) - (6)].attributes);

								((compiler *)c)-> gencalleecode(0);
								((compiler *)c)-> writemipscode("jr","$ra");
								}
    break;

  case 15:
/* Line 1787 of yacc.c  */
#line 343 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
								free((yyvsp[(3) - (4)].attributes));
								}
    break;

  case 16:
/* Line 1787 of yacc.c  */
#line 346 "Ccfg.ypp"
    {
									(yyval.attributes) = new attr();
}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 351 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0]+1;
								free((yyvsp[(1) - (2)].attributes));
								}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 357 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr(); 
				(yyval.attributes)->my_type=(yyvsp[(1) - (1)].attributes)->my_type; 
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
				free((yyvsp[(1) - (1)].attributes));
				}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 364 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Long_long; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 20:
/* Line 1787 of yacc.c  */
#line 365 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Int; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 21:
/* Line 1787 of yacc.c  */
#line 366 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Char; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 367 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Float; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 368 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Double; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 369 "Ccfg.ypp"
    {(yyval.attributes) = new attr();(yyval.attributes)->my_type=Bool; (yyval.attributes)->dimension[0] = 0; }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 371 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0]+1;
				free((yyvsp[(1) - (2)].attributes));
				}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 377 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = Void;
				(yyval.attributes)->dimension[0] = 0;
				}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 383 "Ccfg.ypp"
    {
						(yyval.lexemeNparamlist) = new lexemeNparam();
						(yyval.lexemeNparamlist)->lexeme = string((yyvsp[(1) - (4)].lexeme));
						int total = (yyval.lexemeNparamlist)->my_params.total = (yyvsp[(3) - (4)].paramlist)->total;

						for (int i=0;i<total;i++)
						{
							(yyval.lexemeNparamlist)->my_params.dimension[i] = (yyvsp[(3) - (4)].paramlist)->dimension[i];
							(yyval.lexemeNparamlist)->my_params.my_type[i] = (yyvsp[(3) - (4)].paramlist)->my_type[i];
							(yyval.lexemeNparamlist)->my_params.my_args[i] = (yyvsp[(3) - (4)].paramlist)->my_args[i];

						}

						free((yyvsp[(3) - (4)].paramlist));
						}
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 398 "Ccfg.ypp"
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = string((yyvsp[(1) - (3)].lexeme));
							(yyval.lexemeNparamlist)->my_params.total = 0;

							}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 405 "Ccfg.ypp"
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = "main";
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");
							 free((yyvsp[(3) - (4)].paramlist));
							}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 413 "Ccfg.ypp"
    {
							(yyval.lexemeNparamlist) = new lexemeNparam();
							(yyval.lexemeNparamlist)->lexeme = "main";
							if (!maindef)
							{
								maindef = 1;
								main_function_line = global_code.size();
							}
							else yyerror("Conflicting declaration of function main");

					}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 425 "Ccfg.ypp"
    {
									(yyval.paramlist) = new funcparams();

									for (int i=0;i < (yyvsp[(1) - (4)].paramlist)->total;i++)
									{
										(yyval.paramlist)->my_args[i] = (yyvsp[(1) - (4)].paramlist)->my_args[i];
										(yyval.paramlist) -> my_type[i]  =    (yyvsp[(1) - (4)].paramlist)-> my_type[i];
										(yyval.paramlist)->dimension[i] = (yyvsp[(1) - (4)].paramlist)->dimension[i];
									}
									int total = (yyval.paramlist)->total = (yyvsp[(1) - (4)].paramlist)->total+1;
									total--;
									(yyval.paramlist)->my_args[total] = (yyvsp[(4) - (4)].attributes)->place;
									(yyval.paramlist)->my_type[total] = (yyvsp[(3) - (4)].attributes)->my_type;
									(yyval.paramlist)->dimension[total] = (yyvsp[(3) - (4)].attributes)->dimension[0] + (yyvsp[(4) - (4)].attributes)->dimension[0];
									free((yyvsp[(1) - (4)].paramlist)); 
									free((yyvsp[(3) - (4)].attributes));
									delete (yyvsp[(4) - (4)].attributes);
								}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 443 "Ccfg.ypp"
    {
							(yyval.paramlist) = new funcparams();
							int total = 0;
							(yyval.paramlist)->my_args[total] = (yyvsp[(2) - (2)].attributes)->place;
							(yyval.paramlist)->my_type[total] = (yyvsp[(1) - (2)].attributes)->my_type;
							(yyval.paramlist)->dimension[total] = (yyvsp[(1) - (2)].attributes)->dimension[0] + (yyvsp[(2) - (2)].attributes)->dimension[0];
							(yyval.paramlist)->total = 1;

							

							struct llm temp;

							temp.my_type= (yyvsp[(1) - (2)].attributes)->my_type; 

							/* checking if variable is already declared */

							if(current_symbol_table->table.find(string( (yyvsp[(2) - (2)].attributes)->var_name[0])) != current_symbol_table->table.end())
								yyerror("error: redeclaration \n");
								
							/*   ------------------------------------ */
							else 
							{
								temp.dimension = (yyvsp[(2) - (2)].attributes)->dimension[0];
								temp.element_size = (yyvsp[(2) - (2)].attributes)->element_size[0];
								if(temp.dimension==2) 
									temp.array_size = (yyvsp[(2) - (2)].attributes)->array_size[0];

								#ifdef debug2
									if(temp.dimension>=1) {
										printf("entering in symbol table with variable %s dimension %d and array_size %d\n",(yyvsp[(2) - (2)].attributes)->var_name[0],temp.dimension,temp.array_size);
									}
								#endif
								int j = check_keyword(string((yyvsp[(2) - (2)].attributes)->var_name[0])); // 1 if error
								if(j==1)
									yyerror("error: variable name cannot be a keyword \n");
								else if(j==0)
									current_symbol_table->table[string((yyvsp[(2) - (2)].attributes)->var_name[0])]=(temp);
							}

							
							free((yyvsp[(1) - (2)].attributes)); 
							free((yyvsp[(2) - (2)].attributes));
							}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 487 "Ccfg.ypp"
    { 
					(yyval.attributes) = new attr();

					#ifdef debug2
						printf("creating new symbol table\n");
					#endif
				  struct symbol_table *temp = new  symbol_table;
				  current_symbol_table->children.push_back(temp); 
				  temp->scope_number = global_scope;
				  global_scope = global_scope + 1;
				  temp->parent = current_symbol_table;

				  current_symbol_table = temp;
				 
		 }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 504 "Ccfg.ypp"
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

  case 35:
/* Line 1787 of yacc.c  */
#line 515 "Ccfg.ypp"
    {	
									#ifdef debug
						 				cout << "block -> brac_open M brac_close \n";
						 			#endif
									(yyval.attributes) = new attr(); 
									(yyval.attributes)->my_type = (yyvsp[(2) - (3)].attributes)->my_type;
									(yyval.attributes)->dimension[0] = (yyvsp[(2) - (3)].attributes)->dimension[0];
									(yyval.attributes)->isreturn = (yyvsp[(2) - (3)].attributes)->isreturn;
									(yyval.attributes)->nextlist = (yyvsp[(2) - (3)].attributes)->nextlist;

									free((yyvsp[(2) - (3)].attributes));
									}
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 528 "Ccfg.ypp"
    {(yyval.attributes) = new attr(); free((yyvsp[(1) - (1)].attributes));
}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 533 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				#ifdef debug
					cout << "M -> S M\n";
				#endif

				if ((yyvsp[(1) - (3)].attributes)->isreturn)
					(yyval.attributes)->my_type = (yyvsp[(1) - (3)].attributes)->my_type;
				else if ((yyvsp[(3) - (3)].attributes)->isreturn)
					(yyval.attributes)->my_type = (yyvsp[(3) - (3)].attributes)->my_type;
				else (yyval.attributes)->my_type = Useless;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (3)].attributes)->dimension[0];
				(yyval.attributes)->isreturn = (yyvsp[(1) - (3)].attributes)->isreturn || (yyvsp[(3) - (3)].attributes)->isreturn;
				
				if ((yyval.attributes)->my_type!=(yyvsp[(3) - (3)].attributes)->my_type && (yyvsp[(1) - (3)].attributes)->isreturn && (yyvsp[(3) - (3)].attributes)->isreturn )
					yyerror("Different return types for same function\n");
#ifdef debug2
	printf("types are: %d %d\n",(yyval.attributes)->my_type,(yyvsp[(3) - (3)].attributes)->my_type);
#endif
				
				((compiler *)c)->backpatch((yyvsp[(1) - (3)].attributes)->nextlist,(yyvsp[(2) - (3)].integer));
				(yyval.attributes)->nextlist = (yyvsp[(3) - (3)].attributes)->nextlist;
				free((yyvsp[(1) - (3)].attributes));
				free((yyvsp[(3) - (3)].attributes));
			}
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 558 "Ccfg.ypp"
    {
				#ifdef debug
						cout << "M -> S\n";
				#endif
				(yyval.attributes) = new attr();
				(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];	
				(yyval.attributes)->isreturn = (yyvsp[(1) - (1)].attributes)->isreturn;
				(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;

				free((yyvsp[(1) - (1)].attributes));
				}
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 572 "Ccfg.ypp"
    {
				#ifdef debug
						cout << "S -> S1\n";
				#endif
				(yyval.attributes) = new attr();
				
				
				(yyval.attributes)->my_type = (yyvsp[(1) - (2)].attributes)->my_type;
				(yyval.attributes)->isreturn = (yyvsp[(1) - (2)].attributes)->isreturn;

				
				(yyval.attributes)->dimension[0] = (yyvsp[(1) - (2)].attributes)->dimension[0];

				(yyval.attributes)->nextlist = (yyvsp[(1) - (2)].attributes)->nextlist;

				free((yyvsp[(1) - (2)].attributes));
			}
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 589 "Ccfg.ypp"
    {
					#ifdef debug
							cout << "S -> block_stmt\n";
					#endif
					(yyval.attributes) = new attr();
					(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
					(yyval.attributes)->isreturn = (yyvsp[(1) - (1)].attributes)->isreturn;

					(yyval.attributes)->nextlist = (yyvsp[(1) - (1)].attributes)->nextlist;
					(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
					free((yyvsp[(1) - (1)].attributes));
					}
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 601 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 607 "Ccfg.ypp"
    {
				(yyval.paramlist) = new funcparams();
				for (int i=0;i < (yyvsp[(1) - (3)].paramlist)->total;i++)
				{
					(yyval.paramlist)->my_args[i] = (yyvsp[(1) - (3)].paramlist)->my_args[i];
					(yyval.paramlist) -> my_type[i]  =    (yyvsp[(1) - (3)].paramlist)-> my_type[i];
					(yyval.paramlist)->dimension[i] = (yyvsp[(1) - (3)].paramlist)->dimension[i];
				}
				int total = (yyval.paramlist)->total = (yyvsp[(1) - (3)].paramlist)->total+1;
				total--;
				(yyval.paramlist)->my_args[total] = (yyvsp[(3) - (3)].attributes)->place;
				(yyval.paramlist)->my_type[total] = (yyvsp[(3) - (3)].attributes)->my_type;
				(yyval.paramlist)->dimension[total] = (yyvsp[(3) - (3)].attributes)->dimension[0];
				delete (yyvsp[(1) - (3)].paramlist);
				delete (yyvsp[(3) - (3)].attributes);
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 624 "Ccfg.ypp"
    {
				(yyval.paramlist) = new funcparams();
				int total = 0;
				(yyval.paramlist)->my_args[total] = (yyvsp[(1) - (1)].attributes)->place;
				(yyval.paramlist)->my_type[total] = (yyvsp[(1) - (1)].attributes)->my_type;
				(yyval.paramlist)->dimension[total] = (yyvsp[(1) - (1)].attributes)->dimension[0];
				(yyval.paramlist)->total = 1;
				delete (yyvsp[(1) - (1)].attributes);
	}
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 634 "Ccfg.ypp"
    {
				(yyval.paramlist) = new funcparams();
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 639 "Ccfg.ypp"
    {
					(yyval.attributes) = new attr(); 
					(yyval.attributes)->my_type = (yyvsp[(4) - (4)].attributes)->my_type; 
					(yyval.attributes)->dimension[0] = (yyvsp[(4) - (4)].attributes)->dimension[0];
					(yyval.attributes)->isreturn = (yyvsp[(4) - (4)].attributes)->isreturn;

					((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->truelist,(yyvsp[(3) - (4)].integer));
					((compiler *)c)->backpatch((yyvsp[(1) - (4)].attributes)->falselist,(yyvsp[(3) - (4)].integer));
					(yyval.attributes)->truelist = (yyvsp[(4) - (4)].attributes)->truelist;
					(yyval.attributes)->falselist = (yyvsp[(4) - (4)].attributes)->falselist;

					free((yyvsp[(1) - (4)].attributes));
					free((yyvsp[(4) - (4)].attributes));
				}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 654 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr(); 
				(yyval.attributes)->my_type = Bool;
				(yyval.attributes)->dimension[0]= (yyvsp[(1) - (1)].attributes)->dimension[0]; 
				(yyval.attributes)->truelist = (yyvsp[(1) - (1)].attributes)->truelist; 
				(yyval.attributes)->falselist = (yyvsp[(1) - (1)].attributes)->falselist; 
				free((yyvsp[(1) - (1)].attributes));
			}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 662 "Ccfg.ypp"
    {is_declaration=1;}
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 662 "Ccfg.ypp"
    {
						is_declaration = 0;
			#ifdef debug2
						 cout << "S1 -> type init\n";
			#endif
			(yyval.attributes) = new attr();
			struct llm temp;

			temp.my_type= (yyvsp[(1) - (3)].attributes)->my_type; 
			for(int i=0;i<(yyvsp[(3) - (3)].attributes)->index;i++) {
				/* checking if variable is already declared */

						if(current_symbol_table->table.find(string( (yyvsp[(3) - (3)].attributes)->var_name[i])) != current_symbol_table->table.end())
							yyerror("error: redeclaration \n");
					
				/*   ------------------------------------ */
						else {
							temp.dimension = (yyvsp[(3) - (3)].attributes)->dimension[i];
							temp.element_size = (yyvsp[(3) - (3)].attributes)->element_size[i];
							if(temp.dimension==2) 
								temp.array_size = (yyvsp[(3) - (3)].attributes)->array_size[i];

							#ifdef debug2
								if(temp.dimension>=1) {
									printf("entering in symbol table with variable %s dimension %d and array_size %d\n",(yyvsp[(3) - (3)].attributes)->var_name[i],temp.dimension,temp.array_size);
								}
							#endif
							int j = check_keyword(string((yyvsp[(3) - (3)].attributes)->var_name[i])); // 1 if error
							if(j==1)
								yyerror("error: variable name cannot be a keyword \n");
							else if(j==0)
								current_symbol_table->table[string((yyvsp[(3) - (3)].attributes)->var_name[i])]=(temp);
						}

			}
			#ifdef debug
			printf("Variables declared \n"); 
				for(int i=0;i<(yyvsp[(3) - (3)].attributes)->index;i++) {
					printf("%s %d\n",(yyvsp[(3) - (3)].attributes)->var_name[i],(yyvsp[(3) - (3)].attributes)->dimension[i]);
				}
			#endif
				(yyval.attributes)->my_type = Useless;
				free((yyvsp[(1) - (3)].attributes));
				free((yyvsp[(3) - (3)].attributes));
	}
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 707 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->isreturn = 1;
								(yyval.attributes)->my_type = (yyvsp[(2) - (2)].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0];

								code_element temp;
								temp.result.temp = -1;
								temp.result.args_type = 2;
								temp.data1 = Assignment;
								temp.arg1 = (yyvsp[(2) - (2)].attributes)->place;
								global_code.push_back(temp);

								free((yyvsp[(2) - (2)].attributes));
								}
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 722 "Ccfg.ypp"
    {
								(yyval.attributes)->isreturn = 1;
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type = Void;
								(yyval.attributes)->dimension[0] = 0;
						
								}
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 729 "Ccfg.ypp"
    {
#ifdef debug2
cout << "printing rule\n";
#endif
									(yyval.attributes) = new attr();
									int t = newTemp();

									code_element temp;
									temp.data1 = Assignment;
									temp.data2 = "";
									temp.result.temp = t;
									temp.result.args_type = 2;
									temp.arg2 = (yyvsp[(2) - (2)].attributes)->place;
#ifdef debug2
cout << "IDENTIFIER is " << (yyvsp[(2) - (2)].attributes)->place.var << endl;
#endif
									global_code.push_back(temp) ;
									((compiler *)c)->writemipscode("move","$a0",",$"+to_string(t) );
									((compiler *)c)->writemipscode("li","$v0,","1");
									((compiler *)c)->writemipscode("syscall");
									delete (yyvsp[(2) - (2)].attributes);
#ifdef debug2

#endif
	}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 757 "Ccfg.ypp"
    {
						 		#ifdef debug
						 				cout << "init -> assign_stmt ',' init\n";
						 		#endif
						 		(yyval.attributes) = new attr();
								strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (3)].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (3)].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->dimension[i];
									(yyval.attributes)->array_size[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->array_size[i];
									(yyval.attributes)->element_size[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->element_size[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[(3) - (3)].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
						}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 775 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (3)].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[(1) - (3)].attributes)->dimension[0];
								(yyval.attributes)->array_size[0] = (yyvsp[(1) - (3)].attributes)->array_size[0];
								(yyval.attributes)->element_size[0] = (yyvsp[(1) - (3)].attributes)->element_size[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[(3) - (3)].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->dimension[i];
									(yyval.attributes)->array_size[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->array_size[i];
									(yyval.attributes)->element_size[(yyval.attributes)->index] = (yyvsp[(3) - (3)].attributes)->element_size[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[(3) - (3)].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[(1) - (3)].attributes));
								free((yyvsp[(3) - (3)].attributes));
							}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 792 "Ccfg.ypp"
    {
						#ifdef debug
						 				cout << "init -> assign_stmt\n";
						 		#endif
						(yyval.attributes) = new attr();
						strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].attributes)->var_name[0]);
						(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
						(yyval.attributes)->index = 1;
						free((yyvsp[(1) - (1)].attributes));
					}
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 802 "Ccfg.ypp"
    {
					(yyval.attributes) = new attr();
					strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].attributes)->var_name[0]);
					(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
					(yyval.attributes)->array_size[0] = (yyvsp[(1) - (1)].attributes)->array_size[0];
					(yyval.attributes)->element_size[0] = (yyvsp[(1) - (1)].attributes)->element_size[0];
					#ifdef debug2
								printf("%s has dimension %d\n",(yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].attributes)->array_size[0]);
					#endif
					(yyval.attributes)->index = 1;
					free((yyvsp[(1) - (1)].attributes));
				  }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 816 "Ccfg.ypp"
    { 
					(yyval.attributes) = new attr();

					#ifdef debug2
						printf("creating new symbol table\n");
					#endif
				  struct symbol_table *temp = new  symbol_table;
				  current_symbol_table->children.push_back(temp); 
				  temp->scope_number = global_scope;
				  global_scope = global_scope + 1;
				  temp->parent = current_symbol_table;

				  current_symbol_table = temp;
				 
		 }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 833 "Ccfg.ypp"
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

  case 58:
/* Line 1787 of yacc.c  */
#line 850 "Ccfg.ypp"
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

  case 59:
/* Line 1787 of yacc.c  */
#line 869 "Ccfg.ypp"
    {
		((compiler *)c)-> gencalleecode(1);
	}
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 873 "Ccfg.ypp"
    {
											(yyval.attributes) = new attr();
											
											if((yyvsp[(6) - (16)].attributes)->my_type != Bool) yyerror("Condition not bool in For statement\n");

											(yyval.attributes)->my_type = (yyvsp[(15) - (16)].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[(15) - (16)].attributes)->dimension[0];										
											
											(yyval.attributes)->nextlist = (yyvsp[(6) - (16)].attributes)->falselist;
											((compiler *)c)->backpatch((yyvsp[(15) - (16)].attributes)->nextlist, (yyvsp[(8) - (16)].integer));
											global_code[(yyvsp[(10) - (16)].integer)].result.int_val = (yyvsp[(5) - (16)].integer);
											((compiler *)c)->backpatch((yyvsp[(6) - (16)].attributes)->truelist, (yyvsp[(13) - (16)].integer));
											code_element temp;
											temp.data1 = Jump;
											temp.result.int_val = (yyvsp[(8) - (16)].integer);
											((compiler *)c)-> gencalleecode(0);
										

											global_code.push_back(temp);

											free((yyvsp[(3) - (16)].attributes));
											free((yyvsp[(6) - (16)].attributes));
											free((yyvsp[(9) - (16)].attributes));
											free((yyvsp[(12) - (16)].attributes));
											free((yyvsp[(16) - (16)].attributes));
											free((yyvsp[(15) - (16)].attributes));
										}
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 904 "Ccfg.ypp"
    {
	((compiler *)c)-> gencalleecode(1);

}
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 908 "Ccfg.ypp"
    {
									(yyval.attributes) = new attr();

									if((yyvsp[(4) - (10)].attributes)->my_type != Bool) yyerror("Condition not bool in While statement\n");
									
									(yyval.attributes)->my_type = (yyvsp[(9) - (10)].attributes)->my_type;
									(yyval.attributes)->dimension[0]= (yyvsp[(9) - (10)].attributes)->dimension[0];

									((compiler *)c)->backpatch((yyvsp[(9) - (10)].attributes)->nextlist, (yyvsp[(2) - (10)].integer));
									((compiler *)c)->backpatch((yyvsp[(4) - (10)].attributes)->truelist, (yyvsp[(7) - (10)].integer));
									(yyval.attributes)->nextlist = (yyvsp[(4) - (10)].attributes)->falselist;
#ifdef debug
cout << "Marker if :" << (yyvsp[(7) - (10)].integer) << endl;
#endif
									struct code_element temp;
									temp.data1 = Jump;
									temp.result.int_val = (yyvsp[(2) - (10)].integer);
									((compiler *)c)-> gencalleecode(0);
									global_code.push_back(temp);

									delete (yyvsp[(6) - (10)].attributes);
									delete (yyvsp[(10) - (10)].attributes); 
									free((yyvsp[(4) - (10)].attributes));
									free((yyvsp[(9) - (10)].attributes));
	}
    break;

  case 63:
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

  case 64:
/* Line 1787 of yacc.c  */
#line 976 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr(); 
								char *s;
								symbol_table *temp = current_symbol_table;
								while (temp->parent != NULL)
									temp = temp->parent;
								if (temp->table.find(string( (yyvsp[(1) - (4)].lexeme))) != temp->table.end())
								{
									funcparams paramlist = temp->table[(string((yyvsp[(1) - (4)].lexeme) ))].paramlist;
									if (paramlist.total != (yyvsp[(3) - (4)].paramlist)->total)
									{
										sprintf(s,"%d arguments expected, %d given\n",paramlist.total,(yyvsp[(3) - (4)].paramlist)->total);
										yyerror(s);
									}
								 
									else for (int i=0;i<paramlist.total;i++)
									{
										if (paramlist.my_type[i] != (yyvsp[(3) - (4)].paramlist)->my_type[i])
										{
											sprintf(s,"Cannot convert %s to %s in argument %d of \
														function",((compiler *)c)->enumtostring((yyvsp[(3) - (4)].paramlist)->\
														my_type[i]).c_str(), ((compiler *)c)->enumtostring(\
														paramlist.my_type[i]).c_str(),i );

											yyerror(s);
										}
									}
			printf("just entered funciton\n");
									((compiler *)c)->gencallercode(1,paramlist);
									code_element callerjump;
									callerjump.data1 = Jump;
									callerjump.result.int_val = temp->table[string((yyvsp[(1) - (4)].lexeme))].funcline;
			printf("testing in func call%d\n",temp->table[string((yyvsp[(1) - (4)].lexeme))].funcline);
									callerjump.result.args_type = 3;
									global_code.push_back(callerjump);
									((compiler *)c)->gencallercode(0,paramlist);

									int t=newTemp();
									callerjump.data1 = Assignment;
									callerjump.result.temp = t;
									callerjump.result.args_type = 2;
									callerjump.arg1.temp = -1;
									callerjump.arg1.args_type = 2;
									global_code.push_back(callerjump);

									(yyval.attributes)->place = callerjump.result;
								}
								else
								{
									yyerror("Function not declared\n");
								}								

								delete (yyvsp[(3) - (4)].paramlist);
}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 1030 "Ccfg.ypp"
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

  case 66:
/* Line 1787 of yacc.c  */
#line 1052 "Ccfg.ypp"
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

  case 67:
/* Line 1787 of yacc.c  */
#line 1073 "Ccfg.ypp"
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

  case 68:
/* Line 1787 of yacc.c  */
#line 1094 "Ccfg.ypp"
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

  case 69:
/* Line 1787 of yacc.c  */
#line 1115 "Ccfg.ypp"
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

  case 70:
/* Line 1787 of yacc.c  */
#line 1136 "Ccfg.ypp"
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

  case 71:
/* Line 1787 of yacc.c  */
#line 1157 "Ccfg.ypp"
    {
					(yyval.attributes) = new attr(); 
					(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
					(yyval.attributes)->dimension[0] = (yyvsp[(1) - (1)].attributes)->dimension[0];
					delete ((yyvsp[(1) - (1)].attributes));
}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 1163 "Ccfg.ypp"
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

  case 73:
/* Line 1787 of yacc.c  */
#line 1205 "Ccfg.ypp"
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

  case 74:
/* Line 1787 of yacc.c  */
#line 1246 "Ccfg.ypp"
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

  case 75:
/* Line 1787 of yacc.c  */
#line 1287 "Ccfg.ypp"
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

  case 76:
/* Line 1787 of yacc.c  */
#line 1319 "Ccfg.ypp"
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

  case 77:
/* Line 1787 of yacc.c  */
#line 1335 "Ccfg.ypp"
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

  case 78:
/* Line 1787 of yacc.c  */
#line 1351 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
					(yyval.attributes)->my_type = Bool;

					(yyval.attributes)->truelist = (yyvsp[(2) - (2)].attributes)->falselist;
					(yyval.attributes)->falselist = (yyvsp[(2) - (2)].attributes)->truelist;

					 free((yyvsp[(2) - (2)].attributes));
					 }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 1359 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->my_type = (yyvsp[(2) - (3)].attributes)->my_type; 
						free((yyvsp[(2) - (3)].attributes));
					}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 1364 "Ccfg.ypp"
    {
			(yyval.attributes) = new attr();
			(yyval.attributes)->place.var = (yyvsp[(1) - (1)].attributes)->place.var; 
			#ifdef debug2
				cout << "in expr -> identifier ";
				cout << (yyvsp[(1) - (1)].attributes)->place.var;
				printf("\n");
			#endif
			int scope = ((compiler *)c)->get_scope((yyvsp[(1) - (1)].attributes)->place.var);
			
			struct code_element temp_code;
			temp_code.data2 = "=";
			temp_code.result.temp = newTemp();
			temp_code.result.args_type = 2;
			temp_code.arg1 =  (yyvsp[(1) - (1)].attributes)->place;
			temp_code.arg1.var = (yyvsp[(1) - (1)].attributes)->place.var + "_" +to_string(scope);
			temp_code.arg1.args_type = 1;
			if((yyvsp[(1) - (1)].attributes)->dimension[0]==2) {
					temp_code.data2 = "[]";
					temp_code.data1 = Array;
					temp_code.arg2.temp = (yyvsp[(1) - (1)].attributes)->offset_temp_number;
					temp_code.arg2.args_type = 2;
			}
			else if((yyvsp[(1) - (1)].attributes)->dimension[0]==1) {
					temp_code.data2 = "[]";
					temp_code.data1 = Array;
					temp_code.arg2.temp = (yyvsp[(1) - (1)].attributes)->offset_temp_number;
					temp_code.arg2.args_type = 2;
			}
			global_code.push_back(temp_code);
			(yyval.attributes)->place  = temp_code.result; 

			struct symbol_table *temp = current_symbol_table;
			int flag = 1;
			while(flag) {
			           	if( temp->table.find(string( (yyvsp[(1) - (1)].attributes)->var_name[0])) != temp->table.end()){
						(yyval.attributes)->my_type = temp->table[string((yyvsp[(1) - (1)].attributes)->var_name[0])].my_type;
#ifdef debug2
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

  case 81:
/* Line 1787 of yacc.c  */
#line 1415 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; free((yyvsp[(2) - (2)].attributes));}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 1417 "Ccfg.ypp"
    {(yyval.attributes) = new attr();
(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; free((yyvsp[(2) - (2)].attributes));}
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 1419 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				printf("args_type = %d\n",(yyvsp[(1) - (1)].attributes)->place.args_type);
				(yyval.attributes)->place = (yyvsp[(1) - (1)].attributes)->place;

				struct code_element temp_code;
				temp_code.data2 = "=";
				temp_code.result.temp = newTemp();
				temp_code.result.args_type = 2;
				temp_code.arg1 =  (yyvsp[(1) - (1)].attributes)->place;
				global_code.push_back(temp_code);

				(yyval.attributes)->place  = temp_code.result; 

				(yyval.attributes)->place.args_type = (yyval.attributes)->place.args_type;
				(yyval.attributes)->my_type = (yyvsp[(1) - (1)].attributes)->my_type;
				(yyval.attributes)->dimension[0] = 0;
			}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 1437 "Ccfg.ypp"
    {
								(yyval.attributes) = new attr();
								(yyval.attributes)->my_type=(yyvsp[(2) - (2)].attributes)->my_type; 
								(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0]+1;
								free((yyvsp[(2) - (2)].attributes));
								}
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 1443 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->truelist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;

			}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 1454 "Ccfg.ypp"
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->falselist = ((compiler *)c)->makelist(global_code.size());

				struct code_element temp_code;
				temp_code.data1 = Jump;
				global_code.push_back(temp_code);
				(yyval.attributes)->my_type = Bool;
	}
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 1466 "Ccfg.ypp"
    {
							#ifdef debug2
								cout << "assign_stmt -> identifier = expr \n ";
							#endif
							(yyval.attributes) = new attr();
							(yyval.attributes)->my_type = Void;
							struct code_element temp_code;
							temp_code.arg1 = (yyvsp[(3) - (3)].attributes)->place;
							int scope = ((compiler *)c)->get_scope((yyvsp[(1) - (3)].attributes)->place.var);
							temp_code.result = (yyvsp[(1) - (3)].attributes)->place;
							temp_code.result.var = (yyvsp[(1) - (3)].attributes)->place.var + "_" + to_string(scope);
							temp_code.result.args_type = 1;
							temp_code.data2 = "=";
							temp_code.data1 = Assignment;
							(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[(3) - (3)].attributes)->code.begin(),(yyvsp[(3) - (3)].attributes)->code.end());
							(yyval.attributes)->code.push_back(temp_code);
							if((yyvsp[(1) - (3)].attributes)->dimension[0]==2) {
								temp_code.data2 = "[][]";
								temp_code.data1 = Array;
								printf("double array in assign_stmt -> identifier = expr offset %d\n",(yyvsp[(1) - (3)].attributes)->offset_temp_number);
								temp_code.arg2.temp = (yyvsp[(1) - (3)].attributes)->offset_temp_number;
								temp_code.arg2.args_type = 2;
							}
							else if((yyvsp[(1) - (3)].attributes)->dimension[0]==1) {
								temp_code.data2 = "[]";
								temp_code.data1 = Array;
								temp_code.arg2.temp = (yyvsp[(1) - (3)].attributes)->offset_temp_number;
								temp_code.arg2.args_type = 2;
							}
							#ifdef debug2
								printf("In assign_stmt -> identifier '=' expr\n");
								cout << temp_code.result.var;
							#endif 
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

  case 88:
/* Line 1787 of yacc.c  */
#line 1552 "Ccfg.ypp"
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

  case 89:
/* Line 1787 of yacc.c  */
#line 1561 "Ccfg.ypp"
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.float_val = (yyvsp[(1) - (1)].real);
						(yyval.attributes)->place.args_type = 4;
						(yyval.attributes)->my_type = Int;
					}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 1569 "Ccfg.ypp"
    {  	
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.var = (yyvsp[(1) - (1)].lexeme);
						(yyval.attributes)->place.args_type = 1;
						strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (1)].lexeme));
							(yyval.attributes)->dimension[0] = 0;
					 }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 1576 "Ccfg.ypp"
    {
							(yyval.attributes) = new attr();
							strcpy((yyval.attributes)->var_name[0],(yyvsp[(1) - (2)].lexeme));
							(yyval.attributes)->place.var = (yyvsp[(1) - (2)].lexeme);
							if(!is_declaration&& (yyvsp[(2) - (2)].attributes)->dimension[0]==2) {
								struct code_element temp;
								temp.result.temp = newTemp();
								temp.result.args_type = 2;
								temp.data2 = "=";
								temp.arg1.int_val = ((compiler *)c)->get_second_size((yyvsp[(1) - (2)].lexeme));
								temp.arg1.args_type = 3;
								global_code.push_back(temp);

								temp.result.temp = newTemp();
								temp.data2 = "*";
								temp.arg1.temp = temp.result.temp-1;
								temp.arg1.args_type = 2;
								temp.arg2.temp = temp.result.temp-2;
								temp.arg2.args_type = 2;
								global_code.push_back(temp);

								temp.result.temp = newTemp();
								temp.data2 = "+";
								temp.arg1.temp = temp.result.temp-1;
								temp.arg1.args_type = 2;
								temp.arg2.temp = temp.result.temp-4;
								temp.arg2.args_type = 2;
								global_code.push_back(temp);

								(yyval.attributes)->offset_temp_number  = temp.result.temp;


							}
							(yyval.attributes)->dimension[0] = (yyvsp[(2) - (2)].attributes)->dimension[0];
							(yyval.attributes)->array_size[0] = (yyvsp[(2) - (2)].attributes)->array_size[0];
							(yyval.attributes)->element_size[0] = (yyvsp[(2) - (2)].attributes)->element_size[0];
							#ifdef debug2
								printf("is_declaration = %d \n",is_declaration);
							#endif
							free((yyvsp[(2) - (2)].attributes));
		}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 1618 "Ccfg.ypp"
    {(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = (yyvsp[(4) - (4)].attributes)->dimension[0] +1; printf("%s",(yyvsp[(2) - (4)].lexeme)); free((yyvsp[(4) - (4)].attributes));
								if(!is_declaration) {
									struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.var = (yyvsp[(2) - (4)].lexeme);
											temp.arg1.args_type = 1;
											global_code.push_back(temp);
								}
}
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 1629 "Ccfg.ypp"
    {(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = 1;
					if(!is_declaration) {
											struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.var = (yyvsp[(2) - (3)].lexeme);
											temp.arg1.args_type = 1;
											global_code.push_back(temp);
					}
				}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 1640 "Ccfg.ypp"
    {(yyval.attributes) = new attr();  (yyval.attributes)->dimension[0] = 1; (yyval.attributes)->array_size[0] = (yyvsp[(2) - (3)].integer);
							if(is_declaration)
								(yyval.attributes)->element_size[0] = (yyvsp[(2) - (3)].integer);
							else {
								struct code_element temp;
								temp.result.temp = newTemp();
								temp.result.args_type = 2;
								temp.data2 = "=";
								temp.arg1.int_val = (yyvsp[(2) - (3)].integer);
								temp.arg1.args_type = 3;
								global_code.push_back(temp);
							}
						}
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 1653 "Ccfg.ypp"
    {
									(yyval.attributes) = new attr(); (yyval.attributes)->dimension[0] = (yyvsp[(4) - (4)].attributes)->dimension[0] + 1; free((yyvsp[(4) - (4)].attributes));
									if((yyval.attributes)->dimension[0] == 2) {
										(yyval.attributes)->array_size[0] = (yyvsp[(4) - (4)].attributes)->array_size[0];
										if(is_declaration)
											(yyval.attributes)->element_size[0] =(yyvsp[(2) - (4)].integer)*(yyvsp[(4) - (4)].attributes)->element_size[0];
										else {
											struct code_element temp;
											temp.result.temp = newTemp();
											temp.result.args_type = 2;
											temp.data2 = "=";
											temp.arg1.int_val = (yyvsp[(2) - (4)].integer);
											temp.arg1.args_type = 3;
											global_code.push_back(temp);
										}
									}

							  }
    break;


/* Line 1787 of yacc.c  */
#line 3595 "Ccfg.tab.cpp"
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
#line 1672 "Ccfg.ypp"


int check_keyword(string identifier)
{
	if(!identifier.compare("auto"))
		return 1;
	else if(!identifier.compare("break"))
		return 1;
	else if(!identifier.compare("case"))
                return 1;
	else if(!identifier.compare("char"))
                return 1;
	else if(!identifier.compare("const"))
                return 1;
	else if(!identifier.compare("continue"))
                return 1;
	 else if(!identifier.compare("default"))
                return 1;
	 else if(!identifier.compare("do"))
                return 1;
	 else if(!identifier.compare("double"))
                return 1;
	 else if(!identifier.compare("else"))
                return 1;
	 else if(!identifier.compare("enum"))
                return 1;
	 else if(!identifier.compare("extern"))
                return 1;
	 else if(!identifier.compare("float"))
                return 1;
	 else if(!identifier.compare("for"))
                return 1;
	 else if(!identifier.compare("goto"))
                return 1;
	 else if(!identifier.compare("if"))
                return 1;
	 else if(!identifier.compare("int"))
                return 1;
	 else if(!identifier.compare("long"))
                return 1;
	 else if(!identifier.compare("register"))
                return 1;
	 else if(!identifier.compare("return"))
                return 1;
	 else if(!identifier.compare("short"))
                return 1;
	 else if(!identifier.compare("signed"))
                return 1;
	 else if(!identifier.compare("sizeof"))
                return 1;
	 else if(!identifier.compare("static"))
                return 1;
	 else if(!identifier.compare("struct"))
                return 1;
	 else if(!identifier.compare("switch"))
                return 1;
	 else if(!identifier.compare("typedef"))
                return 1;
	 else if(!identifier.compare("union"))
                return 1;
	 else if(!identifier.compare("unsigned"))
                return 1;
	 else if(!identifier.compare("void"))
                return 1;
	 else if(!identifier.compare("volatile"))
                return 1;
	 else if(!identifier.compare("while"))
                return 1;
	else
		return 0; 
}

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
		cout << "l" << i << ":\t";
		if (a.data1==Assignment)
		{
			
			 wrg(a.result); cout << "= ";
			 wrg(a.arg1);
			 cout << " " << a.data2 << " ";
			 wrg(a.arg2);
		}
		else if(a.data1==Jump)
		{
			
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
		else if(a.data1 == Array)
		{
			
			wrg(a.result); cout << "=";
			wrg(a.arg1);
			cout << "["; wrg(a.arg2); cout << "]";
		}
		else if(a.data1==Mipscode)
		{
			cout << a.data2 << " " << a.arg1.var << " " << a.arg2.var << a.result.var;
		}
		cout << endl;
	}
}


int main()
{
		no_line = 1;
		maindef = 0;
		totalerrs = 0;
		global_scope = 1;
		current_symbol_table = new symbol_table;
		current_symbol_table->parent = NULL;
		current_symbol_table->scope_number = global_scope;
		global_scope = global_scope + 1;
		c = (void *) (new compiler);
        yyparse();

        if (!maindef) yyerror("main function not defined");
		//print();
		if (totalerrs>0)
		{
			printf("%d errors found: No code generated\n",totalerrs);
		    return 0;
		}
		codegen();
		print();
		//create_mips();
		return 0;
}
