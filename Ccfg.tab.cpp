/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "Ccfg.ypp" /* yacc.c:339  */

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
void backpatch(vector <int> lines, int label) {
	int i;
}
vector <int> makelist(int p) {
	vector <int> new1;
	new1.push_back(p);
	return new1;
}
vector <int> merge_list(vector <int> l1,vector <int> l2) {
	
	for(int i=0; i<l1.size(); i++) {
		l2.push_back(l1[i]);
	}
	return l2;
 }


#line 127 "Ccfg.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 63 "Ccfg.ypp" /* yacc.c:355  */

	#include "resources.h"

#line 161 "Ccfg.tab.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    T_AND = 291,
    T_GREATER_THAN_EQUAL = 292,
    T_LESS_THAN_EQUAL = 293,
    T_EQUAL_TEST = 294,
    T_NOT_EQUAL = 295,
    T_OR = 296,
    T_PLUS_SELF = 297,
    T_MINUS_SELF = 298,
    T_MULT_SELF = 299,
    T_DIVIDE_SELF = 300,
    T_THIS_POINTER = 301,
    T_ADD_ONE = 302,
    T_SUB_ONE = 303,
    T_IO_INT = 304,
    T_IO_LONG_LONG = 305,
    T_IO_STRING = 306,
    T_IO_FLOAT = 307,
    DEREF = 308,
    UPLUS = 309,
    UMINUS = 310
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 67 "Ccfg.ypp" /* yacc.c:355  */

long long integer;
long double real;
char lexeme[10000];
struct attr *attributes;
//Yet to include exponential numbers and hexadecimals.

#line 237 "Ccfg.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CCFG_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "Ccfg.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    67,    60,     2,
      54,    74,    65,    63,    56,    64,    72,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    76,
      62,    57,    61,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    73,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,    58,    75,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    68,    70,
      71
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   185,   185,   190,   193,   197,   209,   212,   234,   256,
     259,   262,   268,   275,   276,   277,   278,   279,   280,   282,
     288,   294,   299,   304,   311,   319,   320,   322,   336,   347,
     358,   362,   380,   391,   400,   412,   414,   415,   446,   453,
     461,   478,   491,   501,   510,   519,   523,   533,   541,   544,
     585,   587,   594,   601,   608,   615,   636,   643,   645,   687,
     728,   769,   801,   818,   830,   832,   834,   857,   859,   861,
     867,   884,   951,   960,   968,   975,   982,   983,   984,   985
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
  "T_DEC_INT", "T_STRING", "T_HEADER", "ID", "T_MAIN", "T_AND",
  "T_GREATER_THAN_EQUAL", "T_LESS_THAN_EQUAL", "T_EQUAL_TEST",
  "T_NOT_EQUAL", "T_OR", "T_PLUS_SELF", "T_MINUS_SELF", "T_MULT_SELF",
  "T_DIVIDE_SELF", "T_THIS_POINTER", "T_ADD_ONE", "T_SUB_ONE", "T_IO_INT",
  "T_IO_LONG_LONG", "T_IO_STRING", "T_IO_FLOAT", "'{'", "'('", "'['",
  "','", "'='", "'|'", "'^'", "'&'", "'>'", "'<'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "DEREF", "'!'", "UPLUS", "UMINUS", "'.'", "']'", "')'",
  "'}'", "';'", "$accept", "Marker_e", "code", "decl", "type", "basic",
  "void", "func", "args", "brac_open", "brac_close", "block", "M", "S",
  "S1", "init", "block_stmt", "stmt", "expr", "assign_stmt", "number",
  "identifier", "array", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   123,    40,    91,    44,    61,   124,    94,
      38,    62,    60,    43,    45,    42,    47,    37,   308,    33,
     309,   310,    46,    93,    41,   125,    59
};
# endif

