%{
//#include "tryb.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//extern yyerror();
extern FILE *yyin;
//extern int yylval;
//extern int yyaccept;
extern int yytext;
extern int yylineno;
extern int yylex();
extern int yyparse();
extern int flag;
extern int tabs;
//extern void /*identation();*/
void yyerror(char *);
int sfalmata=0;

%}

%code requires {

#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;
}

%union
{
   struct Variable nval;	
}


%token IF ELSE ELIF LIST FLOAT
%token COMMA FROM DOT INT FOR IN LEN RANGE
%token NEWLINE NONE COLON OPENAG CLOSAG OPENBR CLOSBR
%token EQUAL AS LAMBDA PLUS MINUS DIV STAR MOD DEF
%token STRING TRUE FALSE QUOTE PRINT STR PASS BREAK RETURN
%token OPENPAR CLOSPAR IMPORT CLASS DOUBLESTAR
%token PLUSEQ MINUSEQ STAREQ DIVEQ AND OR INIT SETDEFAULT ITEMS
%token GREATER SMALLER EQEQ GREQ SMEQ NOTEQ WHITESPACE

%left  PLUS MINUS
%left  STAR DIV MOD

%token<nval> DEC
%token<nval> DIGIT
%token<nval> BINARY
%token<nval> FLOATINT
%token<nval> HEX
%token<nval> OCT
%token<nval> ID

%type<nval> assign
%type<nval> add_numbers
%type<nval> numbers
%type<nval> var_operations
%type<nval> expression
%type<nval> print
%type<nval> print_star
%type<nval> print_options
%type<nval> dictionaries
%type<nval> lists
%type<nval> call_func
%type<nval> types
%type<nval> more_types
%type<nval> typenumber
%type<nval> dictelements
%type<nval> dict_items
%type<nval> dict_setdefault
%type<nval> lambda
%type<nval> lambda_parameters
%type<nval> moredictelem

%%

start:
	{printf("\nSyntax check completed successfuly!!!\n");}
	|statements start					
	;

statements:
	assign 				{printf("pr 2\n");}
	|if					{printf("pr if\n"); /*identation();*/}
	|for				{printf("pr for\n");}
	|print				{printf("pr printf\n");}
	|import				{printf("pr import\n");}
	|class				{printf("pr  THE class\n"); /*identation();*/}
	|class_object		{printf("pr  OBJECT\n");}
	|use_object
	|lambda
	|dict_setdefault
	|dict_items
	|break
	|return
	|func_def			{printf("pr  DEF\n");}
	|call_func			{printf("pr  CALL\n");	}
	|NEWLINE 			{/*identation();*/ tabs=0; printf("pr 4\n");}
	;
	
expression:
	types
	|dictionaries
	|expression operators types
	|OPENPAR expression CLOSPAR		{$$=$2;}
	;
	
types:
	add_letters		{printf("type 1\n");}	
	|add_numbers	{printf("type 2\n");$$=$1;}	
	|var_operations	{printf("type 3\n");$$=$1;}
	//|add_obj
	|lists
	;
	
add_letters:
	letters
	|letters operators add_letters
	|letters operators var_operations
	|letters operators add_obj
	;

add_numbers:
	numbers								{$$=$1;}
	|numbers PLUS add_numbers			{$$ = add_calc($1,$3,&variables,1);  }
	|numbers MINUS add_numbers			{$$ = minus_calc($1,$3,&variables,1);}
	|numbers STAR add_numbers			{$$ = mul_calc($1,$3,&variables,1);  }
	|numbers DIV add_numbers			{$$ = div_calc($1,$3,&variables,1);  }
	|numbers operators var_operations
	|numbers operators add_obj
	;
	
var_operations:
	ID									{$$=$1;}	
	|ID PLUS types						{$$ = add_calc($1,$3,&variables,1);  }
	|ID MINUS types						{$$ = minus_calc($1,$3,&variables,1);}
	|ID STAR types						{$$ = mul_calc($1,$3,&variables,1);  }
	|ID DIV types						{$$ = div_calc($1,$3,&variables,1);  }
	;
	
add_obj:
	use_object
	|use_object operators types
	;
	
more_types:
	types								{$$=$1;}
	|more_types COMMA types				{$$=$3;}
	;
	
numbers:
	DIGIT								{$$=$1;}
	|DEC								{$$=$1;}
	|FLOATINT							{$$=$1;}
	|OCT								{$$=$1;}
	|BINARY	
	|HEX								{$$=$1;}
	|typenumber							{$$=$1;}
	;
	
letters:
	STRING								//	"something"
	|STR OPENPAR types CLOSPAR			// 	str(int+++)
	|QUOTE QUOTE						// " "
	;
	
operators:
	PLUS 							
	|MINUS 
	|DIV 
	|STAR 
	|DOUBLESTAR
	|MOD
	;
	
//-------------------------------BREAK-RETURN-----------------------------	
	
