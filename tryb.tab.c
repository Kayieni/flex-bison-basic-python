/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "tryb.y" /* yacc.c:339  */

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



//THEMATA:
//		print de metraei ta %
//		den einai swsto to ident
//		pws mporoume na xrisimopoihsoyme ta tokens INDENT DEDENT


#line 95 "tryb.tab.c" /* yacc.c:339  */

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
   by #include "tryb.tab.h".  */
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
#line 30 "tryb.y" /* yacc.c:355  */


#include "expression.h"
struct Array variables;
struct Array dictionary;
struct Array functions;

#line 133 "tryb.tab.c" /* yacc.c:355  */

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
#line 39 "tryb.y" /* yacc.c:355  */

   struct Variable nval;	

#line 218 "tryb.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TRYB_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "tryb.tab.c" /* yacc.c:358  */

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
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   924

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  371

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    88,    88,    89,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     113,   114,   115,   116,   120,   121,   122,   124,   128,   129,
     130,   131,   135,   136,   137,   138,   139,   140,   141,   145,
     146,   147,   148,   149,   153,   154,   158,   159,   163,   164,
     165,   166,   167,   168,   169,   173,   174,   175,   179,   180,
     181,   182,   183,   184,   190,   194,   195,   202,   206,   207,
     211,   212,   216,   220,   224,   231,   232,   236,   237,   249,
     250,   254,   255,   259,   260,   261,   262,   264,   265,   266,
     267,   269,   270,   277,   278,   279,   280,   284,   285,   291,
     292,   293,   294,   309,   310,   311,   312,   313,   314,   318,
     319,   320,   321,   322,   325,   326,   327,   328,   333,   334,
     340,   341,   342,   343,   344,   348,   349,   350,   351,   355,
     356,   357,   358,   359,   360,   364,   365,   371,   372,   376,
     377,   384,   385,   389,   390,   391,   392,   396,   397,   398,
     399,   405,   409,   410,   411,   416,   420,   421,   425,   426,
     434,   438,   439,   443,   444,   445,   446,   450,   451,   455,
     456,   457,   458,   462,   463,   469,   470,   471,   475,   476,
     477,   478,   482,   486,   487,   488,   492,   493,   497,   498,
     499,   500,   501
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "ELIF", "LIST", "FLOAT",
  "COMMA", "FROM", "DOT", "INT", "FOR", "IN", "LEN", "RANGE", "NEWLINE",
  "NONE", "COLON", "OPENAG", "CLOSAG", "OPENBR", "CLOSBR", "EQUAL", "AS",
  "LAMBDA", "PLUS", "MINUS", "DIV", "STAR", "MOD", "DEF", "STRING", "TRUE",
  "FALSE", "QUOTE", "PRINT", "STR", "PASS", "BREAK", "RETURN", "OPENPAR",
  "CLOSPAR", "IMPORT", "CLASS", "DOUBLESTAR", "PLUSEQ", "MINUSEQ",
  "STAREQ", "DIVEQ", "AND", "OR", "INIT", "SETDEFAULT", "ITEMS", "GREATER",
  "SMALLER", "EQEQ", "GREQ", "SMEQ", "NOTEQ", "WHITESPACE", "DEC", "DIGIT",
  "BINARY", "FLOATINT", "HEX", "OCT", "ID", "$accept", "start",
  "statements", "expression", "types", "add_letters", "add_numbers",
  "var_operations", "add_obj", "more_types", "numbers", "letters",
  "operators", "break", "return", "lists", "dictionaries", "dictelements",
  "moredictelem", "dict_items", "dict_setdefault", "lambda",
  "lambda_parameters", "print", "print_star", "print_options", "import",
  "module", "id", "assign", "assign_symb", "ass_list", "typenumber", "if",
  "condition", "cond_operators", "log_operators", "indent", "more_statm",
  "for", "sequence", "range", "class", "classname", "class_options",
  "docstring", "more_class_options", "class_attr", "const_options",
  "class_object", "object_inside", "use_object", "func_def", "func_attr",
  "default_attr", "func_options", "call_func", "call_options", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323
};
# endif