#define YYPACT_NINF -70

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-70)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     297,   -23,   101,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,    41,   297,   -28,   -70,    -8,    90,   -26,   -70,   -70,
      68,    -3,   -70,    90,   -14,    24,   -70,    90,    27,    31,
      52,   166,   -70,   -70,   -70,   166,   166,   166,   166,   166,
       6,   -70,   153,    19,   -70,    28,   -70,    63,   201,   -70,
     -70,    75,    57,    14,    18,   -70,    22,   -70,   -70,   -70,
     141,   166,   141,   201,   187,   -70,   -70,   -70,   -70,    79,
     -70,    81,    -2,    64,   153,   -70,   -70,   141,   -70,   166,
     166,   166,   166,   -70,   166,   166,   166,   166,   166,   166,
     166,   166,   -70,   -70,     6,    66,    65,    69,   -70,    67,
      59,    71,    72,   -70,   113,   113,   -70,   -70,   -70,   -70,
     166,   -19,    50,   272,   272,   166,   -19,    50,    61,    61,
     -70,   -70,   -70,   201,   100,   -70,    79,    79,   -70,   141,
     104,   114,   -70,   -70,   232,   219,   101,   -70,   -70,    97,
     153,   153,   -70,   141,    99,   102,   105,   164,   -70,   127,
     129,   153,   153,   110,   111,   -70,   -70
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    15,    17,    14,    16,    13,    20,    18,
      10,     0,     4,     0,    12,     0,     0,     0,     1,     3,
      74,     0,    11,     0,     0,     0,    19,     0,     0,     0,
       0,    39,    73,    72,    27,     0,     0,     0,     0,     0,
       0,    50,     0,     0,    30,     0,    34,    36,    48,    57,
      69,    66,     0,     0,     0,    75,     0,     7,     5,     8,
       0,     0,     0,    38,     0,    67,    68,    70,    64,    74,
      37,    42,    43,     0,    32,     9,    33,     0,     2,     0,
       0,     0,     0,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     6,    22,     0,     0,     0,     0,    24,     0,
       0,     0,     0,    65,     0,     0,    28,    29,    31,    35,
       0,    55,    54,    51,    56,     0,    53,    52,    49,    58,
      59,    60,    61,    71,    26,    21,    78,    77,    23,     0,
       0,     0,    40,    41,    62,    63,     0,    79,    76,     0,
       0,     0,    25,     0,     0,     0,     0,    44,    47,     0,
       0,     0,     0,     0,     0,    46,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,   106,   178,   -70,     0,   -70,   -70,    62,   -52,   -70,
     -70,    11,   -61,    60,   -57,   -69,   -70,   130,   -21,   -31,
     -70,   -12,     4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,   110,    11,    12,    40,    14,    15,    41,    95,    42,
     107,    43,    73,    74,    45,    70,    46,    47,    48,    49,
      50,    51,    55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      13,    24,    17,   100,    99,   102,    20,    21,    52,    71,
      63,    16,    13,   108,    64,    65,    66,    67,    68,    80,
     109,     3,     4,     5,     6,     7,    25,    21,    72,     3,
       4,     5,     6,     7,    57,   132,   133,    22,    59,    22,
      69,    18,     9,    85,    86,    87,    88,    89,    90,    96,
       9,    56,    97,    94,   105,    91,    94,    26,   111,   112,
     113,   114,    58,   116,   117,   118,   119,   120,   121,   122,
     123,    22,   139,    71,    71,    23,    44,    27,    53,   144,
     145,    60,   124,    44,   142,    61,   146,    44,    93,   134,
     153,   154,    72,    72,   135,    75,    98,     3,     4,     5,
       6,     7,    28,    29,    76,    30,    62,    31,     3,     4,
       5,     6,     7,    86,    87,    88,    89,    90,     9,    77,
      32,    33,    53,    54,    20,    21,    88,    89,    90,     9,
     137,   138,    91,    92,    54,   129,    94,   104,   126,   106,
     125,   128,   127,    34,    35,   130,   131,    69,     3,     4,
       5,     6,     7,    36,    37,    38,   136,   140,    31,    39,
       3,     4,     5,     6,     7,    28,    29,   141,    30,     9,
      31,    32,    33,   143,   147,    20,    21,   148,   150,   149,
     151,     9,   152,    32,    33,   155,   156,    20,    21,   115,
      19,   101,     0,     0,     0,    35,    32,    33,     0,     0,
      20,    21,     0,     0,    36,    37,    38,    35,     0,     0,
      39,     0,     0,     0,     0,     0,    36,    37,    38,     0,
      35,     0,    39,    78,    79,    80,    81,    82,    83,    36,
      37,    38,     0,     0,     0,    39,     0,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    78,    79,    80,    81,    82,
       0,   103,    84,    85,    86,    87,    88,    89,    90,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
       1,     0,     0,     2,     3,     4,     5,     6,     7,    79,
      80,     0,     0,     0,     0,     0,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     9,     0,     0,     0,     0,
      10,     0,     0,    84,    85,    86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,    13,     2,    60,    56,    62,    34,    35,    34,    40,
      31,    34,    12,    74,    35,    36,    37,    38,    39,    38,
      77,     7,     8,     9,    10,    11,    34,    35,    40,     7,
       8,     9,    10,    11,    23,   104,   105,    65,    27,    65,
      34,     0,    28,    62,    63,    64,    65,    66,    67,    31,
      28,    54,    34,    53,    56,    57,    56,    65,    79,    80,
      81,    82,    76,    84,    85,    86,    87,    88,    89,    90,
      91,    65,   129,   104,   105,    13,    16,    15,    54,   140,
     141,    54,    94,    23,   136,    54,   143,    27,    74,   110,
     151,   152,   104,   105,   115,    76,    74,     7,     8,     9,
      10,    11,    12,    13,    76,    15,    54,    17,     7,     8,
       9,    10,    11,    63,    64,    65,    66,    67,    28,    56,
      30,    31,    54,    55,    34,    35,    65,    66,    67,    28,
     126,   127,    57,    76,    55,    76,   136,    56,    73,    75,
      74,    74,    73,    53,    54,    74,    74,    34,     7,     8,
       9,    10,    11,    63,    64,    65,    56,    53,    17,    69,
       7,     8,     9,    10,    11,    12,    13,    53,    15,    28,
      17,    30,    31,    76,    75,    34,    35,    75,    14,    74,
      53,    28,    53,    30,    31,    75,    75,    34,    35,    83,
      12,    61,    -1,    -1,    -1,    54,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    63,    64,    65,    54,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,
      54,    -1,    69,    36,    37,    38,    39,    40,    41,    63,
      64,    65,    -1,    -1,    -1,    69,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    36,    37,    38,    39,    40,
      -1,    74,    61,    62,    63,    64,    65,    66,    67,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
       3,    -1,    -1,     6,     7,     8,     9,    10,    11,    37,
      38,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    61,    62,    63,    64,    65,    66,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    10,    11,    19,    28,
      33,    79,    80,    81,    82,    83,    34,    81,     0,    79,
      34,    35,    65,    84,    98,    34,    65,    84,    12,    13,
      15,    17,    30,    31,    53,    54,    63,    64,    65,    69,
      81,    84,    86,    88,    90,    91,    93,    94,    95,    96,
      97,    98,    34,    54,    55,    99,    54,    88,    76,    88,
      54,    54,    54,    95,    95,    95,    95,    95,    95,    34,
      92,    96,    98,    89,    90,    76,    76,    56,    36,    37,
      38,    39,    40,    41,    61,    62,    63,    64,    65,    66,
      67,    57,    76,    74,    81,    85,    31,    34,    74,    85,
      91,    94,    91,    74,    56,    56,    75,    87,    89,    91,
      78,    95,    95,    95,    95,    78,    95,    95,    95,    95,
      95,    95,    95,    95,    98,    74,    73,    73,    74,    76,
      74,    74,    92,    92,    95,    95,    56,    99,    99,    91,
      53,    53,    85,    76,    89,    89,    91,    75,    75,    74,
      14,    53,    53,    89,    89,    75,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    83,
      83,    84,    84,    84,    84,    85,    85,    86,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    93,    94,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     3,     4,     3,     3,     4,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     4,     3,     4,     3,     4,     2,     1,     1,     3,
       1,     2,     1,     2,     1,     3,     1,     2,     2,     1,
       3,     3,     1,     1,     7,    11,    11,     7,     1,     3,
       1,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     4,     4,     2,     3,     1,     2,     2,     1,
       2,     3,     1,     1,     1,     2,     4,     3,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
        case 2:
#line 185 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.integer) = global_code.size()  + 1;
			}
#line 1482 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 190 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
						free((yyvsp[-1].attributes));
						free((yyvsp[0].attributes));}
#line 1490 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 193 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));

			free((yyvsp[0].attributes));}
#line 1498 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 197 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
							if(current_symbol_table->table.find(string( (yyvsp[-1].attributes)->var_name[0])) != current_symbol_table->table.end())
								yyerror("error: redeclaration \n");
							else{
							(yyvsp[-1].attributes)->my_type = (yyvsp[-2].attributes)->my_type;
							(yyvsp[-1].attributes)->dimension[0]= (yyvsp[-2].attributes)->dimension[0];
							} 
							

							free((yyvsp[-2].attributes));
							free((yyvsp[-1].attributes));
							}
#line 1515 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 209 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));

								free((yyvsp[-2].attributes));}
#line 1523 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 212 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								if ((yyvsp[-2].attributes)->my_type == (yyvsp[0].attributes)->my_type)
								{
									if ((yyvsp[-2].attributes)->dimension[0] == (yyvsp[0].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
										struct llm temp;

										temp.my_type= (yyvsp[-2].attributes)->my_type; 
										temp.dimension = (yyvsp[-2].attributes)->dimension[0];
										current_symbol_table->table[string((yyvsp[-1].attributes)->var_name[0])]=(temp);									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else yyerror("Type mismatch: Return type doesn't match declared type\n");
								printf("type is %d. block is %d\n",(yyvsp[-2].attributes)->my_type,(yyvsp[0].attributes)->my_type);
								free((yyvsp[-2].attributes));
								free((yyvsp[-1].attributes));
								free((yyvsp[0].attributes));
								}
#line 1550 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 234 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								if ((yyvsp[-2].attributes)->my_type == (yyvsp[0].attributes)->my_type)
								{
									if ((yyvsp[-2].attributes)->dimension[0] == (yyvsp[0].attributes)->dimension[0])
									{	/* Everything is fine. Enter in symbol table */
										struct llm temp;

										temp.my_type= (yyvsp[-2].attributes)->my_type; 
										temp.dimension = (yyvsp[-2].attributes)->dimension[0];
										current_symbol_table->table[string((yyvsp[-1].attributes)->var_name[0])]=(temp);									}
									else
									{
										yyerror("Dimension Mismatch\n");
									}
								}
								else yyerror("Type mismatch: Return type doesn't match declared type\n");

								free((yyvsp[-2].attributes));
								free((yyvsp[-1].attributes));
								free((yyvsp[0].attributes));
								}
#line 1577 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 256 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
								free((yyvsp[-1].attributes));
								}