break:
	BREAK
	;

return:
	RETURN
	|RETURN more_types
	;

//---------------------------LISTS-DICTIONARIES---------------------------


lists:
	OPENAG more_types CLOSAG				{$$=$2;}
	;

dictionaries:
	OPENBR CLOSBR							{$$=$$;}
	|OPENBR dictelements CLOSBR				{$$=$2;}
	;

dictelements:
	moredictelem							{$$=$1;}
	|dictelements COMMA moredictelem		{$$=$3;}
	;
	
moredictelem:
	types COLON types						{insertArray(&dictionary,$1); insertArray(&dictionary,$3);};
	;

dict_items:
	ID DOT ITEMS							
	;

dict_setdefault:
	ID DOT SETDEFAULT OPENPAR types COMMA types CLOSPAR		{setDefault($5,$7,&dictionary,&variables);}
	;


//---------------------------------LAMBDA-----------------------------------

lambda:
	LAMBDA COLON expression						{$$=$3;}				
	|LAMBDA lambda_parameters COLON expression	{$$=$2;}
	;
	
lambda_parameters:
	ID 											{$$ = $1; $$.type = LAM ;insertArray(&variables, $$); }
	|lambda_parameters COMMA ID
	;
	
//idstar:
//	ID
//	|idstar COMMA ID
//	;

//---------------------------------PRINT-----------------------------------


print:
	PRINT OPENPAR print_star CLOSPAR				{printf(">>  "); print($3,&variables); }
	;
	
print_star:
	print_options									{$$=$1;}
	|print_star COMMA print_options
	;	

print_options:
	types					 						{printf("print 1\n"); $$=$1;}	
	|assign											{printf("print 2\n"); $$=$1;}	
	|call_func
	|dict_items										{printf(">>  "); items(&dictionary,&variables);}
	|dict_setdefault								{$$=$1;}
	|STRING MOD add_letters							{printf("print 3\n");}	
	|STRING MOD add_numbers							{printf("print 4\n");}	
	|STRING MOD var_operations						{printf("print 5\n");}	
	|STRING MOD OPENPAR more_types CLOSPAR			{printf("print 6\n");}	
//	|DTSSTRING MOD OPENPAR more_types CLOSPAR		{printf("print 7\n");}	
	|LIST OPENPAR range CLOSPAR						{printf("print 8\n");}	
	|range											{printf("print 9\n");}	
	;
// print("%d" %15)
	
//---------------------------------IMPORT-----------------------------------
	
import:
	IMPORT module							{printf("\nIMPORT STATEMENT 1 ok\n");}	/*import module_name*/
	|FROM module IMPORT module		 		{printf("\nIMPORT STATEMENT 2 ok\n");}	/*from {module} import {class/function}*/
	|FROM module IMPORT STAR 				{printf("\nIMPORT STATEMENT 3 ok\n");}	/*from {module} import * */
	|IMPORT module AS ID 					{printf("\nIMPORT STATEMENT 4 ok\n");}	/*import {module} as (M)*/
	;

module:
	id					{printf("MOOODDUUULEE id\n");}
	|module COMMA id	{printf("MOOODDUUULEE id , id\n");}
	;
	
//id mporei na einai .|..|...|||||.ID|..ID|||||ID
//SHIFT REDUSE de kserw pws na to meiwsw
id:
	ID			{printf("idddddd ID\n");}
	|DOT		{printf("idddddd DOT\n");}	
	|DOT id		{printf("idddddd ID DOT\n");}
	|id DOT ID	{printf("idddddd ID DOT ID\n");}
	;
	
//from .sister import foo
//from . import brother
//from ..aunt import bar
//from .. import uncle


//---------------------------------ASSIGN-----------------------------------


assign:
	ID assign_symb ass_list		{printf("\nThe VAR initialization\t\n");}
	|ID assign_symb expression	{insertArray(&variables,value_assign($1,$3,&variables)); printf("\nThe VAR initialization\t\n");}
	|ID EQUAL dict_items
	|ID EQUAL lambda			{insertArray(&variables,value_assign($1,$3,&variables));printf("\nThe VAR initialization\t\n");}
	|ID EQUAL use_object
	|ID EQUAL QUOTE QUOTE		{printf("\nThe VAR \t\"\"\t initialization\t\n");}
	;
	
assign_symb:
	EQUAL					
	|PLUSEQ
	|MINUSEQ
	|STAREQ
	|DIVEQ
	;
	
ass_list:	
	|TRUE					{printf("list 3\n");}
	|FALSE					{printf("list 2\n");}
	|NONE					{printf("list 6\n");}
//	|typenumber				{printf("list 1\n");}
	;

typenumber:
	INT OPENPAR numbers CLOSPAR		{$$=$3;}
	|FLOAT OPENPAR numbers CLOSPAR	{$$=$3;}
	;
	
//---------------------------------IF-----------------------------------