#define YYPACT_NINF -229

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-229)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      33,   440,    20,    -7,  -229,    17,     2,    37,  -229,   657,
      20,    14,   128,    83,    33,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
      79,    82,  -229,   657,   578,  -229,  -229,  -229,   101,   106,
     440,  -229,  -229,  -229,  -229,  -229,  -229,   309,   864,  -229,
    -229,  -229,  -229,   322,   437,  -229,  -229,  -229,  -229,   131,
      20,  -229,    59,   145,   143,   571,  -229,   177,   147,   150,
     423,  -229,   184,   111,   152,   168,   187,    12,   664,  -229,
    -229,  -229,  -229,   502,  -229,  -229,   763,   763,    90,  -229,
     183,   121,  -229,  -229,   657,   829,   162,   657,   657,   657,
     657,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,  -229,  -229,  -229,   657,   571,   571,   763,   763,
     763,   763,   151,    74,   194,   145,    20,    31,   155,    36,
     571,   437,   156,   571,   672,   509,   172,   196,   181,   821,
    -229,  -229,    63,  -229,  -229,  -229,  -229,   657,   160,   588,
     227,   210,  -229,   211,  -229,   185,    46,  -229,  -229,  -229,
    -229,   224,  -229,  -229,  -229,   116,   437,  -229,   212,   215,
    -229,   657,   657,  -229,   219,  -229,  -229,  -229,  -229,  -229,
    -229,  -229,   437,   437,  -229,  -229,  -229,  -229,   179,  -229,
    -229,   437,  -229,  -229,  -229,   209,   264,   145,  -229,   274,
    -229,  -229,  -229,  -229,   278,  -229,   170,  -229,   437,   295,
     650,   258,   236,   290,   241,   204,   184,   269,  -229,   298,
     432,   734,   260,    40,   423,  -229,  -229,  -229,  -229,   275,
     209,  -229,   300,   657,  -229,    98,   741,   657,   749,  -229,
    -229,  -229,  -229,  -229,  -229,   250,   657,  -229,   353,    39,
     194,   261,  -229,   313,  -229,   316,  -229,   315,   299,   304,
     117,   657,  -229,  -229,  -229,   330,  -229,  -229,   233,   209,
     345,  -229,  -229,  -229,  -229,   137,  -229,   347,  -229,  -229,
    -229,   339,   440,   178,   342,  -229,   344,   209,   352,   316,
    -229,   302,   763,  -229,   138,   357,  -229,  -229,   353,   657,
     756,  -229,   194,   356,   358,   440,  -229,    35,   209,   361,
     259,   209,   352,   321,   142,  -229,   364,  -229,   340,   373,
     367,   194,   194,   368,   369,   353,   363,   209,  -229,  -229,
     353,   343,   763,  -229,   209,   300,  -229,   209,   374,   367,
     194,   194,   240,  -229,   401,  -229,  -229,   349,   353,    42,
     379,   367,   206,   501,  -229,  -229,   380,   209,    25,   225,
     194,   303,   657,    27,   367,   382,  -229,   657,   194,  -229,
     367
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,   114,     0,     0,    19,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     2,    15,    16,    14,    13,    12,
       7,     8,     4,     5,     6,     9,    10,    11,    17,    18,
       0,     0,   117,     0,     0,    55,   115,   116,     0,     0,
     114,    49,    48,    52,    50,    53,    51,    39,     0,    20,
      24,    25,    26,    32,    28,    27,    21,   125,    54,     0,
     100,    99,     0,    97,     0,     0,    77,     0,     0,     0,
       0,    46,    66,    93,   152,     0,     0,   109,     0,   110,
     111,   112,   113,   114,     1,     3,     0,     0,     0,    68,
       0,     0,    70,    57,     0,     0,     0,     0,     0,     0,
       0,    58,    59,    60,    61,    63,    62,   135,   136,   129,
     130,   132,   133,   134,   131,     0,     0,     0,    58,    59,
      60,    61,     0,     0,     0,   101,     0,     0,     0,     0,
       0,    75,     0,     0,     0,     0,     0,     0,    55,    39,
      83,    86,     0,    81,    84,    92,    85,     0,     0,     0,
       0,     0,    73,   173,   174,     0,     0,   105,   106,   107,
     186,   188,   190,   189,   192,     0,   104,   103,     0,     0,
      67,     0,     0,    69,     0,    23,   128,    40,    41,    43,
      42,    22,   126,   127,    33,    34,    36,    35,    39,    37,
      38,    44,    29,    30,    31,     0,   120,    98,    95,    94,
     102,   143,   144,   145,     0,   146,     0,    78,    76,    39,
     162,     0,     0,     0,     0,    39,   178,     0,   181,     0,
       0,     0,     0,   109,     0,    79,    47,    96,   153,     0,
       0,   151,   157,     0,   108,     0,     0,     0,     0,   187,
     119,   118,    72,    71,    56,     0,     0,   137,     0,     0,
       0,     0,   161,     0,   179,     0,   180,     0,     0,     0,
       0,     0,    87,    88,    89,     0,    82,   154,     0,     0,
       0,   167,   169,   171,   170,     0,   182,   191,    45,   138,
     139,     0,   114,     0,   141,   160,     0,     0,   175,     0,
      91,     0,     0,   147,     0,     0,   155,   158,     0,     0,
       0,   168,     0,     0,     0,   114,   140,     0,     0,   177,
       0,     0,   176,     0,     0,    90,     0,   159,     0,   172,
     121,     0,     0,     0,     0,     0,     0,     0,   184,   183,
       0,     0,     0,   148,     0,   156,    74,     0,     0,   122,
       0,     0,     0,   165,     0,   185,   150,     0,     0,     0,
       0,   142,     0,     0,   166,   149,     0,     0,   173,     0,
       0,     0,     0,   173,   123,     0,   163,     0,     0,   164,
     124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,   387,     0,    -2,    -8,   -99,   -87,  -105,   282,    -5,
     -66,   -65,   -43,  -229,  -229,   279,   280,  -229,   239,   -62,
    -229,   -58,  -229,  -229,  -229,   188,  -229,     6,   -31,   -64,
    -229,   332,  -229,  -229,   -38,  -229,  -229,  -190,  -228,  -229,
    -229,  -102,  -229,  -229,   118,  -229,   102,  -126,  -229,  -229,
     119,   -70,  -229,  -229,   285,   133,   -67,   189
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,   296,    48,    49,    50,    51,    52,   190,   210,
      53,    54,   115,    15,    16,    55,    56,    91,    92,    17,
      18,    19,    67,    20,   142,   143,    21,    62,    63,    22,
      83,    57,    58,    23,    59,   116,   117,   325,   196,    24,
     204,   145,    25,    75,   297,   231,   232,   211,   309,    26,
     275,    27,    28,   217,   164,   288,    29,   165
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      14,    71,    96,   146,    72,   248,   144,   159,   141,   154,
     122,   123,   162,   163,    14,   157,    73,   189,   193,   158,
     168,   169,   284,   229,   192,    71,    90,   205,    88,   125,
      60,   184,   185,   186,   187,    65,     1,     5,    95,   324,
     268,    60,     2,   281,   282,     3,   356,   155,   362,     4,
     367,   137,   191,   191,    68,    33,   235,    34,     5,   283,
     198,    64,   140,   131,     6,     5,    78,   126,    78,     7,
      69,   224,     8,     9,   320,   155,    10,    11,    70,   298,
     156,   166,    74,    84,   252,    66,   174,   236,    61,   177,
     178,   179,   180,   338,   339,   197,   247,   310,   147,    61,
     247,    12,   127,   247,   201,   225,    35,   181,   265,    38,
     170,    39,   350,   351,   182,   183,   264,   258,   326,   126,
      86,   330,   262,    87,   238,   292,    71,    71,   206,   172,
     216,   208,   364,   199,   263,   148,    93,   344,    76,   226,
     370,    71,   188,   173,   348,   300,   147,    94,   246,   124,
     332,    77,   152,   159,   260,   128,   129,   146,   239,   293,
     144,   157,   141,   242,    90,   158,   153,   361,   154,    78,
     273,   274,   162,   163,    79,    80,    81,    82,   154,   301,
     315,     1,   304,   305,   333,   132,   150,     2,   134,   245,
       3,   135,   147,   149,     4,   133,   101,   102,   103,   104,
     105,   171,    71,     5,   176,    97,    98,    99,   100,     6,
     195,   221,   175,   219,     7,   106,   140,     8,     9,   188,
     234,    10,    11,   200,   207,   270,   314,   237,   227,   276,
      97,    98,    99,   100,   273,   274,     1,   220,   278,   279,
     151,   152,     2,   230,   303,     3,    12,   237,   280,     4,
     352,   233,    78,    71,   240,   153,   294,   241,     5,   151,
     152,   244,     1,    77,     6,   295,   347,   323,     2,     7,
     247,     3,     8,     9,   358,     4,    10,    11,   151,   152,
     249,    78,   126,   306,     5,   154,    79,    80,    81,    82,
       6,   318,   154,   363,   279,     7,   250,   328,     8,     9,
     253,    12,    10,    11,   254,   251,     1,   365,   255,   256,
     329,   257,     2,   137,   152,     3,   269,   267,   153,     4,
     279,    97,    98,    99,   100,   306,   343,    12,     5,   285,
     345,   286,   287,   289,     6,    97,    98,    99,   100,     7,
     235,   290,     8,     9,   354,   291,    10,    11,   118,   119,
     120,   121,   105,   299,   366,   238,     1,   302,   307,   369,
     308,   306,     2,   331,   279,     3,     1,   106,   311,     4,
     313,    12,     2,   316,   321,     3,   322,   327,     5,     4,
     334,   300,   336,   337,     6,   346,   340,   341,     5,     7,
     349,   355,     8,     9,     6,   357,    10,    11,   360,     7,
     368,    85,     8,     9,     1,   194,    10,    11,   202,   203,
       2,   243,   266,     3,   279,   167,   317,     4,   335,   319,
     218,    12,   312,     0,   279,     0,     5,   277,     0,   136,
      30,   342,     6,     0,    31,     0,     0,     7,   137,    30,
       8,     9,    33,    31,    10,    11,   259,    30,     0,     0,
       0,    31,     0,     0,     0,   138,     0,    32,    38,    33,
      39,    34,   279,   101,   102,   103,   104,   105,     0,   353,
       0,     0,    35,    36,    37,    38,     0,    39,     0,     0,
       0,    40,   106,     0,     0,    41,    42,    43,    44,    45,
      46,   139,     0,     0,    41,    42,    43,    44,    45,    46,
       0,     0,    41,    42,    43,    44,    45,    46,    47,    30,
       0,   359,     0,    31,     0,     0,    30,     0,     0,    32,
      31,    33,     0,    34,    77,     0,     0,     0,    33,     0,
       0,     0,     0,     0,    35,    36,    37,    38,   212,    39,
       0,    35,    78,   130,    38,     0,    39,    79,    80,    81,
      82,   213,     0,     0,   214,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    42,    43,    44,    45,    46,
      47,    41,    42,    43,    44,    45,    46,   215,    30,     0,
       0,     0,    31,     0,     0,    30,     0,     0,     0,    31,
      33,     0,    34,     0,     0,    30,     0,    33,     0,    31,
      89,     0,     0,    35,     0,     0,    38,    33,    39,     0,
      35,     0,   130,    38,     0,    39,     0,     0,     0,     0,
      35,     0,     0,    38,     0,    39,     0,     0,     0,     0,
     228,     0,     0,    41,    42,    43,    44,    45,    46,    47,
      41,    42,    43,    44,    45,    46,    47,     0,     0,     0,
      41,    42,    43,    44,    45,    46,   209,    30,   147,     0,
       0,    31,     0,     0,    30,     0,     0,     0,    31,    33,
       0,    30,     0,     0,     0,    31,    33,     0,     0,    30,
       0,     0,    35,    31,     0,    38,     0,    39,     0,    35,
       0,    33,    38,     0,    39,     0,    35,     0,     0,    38,
       0,    39,     0,     0,    35,     0,   160,    38,     0,    39,
       0,     0,    41,    42,    43,    44,    45,    46,   209,    41,
      42,    43,    44,    45,    46,    47,    41,    42,    43,    44,
      45,    46,   161,     0,    41,    42,    43,    44,    45,    46,
     209,    30,     0,     0,     0,    31,     0,     0,    30,     0,
       0,     0,    31,     0,     0,     0,    30,     0,     0,     0,
      31,     0,     0,    30,     0,     0,    35,    31,     0,    38,
      30,    39,     0,    35,    31,   261,    38,     0,    39,     0,
       0,    35,     0,   271,    38,     0,    39,     0,    35,     0,
       0,    38,     0,    39,     0,     0,    41,    42,    43,    44,
      45,    46,    47,    41,    42,    43,    44,    45,    46,   272,
       0,    41,    42,    43,    44,    45,    46,   161,    41,    42,
      43,    44,    45,    46,   272,    41,    42,    43,    44,    45,
      46,   222,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   223,     0,     0,    97,    98,    99,
     100,     0,     0,     0,     0,   101,   102,   103,   104,   105,
       0,     0,    78,     0,     0,     0,     0,    79,    80,    81,
      82,   175,     0,     0,   106,     0,     0,     0,     0,   107,
     108,     0,     0,     0,   109,   110,   111,   112,   113,   114,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   106,
       0,     0,     0,     0,   107,   108,     0,     0,     0,   109,
     110,   111,   112,   113,   114
};

