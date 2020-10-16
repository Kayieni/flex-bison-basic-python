/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_TRYB_TAB_H_INCLUDED
# define YY_YY_TRYB_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 30 "tryb.y" /* yacc.c:1909  */


#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;

#line 52 "tryb.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IF = 258,
    ELSE = 259,
    ELIF = 260,
    LIST = 261,
    FLOAT = 262,
    COMMA = 263,
    FROM = 264,
    DOT = 265,
    INT = 266,
    FOR = 267,
    IN = 268,
    LEN = 269,
    RANGE = 270,
    NEWLINE = 271,
    NONE = 272,
    COLON = 273,
    OPENAG = 274,
    CLOSAG = 275,
    OPENBR = 276,
    CLOSBR = 277,
    EQUAL = 278,
    AS = 279,
    LAMBDA = 280,
    PLUS = 281,
    MINUS = 282,
    DIV = 283,
    STAR = 284,
    MOD = 285,
    DEF = 286,
    STRING = 287,
    TRUE = 288,
    FALSE = 289,
    QUOTE = 290,
    PRINT = 291,
    STR = 292,
    PASS = 293,
    BREAK = 294,
    RETURN = 295,
    OPENPAR = 296,
    CLOSPAR = 297,
    IMPORT = 298,
    CLASS = 299,
    DOUBLESTAR = 300,
    PLUSEQ = 301,
    MINUSEQ = 302,
    STAREQ = 303,
    DIVEQ = 304,
    AND = 305,
    OR = 306,
    INIT = 307,
    SETDEFAULT = 308,
    ITEMS = 309,
    GREATER = 310,
    SMALLER = 311,
    EQEQ = 312,
    GREQ = 313,
    SMEQ = 314,
    NOTEQ = 315,
    WHITESPACE = 316,
    DEC = 317,
    DIGIT = 318,
    BINARY = 319,
    FLOATINT = 320,
    HEX = 321,
    OCT = 322,
    ID = 323
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 39 "tryb.y" /* yacc.c:1909  */

   struct Variable nval;	

#line 137 "tryb.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRYB_TAB_H_INCLUDED  */