if:
	IF condition COLON more_statm 
	|IF condition COLON more_statm NEWLINE ELSE COLON more_statm 
	|IF condition COLON more_statm NEWLINE indent ELSE COLON more_statm 
	|IF condition COLON more_statm NEWLINE ELIF condition COLON more_statm NEWLINE ELSE COLON more_statm 
	|IF condition COLON more_statm NEWLINE indent ELIF condition COLON more_statm NEWLINE indent ELSE COLON more_statm 
	;
	
condition:
	ass_list
	|expression cond_operators expression
	|expression log_operators expression
	|OPENPAR condition CLOSPAR 
	;
	
cond_operators:
	GREATER
	|SMALLER
	|NOTEQ
	|EQEQ
	|GREQ
	|SMEQ
	;
	
log_operators:
	AND
	|OR
	;

// : \n INDENT ;aslkdfjasdjfasdljf DEDENT

indent:
	WHITESPACE						{tabs++; printf("\n@@@@@@TABS %d@@@@@@@@@@\n",tabs);}
	|indent WHITESPACE				{tabs++; printf("\n@@@@@@TABS %d@@@@@@@@@@\n",tabs);}
	;
	
more_statm:
	NEWLINE indent statements						{/*identation();tabs=0;*/}
	|more_statm NEWLINE indent statements   		{/*identation();tabs=0;*/}
	;
	

//---------------------------------FOR-----------------------------------

for:
	FOR ID IN sequence COLON more_statm
	|FOR ID IN sequence COLON more_statm NEWLINE ELSE COLON more_statm
	;
	
sequence:
	ID
	|lists
	|dictionaries
	|range
	;
	
range:
	RANGE OPENPAR numbers CLOSPAR
	|RANGE OPENPAR numbers COMMA numbers CLOSPAR
	|RANGE OPENPAR numbers COMMA numbers COMMA numbers CLOSPAR
	|RANGE OPENPAR LEN OPENPAR ID CLOSPAR CLOSPAR
	;

//----------------------CLASS-OBJECT-CONSTRUCTOR-------------------------

class:
	CLASS classname COLON docstring
	;
	
classname:
	ID
	|ID OPENPAR CLOSPAR
	|ID OPENPAR class_attr CLOSPAR
	;

class_options:
	//constructor
	statements
	;
	
docstring: //classname(__doc__)
	NEWLINE indent STRING NEWLINE more_class_options
	|more_class_options
	;
	
more_class_options:
	NEWLINE indent class_options 						{/*identation();*/}
	|more_class_options NEWLINE indent class_options	{/*identation();*/}
	;
	
class_attr: //kati | kati.kati | kati,kati|kati.kati,kati
	ID DOT ID 
	//|class_attr COMMA ID
	//|class_attr COMMA ID DOT ID
	//|module
	|more_types class_attr
	|more_types
	;

const_options:
	NEWLINE indent ID DOT ID EQUAL types
	|const_options NEWLINE indent ID DOT ID EQUAL types 
	|NEWLINE indent statements
	|const_options NEWLINE indent statements 
	;

class_object:
	ID EQUAL ID OPENPAR CLOSPAR
	|ID EQUAL ID OPENPAR object_inside CLOSPAR
	;
	
object_inside:
	ID
	|letters
	|numbers
	|object_inside COMMA object_inside
	;
	
use_object:
	ID DOT ID
	|ID DOT call_func
	;
	
//----------------------------FUNCTION DEF------------------------------

func_def:
	DEF ID OPENPAR CLOSPAR COLON func_options
	|DEF ID OPENPAR func_attr CLOSPAR COLON func_options
	|DEF INIT OPENPAR class_attr CLOSPAR COLON const_options		{printf("edw exei oristei o constructor\n");}
	;
	
func_attr:
	more_types		//string/ID/number [',' string/ID/number]*
	|STAR ID
	|DOUBLESTAR ID
	|default_attr
	;
	
default_attr:
	ID EQUAL types
	;
	
func_options:
	NEWLINE indent statements
	|NEWLINE indent PASS
	|func_options NEWLINE indent statements
	;

call_func:
	ID OPENPAR CLOSPAR
	|ID OPENPAR call_options CLOSPAR 
	;
	
call_options:
	ID
	|letters
	|numbers
	|call_options COMMA call_options
	|default_attr
	;

//------------------------------------------------------------------------


%%

void yyerror(char *s)
{
	sfalmata++;
	fprintf(stderr, "Line: %d --> %s \n ", yylineno,s);
	exit(1);
}

int main(int argc, char ** argv)
{

	initArray(&variables,  10);
	initArray(&dictionary, 10);
	  
	  
	++argv, --argc;
	if ( argc > 0 )
	{
		yyin = fopen( argv[0], "r" );
	}
	else
	{
		yyin = stdin;
	}
	
	yyparse();	
	if(sfalmata!=0)
	{
		printf("\nsfalmata=%d\n",sfalmata);
	}
	return 0;
}