static const yytype_int16 yycheck[] =
{
       0,     9,    40,    70,     9,   195,    70,    77,    70,    76,
      53,    54,    78,    78,    14,    77,    10,   122,   123,    77,
      86,    87,   250,   149,   123,    33,    34,   129,    33,    60,
      10,   118,   119,   120,   121,    18,     3,    25,    40,     4,
     230,    10,     9,     4,     5,    12,     4,    35,    23,    16,
      23,    15,   122,   123,    52,    19,    10,    21,    25,   249,
      29,    68,    70,    65,    31,    25,    41,     8,    41,    36,
      68,     8,    39,    40,   302,    35,    43,    44,    41,   269,
      68,    83,    68,     0,   210,    68,    94,    41,    68,    97,
      98,    99,   100,   321,   322,   126,    61,   287,     8,    68,
      61,    68,    43,    61,    68,    42,    32,   115,    68,    35,
      20,    37,   340,   341,   116,   117,   221,   219,   308,     8,
      41,   311,   221,    41,     8,     8,   134,   135,   130,     8,
     135,   133,   360,   127,   221,    24,    35,   327,    10,   147,
     368,   149,    68,    22,   334,     8,     8,    41,   191,    18,
       8,    23,    54,   223,   220,    10,    13,   224,    42,    42,
     224,   223,   224,   171,   172,   223,    68,   357,   235,    41,
     236,   236,   238,   238,    46,    47,    48,    49,   245,    42,
      42,     3,     4,     5,    42,     8,    18,     9,    41,    10,
      12,    41,     8,    41,    16,    18,    26,    27,    28,    29,
      30,    18,   210,    25,    42,    26,    27,    28,    29,    31,
      16,    30,    42,    41,    36,    45,   224,    39,    40,    68,
      35,    43,    44,    68,    68,   233,   292,    23,    68,   237,
      26,    27,    28,    29,   300,   300,     3,    41,   246,    61,
      53,    54,     9,    16,   282,    12,    68,    23,   248,    16,
      10,    41,    41,   261,    42,    68,   261,    42,    25,    53,
      54,    42,     3,    23,    31,    32,   332,   305,     9,    36,
      61,    12,    39,    40,    68,    16,    43,    44,    53,    54,
      16,    41,     8,   283,    25,   352,    46,    47,    48,    49,
      31,   299,   359,    68,    61,    36,    18,    38,    39,    40,
      42,    68,    43,    44,    68,    10,     3,     4,    18,    68,
     310,    42,     9,    15,    54,    12,    16,    42,    68,    16,
      61,    26,    27,    28,    29,   325,   326,    68,    25,    68,
     330,    18,    16,    18,    31,    26,    27,    28,    29,    36,
      10,    42,    39,    40,   344,    41,    43,    44,    26,    27,
      28,    29,    30,     8,   362,     8,     3,    18,    16,   367,
      16,   361,     9,    42,    61,    12,     3,    45,    16,    16,
      68,    68,     9,    16,    18,    12,    18,    16,    25,    16,
      16,     8,    42,    16,    31,    42,    18,    18,    25,    36,
      16,    42,    39,    40,    31,    16,    43,    44,    18,    36,
      18,    14,    39,    40,     3,   123,    43,    44,   129,   129,
       9,   172,   224,    12,    61,    83,   298,    16,   316,   300,
     135,    68,   289,    -1,    61,    -1,    25,   238,    -1,     6,
       7,    68,    31,    -1,    11,    -1,    -1,    36,    15,     7,
      39,    40,    19,    11,    43,    44,    14,     7,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    32,    -1,    17,    35,    19,
      37,    21,    61,    26,    27,    28,    29,    30,    -1,    68,
      -1,    -1,    32,    33,    34,    35,    -1,    37,    -1,    -1,
      -1,    41,    45,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    -1,    -1,    62,    63,    64,    65,    66,    67,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,     7,
      -1,    10,    -1,    11,    -1,    -1,     7,    -1,    -1,    17,
      11,    19,    -1,    21,    23,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    29,    37,
      -1,    32,    41,    41,    35,    -1,    37,    46,    47,    48,
      49,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,    67,
      68,    62,    63,    64,    65,    66,    67,    68,     7,    -1,
      -1,    -1,    11,    -1,    -1,     7,    -1,    -1,    -1,    11,
      19,    -1,    21,    -1,    -1,     7,    -1,    19,    -1,    11,
      22,    -1,    -1,    32,    -1,    -1,    35,    19,    37,    -1,
      32,    -1,    41,    35,    -1,    37,    -1,    -1,    -1,    -1,
      32,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    62,    63,    64,    65,    66,    67,    68,
      62,    63,    64,    65,    66,    67,    68,    -1,    -1,    -1,
      62,    63,    64,    65,    66,    67,    68,     7,     8,    -1,
      -1,    11,    -1,    -1,     7,    -1,    -1,    -1,    11,    19,
      -1,     7,    -1,    -1,    -1,    11,    19,    -1,    -1,     7,
      -1,    -1,    32,    11,    -1,    35,    -1,    37,    -1,    32,
      -1,    19,    35,    -1,    37,    -1,    32,    -1,    -1,    35,
      -1,    37,    -1,    -1,    32,    -1,    42,    35,    -1,    37,
      -1,    -1,    62,    63,    64,    65,    66,    67,    68,    62,
      63,    64,    65,    66,    67,    68,    62,    63,    64,    65,
      66,    67,    68,    -1,    62,    63,    64,    65,    66,    67,
      68,     7,    -1,    -1,    -1,    11,    -1,    -1,     7,    -1,
      -1,    -1,    11,    -1,    -1,    -1,     7,    -1,    -1,    -1,
      11,    -1,    -1,     7,    -1,    -1,    32,    11,    -1,    35,
       7,    37,    -1,    32,    11,    41,    35,    -1,    37,    -1,
      -1,    32,    -1,    42,    35,    -1,    37,    -1,    32,    -1,
      -1,    35,    -1,    37,    -1,    -1,    62,    63,    64,    65,
      66,    67,    68,    62,    63,    64,    65,    66,    67,    68,
      -1,    62,    63,    64,    65,    66,    67,    68,    62,    63,
      64,    65,    66,    67,    68,    62,    63,    64,    65,    66,
      67,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    12,    16,    25,    31,    36,    39,    40,
      43,    44,    68,    70,    71,    82,    83,    88,    89,    90,
      92,    95,    98,   102,   108,   111,   118,   120,   121,   125,
       7,    11,    17,    19,    21,    32,    33,    34,    35,    37,
      41,    62,    63,    64,    65,    66,    67,    68,    72,    73,
      74,    75,    76,    79,    80,    84,    85,   100,   101,   103,
      10,    68,    96,    97,    68,    18,    68,    91,    52,    68,
      41,    73,    78,    96,    68,   112,    10,    23,    41,    46,
      47,    48,    49,    99,     0,    70,    41,    41,    78,    22,
      73,    86,    87,    35,    41,    72,   103,    26,    27,    28,
      29,    26,    27,    28,    29,    30,    45,    50,    51,    55,
      56,    57,    58,    59,    60,    81,   104,   105,    26,    27,
      28,    29,    81,    81,    18,    97,     8,    43,    10,    13,
      41,    72,     8,    18,    41,    41,     6,    15,    32,    68,
      73,    88,    93,    94,    98,   110,   125,     8,    24,    41,
      18,    53,    54,    68,   125,    35,    68,    88,    90,   120,
      42,    68,    79,    80,   123,   126,    72,   100,    79,    79,
      20,    18,     8,    22,    73,    42,    42,    73,    73,    73,
      73,    73,    72,    72,    75,    75,    75,    75,    68,    76,
      77,   120,    74,    76,    77,    16,   107,    97,    29,    96,
      68,    68,    84,    85,   109,   110,    72,    68,    72,    68,
      78,   116,    29,    42,    45,    68,    78,   122,   123,    41,
      41,    30,    10,    23,     8,    42,    73,    68,    42,   116,
      16,   114,   115,    41,    35,    10,    41,    23,     8,    42,
      42,    42,    73,    87,    42,    10,    81,    61,   106,    16,
      18,    10,   116,    42,    68,    18,    68,    42,   110,    14,
      79,    41,    74,    75,    76,    68,    94,    42,   106,    16,
      73,    42,    68,    79,    80,   119,    73,   126,    73,    61,
      71,     4,     5,   106,   107,    68,    18,    16,   124,    18,
      42,    41,     8,    42,    78,    32,    71,   113,   106,     8,
       8,    42,    18,   103,     4,     5,    71,    16,    16,   117,
     106,    16,   124,    68,    79,    42,    16,   113,    73,   119,
     107,    18,    18,   103,     4,   106,   106,    16,    38,    71,
     106,    42,     8,    42,    16,   115,    42,    16,   107,   107,
      18,    18,    68,    71,   106,    71,    42,    79,   106,    16,
     107,   107,    10,    68,    71,    42,     4,    16,    68,    10,
      18,   106,    23,    68,   107,     4,    73,    23,    18,    73,
     107
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    72,    73,    73,    73,    73,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      79,    79,    79,    79,    79,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    82,    83,    83,    84,    85,    85,
      86,    86,    87,    88,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    96,    96,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   110,   110,   110,
     110,   111,   112,   112,   112,   113,   114,   114,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   122,   122,
     122,   122,   123,   124,   124,   124,   125,   125,   126,   126,
     126,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     2,     3,
       1,     3,     3,     3,     8,     3,     4,     1,     3,     4,
       8,     1,     3,     1,     1,     1,     1,     3,     3,     3,
       5,     4,     1,     2,     4,     4,     4,     1,     3,     1,
       1,     2,     3,     3,     3,     3,     3,     3,     4,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     4,     4,
       4,     8,     9,    13,    15,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     6,    10,     1,     1,     1,     1,     4,     6,     8,
       7,     4,     1,     3,     4,     1,     5,     1,     3,     4,
       3,     2,     1,     7,     8,     3,     4,     5,     6,     1,
       1,     1,     3,     3,     3,     6,     7,     7,     1,     2,
       2,     1,     3,     3,     3,     4,     3,     4,     1,     1,
       1,     3,     1
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
#line 88 "tryb.y" /* yacc.c:1646  */
    {printf("\nSyntax check completed successfuly!!!\n");}
#line 1693 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 93 "tryb.y" /* yacc.c:1646  */
    {printf("pr 2\n");}
#line 1699 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "tryb.y" /* yacc.c:1646  */
    {printf("pr if\n"); /*identation();*/}
#line 1705 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 95 "tryb.y" /* yacc.c:1646  */
    {printf("pr for\n");}
#line 1711 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 96 "tryb.y" /* yacc.c:1646  */
    {printf("pr printf\n");}
#line 1717 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 97 "tryb.y" /* yacc.c:1646  */
    {printf("pr import\n");}
#line 1723 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "tryb.y" /* yacc.c:1646  */
    {printf("pr  THE class\n"); /*identation();*/}
#line 1729 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 99 "tryb.y" /* yacc.c:1646  */
    {printf("pr  OBJECT\n");}
#line 1735 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 106 "tryb.y" /* yacc.c:1646  */
    {printf("pr  DEF\n");}
#line 1741 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 107 "tryb.y" /* yacc.c:1646  */
    {printf("pr  CALL\n");	}
#line 1747 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 108 "tryb.y" /* yacc.c:1646  */
    {/*identation();*/ tabs=0; printf("pr 4\n");}
#line 1753 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-1].nval);}
#line 1759 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 120 "tryb.y" /* yacc.c:1646  */
    {printf("type 1\n");}
#line 1765 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 121 "tryb.y" /* yacc.c:1646  */
    {printf("type 2\n");(yyval.nval)=(yyvsp[0].nval);}
#line 1771 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 122 "tryb.y" /* yacc.c:1646  */
    {printf("type 3\n");(yyval.nval)=(yyvsp[0].nval);}
#line 1777 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 135 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1783 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 136 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1789 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 137 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);}
#line 1795 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 138 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1801 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 139 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1807 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 145 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1813 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 146 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = add_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1819 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 147 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = minus_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);}
#line 1825 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 148 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = mul_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1831 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 149 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = div_calc((yyvsp[-2].nval),(yyvsp[0].nval),&variables,1);  }
#line 1837 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 158 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1843 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 159 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1849 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 163 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1855 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 164 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1861 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 165 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1867 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 166 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1873 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 168 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1879 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 169 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1885 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 202 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-1].nval);}
#line 1891 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 206 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyval.nval);}
#line 1897 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 207 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-1].nval);}
#line 1903 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 211 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1909 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 212 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1915 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 216 "tryb.y" /* yacc.c:1646  */
    {insertArray(&dictionary,(yyvsp[-2].nval)); insertArray(&dictionary,(yyvsp[0].nval));}
#line 1921 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 224 "tryb.y" /* yacc.c:1646  */
    {setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 1927 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 231 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1933 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 232 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-2].nval);}
