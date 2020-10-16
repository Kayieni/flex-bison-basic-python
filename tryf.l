%option yylineno
%{
#include "tryb.tab.h"
#include<stdio.h>
#include<stdlib.h>

void identation();
//int tabcount(char *);
int flag=0;
//int ifflag=0;
int tabs=0;
int check=0;
int nested=0;

int linecounter = 0;
int charcounter = 0;
%}

DIGIT 			[0-9]
DEC				[0-9]+
HEX				[0][x][0-9A-Fa-f]+
BINARY			[0][b][01]+
OCT				[0][o][0-7]+
FLOAT			[0-9]+\.[0-9]+
CHAR			[a-zA-Z]
ID				[a-zA-Z_][a-zA-Z0-9_]*
NEWLINE			\n
WHITESPACE		[ \t]
DTF				\%[ \+\-]?{DIGIT}*\.{DIGIT}*[f]
DTT				\%[ \+\-]?{DIGIT}*[\%defox]
DT				[DTF|DTT]
DTS				\%[ \+\-]?{DIGIT}*[s]

%option noyywrap
%%


^[ ]*\n	       		{linecounter++ ;} 	
^[\t]*\n       		{linecounter++ ;}
^{WHITESPACE}+\n	{linecounter++; }


"return"		{return RETURN;}
"break"			{return BREAK;}
"items()"		{return ITEMS;}
"setdefaylt"	{return SETDEFAULT;}
"pass"			{return PASS;}
"__init__"		{return INIT;}
"def"			{flag++; check++; return DEF;}
"list"			{return LIST;}
"len" 			{return LEN;}
"range"			{return RANGE;}
"in"			{return IN;}
"for"			{flag++; check++; return FOR;}
"elif"			{flag++; check++; return ELIF;}
"else"			{flag++; check++; return ELSE;}
"and"			{return AND;}
"or"			{return OR;}
"if"			{flag++; check++; printf("\n\n^^^^^^^^^^\t%d\t^^^^^^^^^^^^\n\n",flag);return IF;}
"lambda"		{return LAMBDA;}
"as"			{return AS;}
"from"			{return FROM;}
"import"		{return IMPORT;}
"class"			{flag++; check++; return CLASS;}
"True"			{return TRUE;}
"False"			{return FALSE;}
"None"			{return NONE;}
"print"			{return PRINT;}
"str"			{return STR;}
"int"			{return INT;}
"float"			{return FLOAT;}
{DIGIT}			{printf("\nThe DIGIT \t %d\n", atoi(yytext)); charcounter++; 
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				return DIGIT;}
{DEC}			{printf("\nThe DECIMAL \t %d\n", atoi(yytext));
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				return DEC;}
{HEX}			{printf("\nThe HEXADECIMAL \t %s\n", yytext); 
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				return HEX;}
{OCT}			{printf("\nThe OCTAL \t %s\n", yytext); 
				yylval.nval.ival = atoi(yytext);
				yylval.nval.type = INTEGER;
				yylval.nval.data_type = LITERAL;
				return OCT;}
{BINARY}		{printf("\nThe BINARY \t %s\n", yytext); return BINARY;}
{FLOAT}			{printf("\nThe FLOAT \t %s\n", yytext); 
				yylval.nval.fval = atof(yytext);
				yylval.nval.type = FFLOAT;
				yylval.nval.data_type = LITERAL;
				return FLOATINT;}
{ID}			{printf("\nThe IDENTIFIER \t %s\n", yytext); 
				strcpy(yylval.nval.name, yytext);
				yylval.nval.type = IDENT;
				yylval.nval.data_type = LITERAL;
				return ID;}		
{NEWLINE}		{printf("\nNEWLINE\n"); linecounter++; charcounter++; identation(); printf("\n!!!!!!!!!!!!!!!!!!!!!TABS = %d !!!!!!!!!!!!!!!FLAG=%d\n",tabs,flag); tabs=0; return NEWLINE;}
{WHITESPACE}{4}	{return WHITESPACE;}
","				{return COMMA;}
"."				{return DOT;}
":"				{return COLON;}
"+"				{return PLUS;}
"-"				{return MINUS;}
"*"				{return STAR;}
"/"				{return DIV;}
"%"				{return MOD;}
"("				{return OPENPAR;}
")"				{return CLOSPAR;}
"["				{return OPENAG;}
"]"				{return CLOSAG;}
"{"				{return OPENBR;}
"}"				{return CLOSBR;}
"\""			{return QUOTE;}
"\'"			{return QUOTE;}
">"				{return GREATER;}			
"<"				{return SMALLER;}
"!="			{return NOTEQ;}
"=="			{return EQEQ;}
">="			{return GREQ;}
"<="			{return SMEQ;}
"="				{printf("The symbol EQUAL: %s",yytext); charcounter++; return EQUAL;}
"+="			{return PLUSEQ;}			
"-="			{return MINUSEQ;}
"*="			{return STAREQ;}
"/="			{return DIVEQ;}
"**"			{return DOUBLESTAR;}
\#				{printf("The symbol HASH: %s",yytext); charcounter++; }		
\#.+\n		{printf("The comment: %s",yytext); }
^{WHITESPACE}*\#.*	{printf("Co=OMent: %s",yytext); }

\"([^("(\\\")")\n]|\\.)+\"			{printf("\nA DOUBLEQUOTE string = %s\n",yytext); charcounter+=strlen(yytext); 
									strcpy(yylval.nval.string, yytext);
									yylval.nval.type = SSTRING;
									yylval.nval.data_type = LITERAL;
									return STRING;}
\'([^("(\\\')")\n]|\\.)+\'			{printf("\nA SINGLEQUOTE string = %s\n",yytext); charcounter+=strlen(yytext);
									strcpy(yylval.nval.string, yytext);
									yylval.nval.type = SSTRING;
									yylval.nval.data_type = LITERAL	;
									return STRING;}
									


%%
//otan ftiakoume thn if prepei na kanoyme mesa sthn if flag++

int tabcount(char *linetext)
{
	int i=0;
	
	//printf("This is linetext %s:\n",linetext[0]);
	while (linetext[i] == ' ' || linetext[i] == '\t')
	{
		//flag++;
		i++;
		//printf("flag = %d\n",flag);
	}
	i/=4;
	//printf("new flag = %d\n",flag);
	return i;
}

void identation()
{
	printf("\n---------------------BEFORE flag=%d\ttabs=%d\n",flag,tabs);
	if(check)
	{
		nested++;
		check=0;
		return;
	}
	//int tabs = tabcount(yytext);
	if (flag >= tabs && nested)
	{
		flag = tabs;
		return ;
	}
	printf("\n---------------------AFTER flag=%d\ttabs=%d\n",flag,tabs);
	
	if (flag < tabs)
	{
		printf("\n\n--------------------------\n\nLine:%d --> Indentation error\n\n--------------------------\n\n",yylineno);
		exit(1);
	}
}
