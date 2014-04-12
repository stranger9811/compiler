/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 63 "Ccfg.ypp" /* yacc.c:1915  */

	#include "resources.h"

#line 48 "Ccfg.tab.hpp" /* yacc.c:1915  */

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
#line 67 "Ccfg.ypp" /* yacc.c:1915  */

long long integer;
long double real;
char lexeme[10000];
struct attr *attributes;
//Yet to include exponential numbers and hexadecimals.

#line 124 "Ccfg.tab.hpp" /* yacc.c:1915  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CCFG_TAB_HPP_INCLUDED  */