#line 1585 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 259 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)	malloc(sizeof(attr));}
#line 1591 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 262 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0]+1;
								free((yyvsp[-1].attributes));
								}
#line 1602 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 268 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr)); 
				(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; 
				(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
				free((yyvsp[0].attributes));
				}
#line 1613 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 275 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Long_long; (yyval.attributes)->dimension[0] = 0; }
#line 1619 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 276 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Int; (yyval.attributes)->dimension[0] = 0; }
#line 1625 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 277 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Char; (yyval.attributes)->dimension[0] = 0; }
#line 1631 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 278 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Float; (yyval.attributes)->dimension[0] = 0; }
#line 1637 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 279 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Double; (yyval.attributes)->dimension[0] = 0; }
#line 1643 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 280 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type=Bool; (yyval.attributes)->dimension[0] = 0; }
#line 1649 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 282 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0]+1;
				free((yyvsp[-1].attributes));
				}
#line 1660 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 288 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = Void;
				(yyval.attributes)->dimension[0] = 0;
				}
#line 1670 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 294 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));
						strcpy((yyval.attributes)->var_name[0],(yyvsp[-3].lexeme));
						 free((yyvsp[-1].attributes));
						}
#line 1680 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 299 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							strcpy((yyval.attributes)->var_name[0],(yyvsp[-2].lexeme));

							}
#line 1690 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 304 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");
							 free((yyvsp[-1].attributes));
							}
#line 1702 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 311 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							if (!maindef)
								maindef = 1;
							else yyerror("Conflicting declaration of function main");

							}
#line 1714 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 319 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));   free((yyvsp[-3].attributes)); free((yyvsp[-2].attributes));}
#line 1720 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 320 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));   free((yyvsp[-1].attributes)); free((yyvsp[0].attributes));}
#line 1726 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 322 "Ccfg.ypp" /* yacc.c:1661  */
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
#line 1744 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 336 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();

				#ifdef debug
					printf("destroying symbol table\n");
				#endif
				  struct symbol_table *temp = current_symbol_table;
				  current_symbol_table = temp->parent;
				  delete temp;
		 }
#line 1759 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 347 "Ccfg.ypp" /* yacc.c:1661  */
    {	
									#ifdef debug
						 				cout << "block -> brac_open M brac_close \n";
						 			#endif
									(yyval.attributes) = (attr*)malloc(sizeof(attr)); 
									(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
									(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0];

									free((yyvsp[-1].attributes));
									}
#line 1774 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 358 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[0].attributes));
}
#line 1781 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 362 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				#ifdef debug
					cout << "M -> S M\n";
				#endif
				if ((yyvsp[-1].attributes)->my_type != Useless)
				{
					(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
					(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0];
				}
				else
				{
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
				}
				if ((yyval.attributes)->my_type!=(yyvsp[0].attributes)->my_type) yyerror("Different return types for same function\n");
				free((yyvsp[-1].attributes));free((yyvsp[0].attributes));
				}