#line 1939 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 236 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval) = (yyvsp[0].nval); (yyval.nval).type = LAM ;insertArray(&variables, (yyval.nval)); }
#line 1945 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 249 "tryb.y" /* yacc.c:1646  */
    {printf(">>  "); print((yyvsp[-1].nval),&variables); }
#line 1951 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 250 "tryb.y" /* yacc.c:1646  */
    {printf(">>  ");setDefault((yyvsp[-3].nval),(yyvsp[-1].nval),&dictionary,&variables);}
#line 1957 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 254 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[0].nval);}
#line 1963 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "tryb.y" /* yacc.c:1646  */
    {printf("print 1\n"); (yyval.nval)=(yyvsp[0].nval);}
#line 1969 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 260 "tryb.y" /* yacc.c:1646  */
    {printf("print 2\n"); (yyval.nval)=(yyvsp[0].nval);}
#line 1975 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 262 "tryb.y" /* yacc.c:1646  */
    {printf(">>  "); items(&dictionary,&variables);}
#line 1981 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 264 "tryb.y" /* yacc.c:1646  */
    {printf("print 3\n");}
#line 1987 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 265 "tryb.y" /* yacc.c:1646  */
    {printf("print 4\n");}
#line 1993 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 266 "tryb.y" /* yacc.c:1646  */
    {printf("print 5\n");}
