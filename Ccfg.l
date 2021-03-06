%{
	#include "Ccfg.tab.hpp"
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include <utility>
	#include <algorithm>

	extern int no_line;

%}

identifier_start  [a-zA-Z_]
text_all [^\" ]
text [a-zA-Z0-9_]
text1 [a-zA-Z0-9_\.]
digits [0-9]
hex [A-F0-9]
%s STRING
%s HEX
%s COMMENT_TYPE_2
%s IN_COMMENT
%s HEADER
%s HEADER1
%s HEADER2
%s HEADER3
%s HEADER4
%%

<INITIAL>"struct"                      {return (T_STRUCT);}
<INITIAL>"break"                      {return (T_BREAK);}
<INITIAL>"continue"                      {return (T_CONTINUE);}
<INITIAL>"typedef"                      {return (T_TYPEDEF);}
<INITIAL>"char"                      {return (T_CHAR);}
<INITIAL>"double"                      {return (T_DOUBLE);}
<INITIAL>"int"                      {return (T_INT);}
<INITIAL>"float"                      {return (T_FLOAT);}
<INITIAL>"long long"                      {return (T_LONG_LONG);}
<INITIAL>"bool"				{return (T_BOOL);}
<INITIAL>"for"                      {return (T_FOR);}
<INITIAL>"if"                      {return (T_IF);}
<INITIAL>"else"                      {return (T_ELSE);}
<INITIAL>"while"                      {return (T_WHILE);}
<INITIAL>"goto"                      {return (T_GOTO);}
<INITIAL>"return"                      {return (T_RETURN);}
<INITIAL>"print_int"                      {return (T_PRINT_INT);}
<INITIAL>"void"                      {return (T_VOID);}
<INITIAL>"scanf"                      {return (T_SCANF);}
<INITIAL>"sizeof"                      {return (T_SIZEOF);}
<INITIAL>"unsigned"                      {return (T_UNSIGNED);}
<INITIAL>"signed"                      {return (T_SIGNED);}
<INITIAL>"const"                      {return (T_CONST);}
<INITIAL>"short"                      {return (T_SHORT);}
<INITIAL>"extern"                      {return (T_EXTERN);}
<INITIAL>"long"                      {return (T_LONG);}
<INITIAL>"("			{return yytext[0];}
<INITIAL>")"			{return yytext[0];}
<INITIAL>"+"			{return yytext[0];}
<INITIAL>"."			{return yytext[0];}
<INITIAL>"-"                      {return yytext[0];}
<INITIAL>"["                      {return yytext[0];}
<INITIAL>"]"                      {return yytext[0];}
<INITIAL>"*"                      {return yytext[0];}
<INITIAL>"/"                      {return yytext[0];}
<INITIAL>"/*"                      {BEGIN(IN_COMMENT);}
<INITIAL>"//"                      {BEGIN(COMMENT_TYPE_2);}
<IN_COMMENT>"*/"					{BEGIN(INITIAL);}
<IN_COMMENT>.					{}
<IN_COMMENT>"\n" 					{}
<COMMENT_TYPE_2>"\n" 		{BEGIN(INITIAL);}
<COMMENT_TYPE_2>.			{}
<INITIAL>"main"                      {return (T_MAIN);}
<INITIAL>"#include"                      {BEGIN(HEADER);}
<HEADER>"<"				{BEGIN(HEADER1);}	
<HEADER>"\""				{BEGIN(HEADER2);} 
<HEADER1>{text1}+			{BEGIN(HEADER3); strcpy(yylval.lexeme,yytext);return (T_HEADER);}
<HEADER2>{text1}+			{BEGIN(HEADER4); strcpy(yylval.lexeme,yytext);return (T_HEADER);;}
<HEADER3>">"				{BEGIN(INITIAL);}
<HEADER4>"\""				{BEGIN(INITIAL);}

<INITIAL>"<"		{return yytext[0];}
<INITIAL>">"		{return yytext[0];}
<INITIAL>">="		{return (T_GREATER_THAN_EQUAL);}
<INITIAL>"<="		{return (T_LESS_THAN_EQUAL);}
<INITIAL>"=="		{return (T_EQUAL_TEST);}
<INITIAL>"!=" 		{return (T_NOT_EQUAL);}
<INITIAL>"%"		{return yytext[0];}
<INITIAL>"&&"		{return (T_AND);}
<INITIAL>"||"		{return (T_OR);}
<INITIAL>"+="		{return (T_PLUS_SELF);}
<INITIAL>"-="		{return (T_MINUS_SELF);}
<INITIAL>"*="		{return (T_MULT_SELF);}
<INITIAL>"/="		{return (T_DIVIDE_SELF);}
<INITIAL>"++"		{return (T_ADD_ONE);}
<INITIAL>"--"		{return (T_SUB_ONE);}
<INITIAL>"!"		{return yytext[0];}
<INITIAL>"|"		{return yytext[0];}
<INITIAL>"&"		{return yytext[0];}
<INITIAL>"->"		{return (T_THIS_POINTER);}
<INITIAL>"="		{return yytext[0];}

<INITIAL>"{"		{return yytext[0];}
<INITIAL>"}"		{return yytext[0];}
<INITIAL>";"		{return yytext[0];}
<INITIAL>","		{return yytext[0];}

<INITIAL>0x({hex}+|({hex}+\.{hex}+))		{printf("(T_HEX_INT, \"%s\")",yytext);}
<INITIAL>{digits}+e({digits}+|"-"{digits}+)  	{printf("(T_EXP, \"%s\")",yytext);}
<INITIAL>{digits}+\.{digits}+e({digits}+|"-"{digits}+) {printf("(T_EXP, \"%s\")",yytext);}
<INITIAL>{digits}+\.{digits}+	{yylval.real= atof(yytext);return (T_DEC_FLOAT);}
<INITIAL>{digits}+		{yylval.integer=atol(yytext);return (T_DEC_INT);}

<INITIAL>{identifier_start}({text}*) 	{strcpy(yylval.lexeme,yytext);return (ID);}
<INITIAL>"\""		{return (T_APOS);BEGIN(STRING);}
<STRING>"%d"      {return (T_IO_INT);}
<STRING>"%lld"      {return (T_IO_LONG_LONG);}
<STRING>"%s"      {return (T_IO_STRING);}
<STRING>"%f"      {return (T_IO_FLOAT);}
<STRING>"\""      {return (T_APOS);BEGIN(INITIAL);}
<STRING>{text_all}+      {strcpy(yylval.lexeme,yytext);return (T_STRING);}

"\n"          {no_line++;}
" "|"\t"   ;
.				{printf("\nERROR\nAborting %s ...\n",yytext); exit(0);}
%%