#line 1804 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 380 "Ccfg.ypp" /* yacc.c:1661  */
    {
				#ifdef debug
						cout << "M -> S\n";
				#endif
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];	
				free((yyvsp[0].attributes));
				}
#line 1818 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 391 "Ccfg.ypp" /* yacc.c:1661  */
    {
				#ifdef debug
						cout << "S -> S1\n";
				#endif
				(yyval.attributes) = (attr*)malloc(sizeof(attr));
				(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
				(yyval.attributes)->dimension[0] = (yyvsp[-1].attributes)->dimension[0];
				free((yyvsp[-1].attributes));
				}
#line 1832 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 400 "Ccfg.ypp" /* yacc.c:1661  */
    {
					#ifdef debug
							cout << "S -> block_stmt\n";
					#endif
					(yyval.attributes) = (attr*)malloc(sizeof(attr));
					(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					free((yyvsp[0].attributes));
					}
#line 1846 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 412 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type; free((yyvsp[-2].attributes));
free((yyvsp[0].attributes));}
#line 1853 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 414 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));(yyval.attributes)->my_type = Useless; free((yyvsp[0].attributes));}
#line 1859 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 415 "Ccfg.ypp" /* yacc.c:1661  */
    {
			#ifdef debug
						 cout << "S1 -> type init\n";
			#endif
			(yyval.attributes) = (attr*)malloc(sizeof(attr));
			struct llm temp;

			temp.my_type= (yyvsp[-1].attributes)->my_type; 
			for(int i=0;i<(yyvsp[0].attributes)->index;i++) {
				/* checking if variable is already declared */

						if(current_symbol_table->table.find(string( (yyvsp[0].attributes)->var_name[i])) != current_symbol_table->table.end())
							yyerror("error: redeclaration \n");
					
				/*   ------------------------------------ */
						else {
							temp.dimension = (yyvsp[0].attributes)->dimension[i];
							current_symbol_table->table[string((yyvsp[0].attributes)->var_name[i])]=(temp);
						}

			}
#ifdef debug
			printf("Variables declared \n"); 
				for(int i=0;i<(yyvsp[0].attributes)->index;i++) {
					printf("%s %d\n",(yyvsp[0].attributes)->var_name[i],(yyvsp[0].attributes)->dimension[i]);
				}
			#endif
				(yyval.attributes)->my_type = Useless;
				free((yyvsp[-1].attributes));
				free((yyvsp[0].attributes));
	}
#line 1895 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 446 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));

								(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
								(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
								free((yyvsp[0].attributes));
								}
#line 1907 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 453 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type = Void;
								(yyval.attributes)->dimension[0] = 0;
						
								}
#line 1918 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 462 "Ccfg.ypp" /* yacc.c:1661  */
    {
						 		#ifdef debug
						 				cout << "init -> assign_stmt ',' init\n";
						 		#endif
						 		(yyval.attributes) = (attr*)malloc(sizeof(attr));
								strcpy((yyval.attributes)->var_name[0],(yyvsp[-2].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[-2].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[0].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[0].attributes)->dimension[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[0].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[-2].attributes));
								free((yyvsp[0].attributes));
						}
#line 1939 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 478 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								strcpy((yyval.attributes)->var_name[0],(yyvsp[-2].attributes)->var_name[0]);
								(yyval.attributes)->dimension[0] = (yyvsp[-2].attributes)->dimension[0];
								(yyval.attributes)->index = 1;
								for(int i=0; i<(yyvsp[0].attributes)->index; i++) {
									(yyval.attributes)->dimension[(yyval.attributes)->index] = (yyvsp[0].attributes)->dimension[i];
									strcpy((yyval.attributes)->var_name[(yyval.attributes)->index],(yyvsp[0].attributes)->var_name[i]);
									(yyval.attributes)->index++;
								}
								free((yyvsp[-2].attributes));
								free((yyvsp[0].attributes));
							}