#line 1999 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 267 "tryb.y" /* yacc.c:1646  */
    {printf("print 6\n");}
#line 2005 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 269 "tryb.y" /* yacc.c:1646  */
    {printf("print 8\n");}
#line 2011 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 270 "tryb.y" /* yacc.c:1646  */
    {printf("print 9\n");}
#line 2017 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 277 "tryb.y" /* yacc.c:1646  */
    {printf("\nIMPORT STATEMENT 1 ok\n");}
#line 2023 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 278 "tryb.y" /* yacc.c:1646  */
    {printf("\nIMPORT STATEMENT 2 ok\n");}
#line 2029 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 279 "tryb.y" /* yacc.c:1646  */
    {printf("\nIMPORT STATEMENT 3 ok\n");}
#line 2035 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 280 "tryb.y" /* yacc.c:1646  */
    {printf("\nIMPORT STATEMENT 4 ok\n");}
#line 2041 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 284 "tryb.y" /* yacc.c:1646  */
    {printf("MOOODDUUULEE id\n");}
#line 2047 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 285 "tryb.y" /* yacc.c:1646  */
    {printf("MOOODDUUULEE id , id\n");}
#line 2053 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 291 "tryb.y" /* yacc.c:1646  */
    {printf("idddddd ID\n");}
#line 2059 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 292 "tryb.y" /* yacc.c:1646  */
    {printf("idddddd DOT\n");}
