%{
#include <stdlib.h>
#include <stdio.h>
void yyerror(const char *s)
{

   fprintf(stderr, "%s\n", s);
 
}
int yylex();
int yyparse();
int yywrap();
%}

%union {
long long integer;
long double real;
char lexeme[10000];
//Yet to include exponential numbers and hexadecimals.
};

%token T_STRUCT
%token T_BREAK
%token T_CONTINUE
%token T_TYPEDEF
%token T_CHAR
%token T_DOUBLE
%token T_INT
%token T_FLOAT
%token T_LONG_LONG
%token T_FOR
%token T_IF
%token T_ELSE
%token T_WHILE
%token T_GOTO
%token T_RETURN
%token T_PRINTF
%token T_VOID
%token T_SCANF
%token T_SIZEOF
%token T_UNSIGNED
%token T_SIGNED
%token T_CONST
%token T_SHORT
%token T_EXTERN
%token T_LONG
%token T_BOOL
%token T_APOS

%token <real> T_DEC_FLOAT
%token <integer> T_DEC_INT
%token <lexeme> T_STRING
%token <lexeme> T_HEADER
%token <lexeme> ID

%token <lexeme> T_MAIN
%token <lexeme> T_AND
%token <lexeme> T_GREATER_THAN_EQUAL
%token <lexeme> T_LESS_THAN_EQUAL
%token <lexeme> T_EQUAL_TEST
%token <lexeme> T_NOT_EQUAL
%token <lexeme> T_OR
%token <lexeme> T_PLUS_SELF
%token <lexeme> T_MINUS_SELF
%token <lexeme> T_MULT_SELF
%token <lexeme> T_DIVIDE_SELF
%token <lexeme> T_THIS_POINTER
%token <lexeme> T_ADD_ONE
%token <lexeme> T_SUB_ONE
%token <lexeme> T_IO_INT
%token <lexeme> T_IO_LONG_LONG
%token <lexeme> T_IO_STRING
%token <lexeme> T_IO_FLOAT

%right '{'
%right '('
%right '['
%left ','
%right  T_MULT_SELF T_DIVIDE_SELF
%right  T_PLUS_SELF T_MINUS_SELF
%right  '='
%left T_OR
%left T_AND
%left '|'
%left '^'
%left '&'
%left T_EQUAL_TEST T_NOT_EQUAL
%left '>' T_GREATER_THAN_EQUAL
%left '<' T_LESS_THAN_EQUAL
%left '+' '-'
%left '*' '/' '%'
/*%right '&'                   address of a variable*/
%right DEREF 	/* using unary * for dereferncing a pointer.*/
/*%right   (type)              typecasting*/
%right  '!'
%right  UPLUS UMINUS	/*unary + and -*/
%right  T_ADD_ONE T_SUB_ONE
%left T_THIS_POINTER
%left '.'
%left ']'
%left ')'
%right '}'

%start code

%%
code  : decl code	
	| decl
	;
decl  : type identifier';'
	| T_TYPEDEF type ID';'  
	| type func block  	/*This is for function definition only. No rule yet for function declation.*/
	| void func block	/*void type, since allowed only for functions must be separated. Don't allow return stmts for such blocks. Must define another type of block to do this.*/
	| T_STRUCT ID block';'  
	| T_HEADER
	;
/*	| #define macro const*/
type  : type '*' %prec DEREF
	| basic
	;
basic : T_LONG_LONG
	| T_INT	
	| T_CHAR 
	| T_FLOAT 
	| T_DOUBLE 
	| T_BOOL
	;
void  : void '*' %prec DEREF
	| T_VOID
	;
func  : ID'('args')' 
	| ID'('')' 
	| T_MAIN'('args')' 
	| T_MAIN'('')'
	;
args  : type identifier',' args  
	| type identifier
	;

block  : '{' M '}' 	/*block can either be many statements enclosed in braces or just one S.*/
	| S 		/*S can again be multiple statments separated by comma.*/
	;

M  : S M  		/*Expanding statements inside a block*/
	| S 
	;

S  : S1';'		/* comma terminated statement or a block statement like if, for, while */
	| block_stmt
	;
S1  : stmt','S1 	/*statements separated by comma or a declaration/initialization*/
	|stmt
	|type init
	;

init : assign_stmt',' init 	/*Denotes declaration/initialization. If initializing, use assign_stmt*/
	| assign_stmt
	| identifier
	;

block_stmt : T_IF '('stmt')' '{'M'}' 		/*without brace if statements not allowed!*/
	| T_IF '('stmt')' '{' T_ELSE '}'
	| T_FOR '('S1';'S1';'S1')' block  
	| T_WHILE '('S1')' block  
	;
stmt: expr			/*Useless non-terminal. Too lazy to update.*/
	;
expr  : expr '+' expr
	| func
	| expr T_EQUAL_TEST expr
	| expr '<' expr
	| expr '>' expr
	| expr T_LESS_THAN_EQUAL expr
	| expr T_GREATER_THAN_EQUAL expr
	| expr T_NOT_EQUAL expr
	| assign_stmt
    	| expr '-' expr
	| expr '*' expr
    	| expr '/' expr
	| expr '%' expr
	| expr T_AND expr
	| expr T_OR expr
	| '!' expr
	| '('expr')'
	| ID
	| '+' expr %prec UPLUS
	| '-' expr %prec UMINUS
	|number 
	;
assign_stmt : ID '=' expr /*Assignment statement.*/
	;

number : T_DEC_INT	
	| T_DEC_FLOAT
	;

identifier  : ID	/*Array can have infinite dimensions. Must do something about it in future.*/ 
		| ID array
	;
array  : '['ID']'array 
	| '['ID']'
	| '['T_DEC_INT']'
	| '['T_DEC_INT']'array
	;
%%

int main()
{
        yyparse();
	return 0;
}