#line 1957 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 491 "Ccfg.ypp" /* yacc.c:1661  */
    {
						#ifdef debug
						 				cout << "init -> assign_stmt\n";
						 		#endif
						(yyval.attributes) = (attr*)malloc(sizeof(attr));
						strcpy((yyval.attributes)->var_name[0],(yyvsp[0].attributes)->var_name[0]);
						(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
						(yyval.attributes)->index = 1;
						free((yyvsp[0].attributes));
					}
#line 1972 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 501 "Ccfg.ypp" /* yacc.c:1661  */
    {
					(yyval.attributes) = (attr*)malloc(sizeof(attr));
					strcpy((yyval.attributes)->var_name[0],(yyvsp[0].attributes)->var_name[0]);
					(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
					(yyval.attributes)->index = 1;
					free((yyvsp[0].attributes));
				  }
#line 1984 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 510 "Ccfg.ypp" /* yacc.c:1661  */
    {
											#ifdef debug
												cout << "block_stmt : T_IF '('stmt')' '{'M'}'";
											#endif
											(yyval.attributes) = (attr*)malloc(sizeof(attr));
											(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];
 											free((yyvsp[-4].attributes)); free((yyvsp[-1].attributes));
}
#line 1998 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 519 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
											
	 											free((yyvsp[-8].attributes)); free((yyvsp[-5].attributes)); free((yyvsp[-1].attributes));}
#line 2006 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 523 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
											
											(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
											(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];										
											free((yyvsp[-8].attributes));
											free((yyvsp[-6].attributes));
											free((yyvsp[-4].attributes));
											free((yyvsp[-1].attributes));
	}
#line 2020 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 533 "Ccfg.ypp" /* yacc.c:1661  */
    {
									(yyval.attributes) = (attr*)malloc(sizeof(attr));	
									(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type;
									(yyval.attributes)->dimension[0]= (yyvsp[-1].attributes)->dimension[0];
									free((yyvsp[-4].attributes));
									free((yyvsp[-1].attributes));
	}
#line 2032 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 541 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));free((yyvsp[0].attributes));}
#line 2038 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 544 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "+";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr+expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: PLUS does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2084 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 585 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[0].attributes));
}
#line 2091 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 587 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2103 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 594 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2115 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 601 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2127 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 608 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2139 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 615 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr;
						(yyval.attributes)->truelist = makelist(global_code.size());
						(yyval.attributes)->falselist = makelist(global_code.size()+1);
						struct code_element temp;
						temp.data1 = Jump;
						temp.data2 = (yyvsp[-1].lexeme);
						temp.arg1 = (yyvsp[-2].attributes)->place;
						temp.arg2 = (yyvsp[0].attributes)->place;

						global_code.push_back(temp);

						struct code_element temp2;
						temp2.data1 = Jump;

						global_code.push_back(temp2);

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2165 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 636 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = (attr*)malloc(sizeof(attr));

						(yyval.attributes)->my_type=Bool;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2177 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 643 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); free((yyvsp[0].attributes));
}
#line 2184 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 645 "Ccfg.ypp" /* yacc.c:1661  */
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "-";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr-expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: MINUS does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2230 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 687 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "*";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr*expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: MULTIPLY does not support bool and char\n");
						else {
							if((yyvsp[-2].attributes)->my_type==Double || (yyvsp[0].attributes)->my_type==Double )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2276 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 728 "Ccfg.ypp" /* yacc.c:1661  */
    { 
    					(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr/expr\n");

						#endif

						if((yyvsp[-2].attributes)->my_type==Char || (yyvsp[-2].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else if((yyvsp[0].attributes)->my_type==Char || (yyvsp[0].attributes)->my_type==Bool)
							yyerror("error: DIVIDE does not support bool and char\n");
						else {
							if(((yyvsp[-2].attributes)->my_type==Double) || ((yyvsp[0].attributes)->my_type==Double) )
								(yyval.attributes)->my_type=Double;
							else if((yyvsp[-2].attributes)->my_type==Float || (yyvsp[0].attributes)->my_type==Float)
								(yyval.attributes)->my_type=Float;
							else if((yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Long_long)
								(yyval.attributes)->my_type=Long_long;
							else 
								(yyval.attributes)->my_type=(yyvsp[-2].attributes)->my_type;
						}
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2322 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 769 "Ccfg.ypp" /* yacc.c:1661  */
    { 
						(yyval.attributes) = new attr();
						
						(yyval.attributes)->place.temp = newTemp();
						(yyval.attributes)->place.args_type = 2;
						struct code_element temp_code;
						temp_code.arg1 = (yyvsp[-2].attributes)->place;
						temp_code.arg2 = (yyvsp[0].attributes)->place;
						temp_code.result = (yyval.attributes)->place;
						temp_code.data2 = "%";
						temp_code.data1 = Assignment;

						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[-2].attributes)->code.begin(),(yyvsp[-2].attributes)->code.end());
						(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
						(yyval.attributes)->code.push_back(temp_code);
						global_code.push_back(temp_code);



						#ifdef debug
							printf("in expr-> expr\%expr\n");
						#endif

						if(!((yyvsp[-2].attributes)->my_type==Int || (yyvsp[-2].attributes)->my_type==Long_long || (yyvsp[-2].attributes)->my_type==Bool))        /* Added Bool*/
							yyerror("error: MOD supports only bool,int,long long");
						else if(!((yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long || (yyvsp[0].attributes)->my_type==Bool))
							yyerror("error: MOD supports only bool,int,long long");
						else
							(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type;
						free((yyvsp[-2].attributes));
						free((yyvsp[0].attributes));
					}
#line 2359 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 801 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr();
						//backpatch($1->falselist,$3);
						//$$->truelist = merge($1->truelist.begin(),$1->truelist.end(),$4->truelist.begin(),$4->truelist.end());
						for(int x=0; x<(yyvsp[0].attributes)->falselist.size();x++) {
								(yyval.attributes)->falselist.push_back((yyvsp[0].attributes)->falselist[x]);
						}

						if(!((yyvsp[-3].attributes)->my_type==Bool || (yyvsp[-3].attributes)->my_type==Int || (yyvsp[-3].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else if(!((yyvsp[0].attributes)->my_type==Bool || (yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long))
							yyerror("error: AND supports only bool,int,long long");
						else 
							(yyval.attributes)->my_type=Bool;
						free((yyvsp[-3].attributes));
						free((yyvsp[0].attributes));
					}
#line 2381 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 818 "Ccfg.ypp" /* yacc.c:1661  */
    {	
						(yyval.attributes) = (attr*)malloc(sizeof(attr));
 
						if(!((yyvsp[-3].attributes)->my_type==Bool || (yyvsp[-3].attributes)->my_type==Int || (yyvsp[-3].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. left operand is \n");
						else if(!((yyvsp[0].attributes)->my_type==Bool || (yyvsp[0].attributes)->my_type==Int || (yyvsp[0].attributes)->my_type==Long_long))
							yyerror("error: OR supports only bool,int,long long. right operand is \n");
						else 
							(yyval.attributes)->my_type=Bool;
						free((yyvsp[-3].attributes));
						free((yyvsp[0].attributes));
					}
#line 2398 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 830 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type = Bool; free((yyvsp[0].attributes));}
#line 2405 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 832 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type = (yyvsp[-1].attributes)->my_type; free((yyvsp[-1].attributes));}
#line 2412 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 834 "Ccfg.ypp" /* yacc.c:1661  */
    {
			(yyval.attributes) = new attr();
			(yyval.attributes)->place.var = (yyvsp[0].attributes)->place.var; 
			(yyval.attributes)->place.args_type = 1;
			struct symbol_table *temp = current_symbol_table;
			int flag = 1;
			while(flag) {
			           	if( temp->table.find(string( (yyvsp[0].attributes)->var_name[0])) != temp->table.end()){
						(yyval.attributes)->my_type = temp->table[string((yyvsp[0].attributes)->var_name[0])].my_type;
#ifdef debug
printf("expr-->identifier:\nidentifier is of type %d\n",(yyval.attributes)->my_type);
#endif
							flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[0].attributes)->var_name[0])].dimension - (yyvsp[0].attributes)->dimension[0];
				}
				if(temp->parent==NULL && flag==1) {
					yyerror("error: variable not declared\n");
					flag = 0;
				}
				temp = temp->parent;
			}
			free((yyvsp[0].attributes));
		  }
#line 2440 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 857 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; free((yyvsp[0].attributes));}
#line 2447 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 859 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));
(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; free((yyvsp[0].attributes));}
#line 2454 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 861 "Ccfg.ypp" /* yacc.c:1661  */
    {
				(yyval.attributes) = new attr();
				(yyval.attributes)->place = (yyvsp[0].attributes)->place;
				(yyval.attributes)->place.args_type = (yyval.attributes)->place.args_type;
				(yyval.attributes)->my_type = (yyvsp[0].attributes)->my_type;
			}
#line 2465 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 867 "Ccfg.ypp" /* yacc.c:1661  */
    {
								(yyval.attributes) = (attr*)malloc(sizeof(attr));
								(yyval.attributes)->my_type=(yyvsp[0].attributes)->my_type; 
								(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0]+1;
								free((yyvsp[0].attributes));
								}
#line 2476 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 884 "Ccfg.ypp" /* yacc.c:1661  */
    {
							#ifdef debug
								printf("In assign_stmt -> identifier '=' expr\n");

							#endif 
							(yyval.attributes) = new attr();
							(yyval.attributes)->my_type = Void;
							struct code_element temp_code;
							temp_code.arg1 = (yyvsp[0].attributes)->place;
							temp_code.result = (yyvsp[-2].attributes)->place;
							temp_code.data2 = "=";
							temp_code.data1 = Assignment;
							(yyval.attributes)->code.insert ((yyval.attributes)->code.end(),(yyvsp[0].attributes)->code.begin(),(yyvsp[0].attributes)->code.end());
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
                                        if( temp->table.find(string( (yyvsp[-2].attributes)->var_name[0])) != temp->table.end()){
                                                (yyval.attributes)->my_type = temp->table[string((yyvsp[-2].attributes)->var_name[0])].my_type;
                                                flag = 0;
						(yyval.attributes)->dimension[0] = temp->table[string((yyvsp[-2].attributes)->var_name[0])].dimension - (yyvsp[-2].attributes)->dimension[0];

                                	}
                                	if(temp->parent==NULL && flag==1) {
                                        	yyerror("error: variable not declared\n");
                                        	flag = 0;
                                	}
                                	temp = temp->parent;
                        	}
				enum type_enum t = (yyval.attributes)->my_type;
				enum type_enum tt = (yyvsp[0].attributes)->my_type; 
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
				else if (t != tt || (yyval.attributes)->dimension != (yyvsp[0].attributes)->dimension )
					yyerror("Warning: Type mismatch\n",KYEL);

				free((yyvsp[-2].attributes));
				free((yyvsp[0].attributes));

				}
#line 2547 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 951 "Ccfg.ypp" /* yacc.c:1661  */
    {
						#ifdef debug 
							printf("number-> T_DEC_INT\n");
						#endif
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.int_val = (yyvsp[0].integer);
						(yyval.attributes)->place.args_type = 3;
						(yyval.attributes)->my_type =Int;
					}
#line 2561 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 960 "Ccfg.ypp" /* yacc.c:1661  */
    {
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.float_val = (yyvsp[0].real);
						(yyval.attributes)->place.args_type = 4;
						(yyval.attributes)->my_type = Int;
					}
#line 2572 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 968 "Ccfg.ypp" /* yacc.c:1661  */
    {  	
						(yyval.attributes) = new attr();
						(yyval.attributes)->place.var = (yyvsp[0].lexeme);
						(yyval.attributes)->place.args_type = 1;
						strcpy((yyval.attributes)->var_name[0],(yyvsp[0].lexeme));
							(yyval.attributes)->dimension[0] = 0;
					 }
#line 2584 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 975 "Ccfg.ypp" /* yacc.c:1661  */
    {
							(yyval.attributes) = (attr*)malloc(sizeof(attr));
							strcpy((yyval.attributes)->var_name[0],(yyvsp[-1].lexeme));
							(yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0];
							free((yyvsp[0].attributes));
		}
#line 2595 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 982 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0] +1; printf("%s",(yyvsp[-2].lexeme)); free((yyvsp[0].attributes));}
#line 2601 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 983 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = 1;}
#line 2607 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 984 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr));  (yyval.attributes)->dimension[0] = 1;}
#line 2613 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 985 "Ccfg.ypp" /* yacc.c:1661  */
    {(yyval.attributes) = (attr*)malloc(sizeof(attr)); (yyval.attributes)->dimension[0] = (yyvsp[0].attributes)->dimension[0] + 1; free((yyvsp[0].attributes));}
#line 2619 "Ccfg.tab.cpp" /* yacc.c:1661  */
    break;


#line 2623 "Ccfg.tab.cpp" /* yacc.c:1661  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 987 "Ccfg.ypp" /* yacc.c:1906  */



int main()
{
		no_line = 1;
		maindef = 0;
		current_symbol_table = new symbol_table;
		current_symbol_table->parent = NULL;
        yyparse();
        if (!maindef) yyerror("main function not defined");
		return 0;
}