#line 2065 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 293 "tryb.y" /* yacc.c:1646  */
    {printf("idddddd ID DOT\n");}
#line 2071 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 294 "tryb.y" /* yacc.c:1646  */
    {printf("idddddd ID DOT ID\n");}
#line 2077 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 309 "tryb.y" /* yacc.c:1646  */
    {printf("\nThe VAR initialization\t\n");}
#line 2083 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 310 "tryb.y" /* yacc.c:1646  */
    {insertArray(&variables,value_assign((yyvsp[-2].nval),(yyvsp[0].nval),&variables)); printf("\nThe VAR initialization\t\n");}
#line 2089 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 312 "tryb.y" /* yacc.c:1646  */
    {insertArray(&variables,value_assign((yyvsp[-2].nval),(yyvsp[0].nval),&variables));printf("\nThe VAR initialization\t\n");}
#line 2095 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 314 "tryb.y" /* yacc.c:1646  */
    {printf("\nThe VAR \t\"\"\t initialization\t\n");}
#line 2101 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 326 "tryb.y" /* yacc.c:1646  */
    {printf("list 3\n");}
#line 2107 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 327 "tryb.y" /* yacc.c:1646  */
    {printf("list 2\n");}
#line 2113 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 328 "tryb.y" /* yacc.c:1646  */
    {printf("list 6\n");}
#line 2119 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 333 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-1].nval);}
#line 2125 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 334 "tryb.y" /* yacc.c:1646  */
    {(yyval.nval)=(yyvsp[-1].nval);}
#line 2131 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 371 "tryb.y" /* yacc.c:1646  */
    {tabs++; printf("\n@@@@@@TABS %d@@@@@@@@@@\n",tabs);}
#line 2137 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 372 "tryb.y" /* yacc.c:1646  */
    {tabs++; printf("\n@@@@@@TABS %d@@@@@@@@@@\n",tabs);}
#line 2143 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 376 "tryb.y" /* yacc.c:1646  */
    {/*identation();tabs=0;*/}
#line 2149 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 377 "tryb.y" /* yacc.c:1646  */
    {/*identation();tabs=0;*/}
#line 2155 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 425 "tryb.y" /* yacc.c:1646  */
    {/*identation();*/}
#line 2161 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 426 "tryb.y" /* yacc.c:1646  */
    {/*identation();*/}
#line 2167 "tryb.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 471 "tryb.y" /* yacc.c:1646  */
    {printf("edw exei oristei o constructor\n");}
#line 2173 "tryb.tab.c" /* yacc.c:1646  */
    break;


#line 2177 "tryb.tab.c" /* yacc.c:1646  */
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
#line 507 "tryb.y" /* yacc.c:1906  */


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
