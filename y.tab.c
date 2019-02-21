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
#line 10 "pascal.y" /* yacc.c:339  */


#include <stdio.h>
#include <string.h>
#include "globals.h"
#include "symbol.h"
#include "stack.h"
#include "tac.h"
#include "stack_interface.h"

SYMBTABLE *st;
SYMBTABLE *main_symbol_table;
SYMBTABLE *constant_symbol_table;
SYMBTABLE *table_pointer;
SYMBTABLE *table_ptr;

#define YYDEBUG 1

DIM_TYPE *dim_p;

PARAM_TYPE *parameter_list;
PARAM_TYPE *param;

SYMB            *t;
int              offset;
int              len;
stack            symbol_table_stack;
stack            offset_stack;
struct decl_type temp;

int executable_statement_mode = 0;
int parameter_mode = 0;
int param_count = 0;
int block_depth = 0;
int line_count = 1;
int c;
int elements;
int next_tmp = 0;
int next_label = 0;
TAC *program_tac = NULL;
TAC *p_tac1 = NULL;
TAC *p_tac2 = NULL;
int global_nesting_depth = 1;

static void yyerror(char *str){ fprintf(stderr, "pc: %s\n", str); }


#line 114 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AND = 258,
    ARRAY = 259,
    _BEGIN = 260,
    CASE = 261,
    CONST = 262,
    DIV = 263,
    DO = 264,
    DOWNTO = 265,
    ELSE = 266,
    END = 267,
    _FILE = 268,
    FOR = 269,
    FORWARD = 270,
    FUNCTION = 271,
    GOTO = 272,
    IF = 273,
    IN = 274,
    LABEL = 275,
    MOD = 276,
    NIL = 277,
    NOT = 278,
    OF = 279,
    OR = 280,
    PACKED = 281,
    PROCEDURE = 282,
    PROGRAM = 283,
    RECORD = 284,
    REPEAT = 285,
    SET = 286,
    THEN = 287,
    TO = 288,
    TYPE = 289,
    UNTIL = 290,
    VAR = 291,
    WHILE = 292,
    WITH = 293,
    INTEGER = 294,
    REAL = 295,
    NUM = 296,
    ASSIGN = 297,
    NE = 298,
    GE = 299,
    LE = 300,
    DOTDOT = 301,
    print = 302,
    ID = 303,
    NUM_INT = 304,
    NUM_REAL = 305,
    STRING = 306
  };
#endif
/* Tokens.  */
#define AND 258
#define ARRAY 259
#define _BEGIN 260
#define CASE 261
#define CONST 262
#define DIV 263
#define DO 264
#define DOWNTO 265
#define ELSE 266
#define END 267
#define _FILE 268
#define FOR 269
#define FORWARD 270
#define FUNCTION 271
#define GOTO 272
#define IF 273
#define IN 274
#define LABEL 275
#define MOD 276
#define NIL 277
#define NOT 278
#define OF 279
#define OR 280
#define PACKED 281
#define PROCEDURE 282
#define PROGRAM 283
#define RECORD 284
#define REPEAT 285
#define SET 286
#define THEN 287
#define TO 288
#define TYPE 289
#define UNTIL 290
#define VAR 291
#define WHILE 292
#define WITH 293
#define INTEGER 294
#define REAL 295
#define NUM 296
#define ASSIGN 297
#define NE 298
#define GE 299
#define LE 300
#define DOTDOT 301
#define print 302
#define ID 303
#define NUM_INT 304
#define NUM_REAL 305
#define STRING 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 58 "pascal.y" /* yacc.c:355  */

  SYMB      *symb;
  DECL_TYPE  decl_type;
  DIM_TYPE  *dim_type;
  TAC       *tac;
  ENODE     *enode;

#line 264 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      52,    53,    65,    63,    56,    64,    55,    66,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    57,    54,
      61,    60,    62,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    58,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   135,   152,   161,   170,   175,   181,   232,
     238,   284,   288,   294,   295,   312,   320,   329,   334,   339,
     394,   415,   433,   442,   451,   457,   459,   463,   469,   475,
     476,   478,   480,   486,   501,   516,   517,   523,   530,   531,
     532,   536,   540,   548,   554,   560,   565,   571,   572,   579,
     596,   604,   605,   622,   626,   630,   634,   638,   642,   648,
     653,   688,   689,   693,   697,   701,   705,   711,   712,   716,
     720,   724,   728,   734,   738,   742,   746,   750,   754
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "ARRAY", "_BEGIN", "CASE",
  "CONST", "DIV", "DO", "DOWNTO", "ELSE", "END", "_FILE", "FOR", "FORWARD",
  "FUNCTION", "GOTO", "IF", "IN", "LABEL", "MOD", "NIL", "NOT", "OF", "OR",
  "PACKED", "PROCEDURE", "PROGRAM", "RECORD", "REPEAT", "SET", "THEN",
  "TO", "TYPE", "UNTIL", "VAR", "WHILE", "WITH", "INTEGER", "REAL", "NUM",
  "ASSIGN", "NE", "GE", "LE", "DOTDOT", "print", "ID", "NUM_INT",
  "NUM_REAL", "STRING", "'('", "')'", "';'", "'.'", "','", "':'", "']'",
  "'['", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "$accept",
  "program", "M1", "main_identifier_list", "optional_declarations",
  "declaration_identifier_list", "declaration", "declarations", "type",
  "standard_type", "subprogram_declarations", "subprogram_declaration",
  "subprogram_head", "N1", "optional_parameters", "N2", "parameters",
  "compound_statement", "M2", "M3", "optional_statements",
  "dimension_declaration_list", "statement_list", "statement",
  "procedure_statement", "optional_arguments", "argument_list",
  "function_expression_list", "array_expression_list", "expression",
  "variable", "simple_expression", "term", "factor", YY_NULLPTR
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
     305,   306,    40,    41,    59,    46,    44,    58,    93,    91,
      61,    60,    62,    43,    45,    42,    47
};
# endif

#define YYPACT_NINF -103

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-103)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -103,    21,    18,  -103,    -9,    32,    40,  -103,   -37,    41,
      53,    67,  -103,    56,  -103,    70,    16,    54,     9,    56,
      59,    22,  -103,  -103,  -103,    66,    71,  -103,    67,    68,
      74,    16,    62,  -103,  -103,  -103,  -103,     0,  -103,  -103,
    -103,  -103,  -103,  -103,    75,    35,    33,    -8,    33,    33,
      28,  -103,  -103,    33,    -8,    -8,  -103,   110,    76,  -103,
    -103,    36,    83,  -103,    73,     3,  -103,    77,    77,     9,
      85,    89,   108,     1,   107,    95,  -103,   139,  -103,    33,
      33,  -103,   -36,    96,     3,     3,  -103,     0,    33,  -103,
      33,    -8,    63,    63,    63,    63,    63,    63,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,  -103,    93,    97,    98,   104,
     109,    60,    33,     0,     0,   -26,  -103,  -103,  -103,    33,
    -103,  -103,  -103,  -103,  -103,     3,    26,    26,    26,    26,
      26,    26,     3,     3,  -103,  -103,  -103,  -103,  -103,    56,
      60,  -103,  -103,  -103,   105,  -103,  -103,   145,  -103,  -103,
      33,  -103,  -103,   -22,   103,  -103,     0,  -103,  -103,    56,
    -103,  -103,  -103
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     0,     0,     0,     4,     0,     0,
       0,     7,     5,     0,    18,     6,     0,     0,     0,     0,
       0,     0,    10,    12,    29,     0,     0,    17,     7,     0,
       0,     0,     0,    15,    16,     9,    13,    32,    22,    22,
      18,     2,    11,     8,     0,     0,     0,     0,     0,     0,
      73,    75,    76,     0,     0,     0,    39,     0,    31,    35,
      38,     0,     0,    52,    51,    61,    67,    24,    24,     0,
       0,     0,     0,    73,     0,    73,    78,     0,    42,     0,
       0,    43,     0,     0,    62,    63,    30,     0,     0,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,    50,    44,     0,
      77,    28,    36,    49,    37,    66,    54,    55,    56,    53,
      57,    58,    64,    65,    72,    70,    71,    68,    69,     0,
       0,    21,    19,    34,     0,    14,    47,     0,    41,    74,
       0,    45,    27,     0,     0,    33,     0,    48,    23,     0,
      20,    40,    26
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,   130,   128,   -19,  -103,  -103,  -102,
     120,  -103,  -103,   122,    94,  -103,  -103,   -11,  -103,  -103,
    -103,  -103,  -103,   -85,  -103,  -103,  -103,  -103,  -103,   -45,
    -103,    49,    11,   -25
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     8,    14,    22,    17,    15,    35,    36,
      18,    27,    28,    67,   106,   139,   153,    56,    37,   121,
      57,    45,    58,    59,    60,    81,    82,   115,    61,    62,
      63,    64,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    74,   122,    77,    78,    24,   100,    29,    83,   145,
     -59,   101,   -59,   -59,    24,    47,     9,   118,    46,    10,
     119,     3,    76,    47,   102,    25,    32,   149,   147,   148,
     150,   158,   159,   -59,   116,   117,    26,    48,   154,     5,
      75,    51,    52,   123,    53,   124,     4,    49,    50,    51,
      52,    91,    53,   112,   -59,   -59,    47,   -59,   108,   -59,
      80,    33,    34,    54,    55,    84,    85,   146,   103,   104,
     -59,   161,    20,    21,   151,   134,   135,   136,   137,   138,
      79,    73,    51,    52,     6,    53,    47,    80,     7,    98,
      99,    71,    88,    72,    89,    11,    54,    55,    91,    33,
      34,    12,   125,    13,    16,   157,    19,    31,    23,   132,
     133,    75,    51,    52,    38,    53,    92,    93,    94,    39,
     152,    44,    86,    41,    70,    90,    54,    55,    42,   105,
      87,   109,   111,    95,    96,    97,    98,    99,   110,   113,
     162,   126,   127,   128,   129,   130,   131,   112,   114,   120,
     140,   141,   142,   143,   155,   144,   156,   160,    40,    43,
      69,    68,   107
};

static const yytype_uint8 yycheck[] =
{
      19,    46,    87,    48,    49,     5,     3,    18,    53,   111,
       9,     8,    11,    12,     5,    23,    53,    53,    18,    56,
      56,     0,    47,    23,    21,    16,     4,    53,   113,   114,
      56,    53,    54,    32,    79,    80,    27,    37,   140,    48,
      48,    49,    50,    88,    52,    90,    28,    47,    48,    49,
      50,    25,    52,    52,    53,    54,    23,    56,    69,    58,
      59,    39,    40,    63,    64,    54,    55,   112,    65,    66,
      42,   156,    56,    57,   119,   100,   101,   102,   103,   104,
      52,    48,    49,    50,    52,    52,    23,    59,    48,    63,
      64,    56,    56,    58,    58,    54,    63,    64,    25,    39,
      40,    48,    91,    36,    48,   150,    36,    48,    54,    98,
      99,    48,    49,    50,    48,    52,    43,    44,    45,    48,
     139,    59,    12,    55,    49,    42,    63,    64,    54,    52,
      54,    46,    24,    60,    61,    62,    63,    64,    49,    32,
     159,    92,    93,    94,    95,    96,    97,    52,     9,    53,
      57,    54,    54,    49,    49,    46,    11,    54,    28,    31,
      40,    39,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    69,     0,    28,    48,    52,    48,    70,    53,
      56,    54,    48,    36,    71,    74,    48,    73,    77,    36,
      56,    57,    72,    54,     5,    16,    27,    78,    79,    84,
      73,    48,     4,    39,    40,    75,    76,    85,    48,    48,
      71,    55,    54,    72,    59,    88,    18,    23,    37,    47,
      48,    49,    50,    52,    63,    64,    84,    87,    89,    90,
      91,    95,    96,    97,    98,    99,   100,    80,    80,    77,
      49,    56,    58,    48,    96,    48,   100,    96,    96,    52,
      59,    92,    93,    96,    99,    99,    12,    54,    56,    58,
      42,    25,    43,    44,    45,    60,    61,    62,    63,    64,
       3,     8,    21,    65,    66,    52,    81,    81,    84,    46,
      49,    24,    52,    32,     9,    94,    96,    96,    53,    56,
      53,    86,    90,    96,    96,    99,    98,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   100,   100,   100,    82,
      57,    54,    54,    49,    46,    76,    96,    90,    90,    53,
      56,    96,    73,    83,    76,    49,    11,    96,    53,    54,
      54,    90,    73
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    70,    70,    71,    71,    72,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      79,    79,    80,    81,    81,    82,    83,    83,    84,    85,
      86,    87,    87,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    11,     0,     1,     3,     1,     0,     3,     2,
       2,     4,     3,     1,     5,     1,     1,     2,     0,     5,
       7,     5,     0,     4,     0,     0,     3,     1,     5,     0,
       0,     1,     0,     5,     4,     1,     3,     3,     1,     1,
       6,     4,     2,     2,     2,     3,     2,     1,     3,     3,
       3,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       2,     1,     2,     2,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     4,     1,     1,     3,     2
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
#line 113 "pascal.y" /* yacc.c:1646  */
    {
                           pop_table(&symbol_table_stack, &table_pointer);
                           len = strlen((yyvsp[-8].symb)->name);			   
                           table_pointer->name = (char*)malloc(sizeof(char) * len + 1);
                           strcpy(table_pointer->name, (yyvsp[-8].symb)->name);
                           table_pointer->name[len] = '\0';
                           pop_offset(&offset_stack, &offset);
                           table_pointer->width = offset;
			   (yyvsp[-8].symb)->size = offset;
                           (yyvsp[-8].symb)->token_type_1 = T_SELF;
                           (yyvsp[-8].symb)->token_type_2 = T_PROGRAM;
                           (yyvsp[-8].symb)->data_type = T_UNDEF;
			   (yyvsp[-8].symb)->nesting_depth = 1;

			   TAC *temp1 = join_tac((yyvsp[-3].tac), (yyvsp[-1].tac));			   
			   TAC *temp2 = do_program((yyvsp[-8].symb), (yyvsp[-6].symb), temp1);
			   program_tac = join_tac(temp2, (yyvsp[-2].tac));
			   (yyval.tac) = program_tac;
                         }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 135 "pascal.y" /* yacc.c:1646  */
    {
                          init_stack(&symbol_table_stack);
                          init_stack(&offset_stack);
                          constant_symbol_table = mktable(NULL);
                          table_ptr = mktable(NULL);
                          main_symbol_table = table_ptr;
                          len = strlen("CONSTANT SYMBOLS");
                          constant_symbol_table->name = (char*)malloc(sizeof(char) * len + 1);
                          strcpy(constant_symbol_table->name, "CONSTANT SYMBOLS");
                          main_symbol_table->width = 0;
                          constant_symbol_table->width = 0;
                          push_table(&symbol_table_stack, table_ptr);
                          push_offset(&offset_stack, 0);
                          parameter_mode = 0;
                        }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 153 "pascal.y" /* yacc.c:1646  */
    {
                          (yyvsp[0].symb)->token_type_1 = T_PARAM;
                          (yyvsp[0].symb)->token_type_2 = T_FILE;
                          (yyvsp[0].symb)->data_type = T_UNDEF;
                          (yyval.symb) = (yyvsp[0].symb);
                          main_symbol_table->parameters = 1;
                        }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "pascal.y" /* yacc.c:1646  */
    {
			  (yyvsp[0].symb)->token_type_1 = T_PARAM;
			  (yyvsp[0].symb)->token_type_2 = T_FILE;
			  (yyvsp[0].symb)->data_type = T_UNDEF;
			  main_symbol_table->parameters = main_symbol_table->parameters + 1;
                        }
#line 1540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 171 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = (yyvsp[0].tac);
                        }
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 175 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = NULL;
                        }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 182 "pascal.y" /* yacc.c:1646  */
    {
			  if(parameter_mode == 1)
			    { (yyvsp[-1].symb)->token_type_1 = T_PARAM; param_count++; }
			  else (yyvsp[-1].symb)->token_type_1 = T_LOCAL;

			  if(parameter_mode == 1){
			    param = get_param();
			    param->param_symb = (yyvsp[-1].symb);
			    param->next = parameter_list;
			    parameter_list = param;			   
			  }

			  (yyval.decl_type).data_type = (yyvsp[0].decl_type).data_type;
			  (yyval.decl_type).token_type_1 = (yyvsp[0].decl_type).token_type_1;
			  (yyval.decl_type).token_type_2 = (yyvsp[0].decl_type).token_type_2;

			  (yyval.decl_type).size = (yyvsp[-1].symb)->size = (yyvsp[0].decl_type).size;
			  (yyval.decl_type).dimensions = (yyvsp[-1].symb)->dimensions = (yyvsp[0].decl_type).dimensions;
			  (yyval.decl_type).dimension_list = (yyvsp[-1].symb)->dimension_list = (yyvsp[0].decl_type).dimension_list;
			  (yyvsp[-1].symb)->line = line_count;

			  (yyvsp[-1].symb)->token_type_2 = (yyvsp[0].decl_type).token_type_2;

			  if((yyvsp[0].decl_type).token_type_2 == T_ARRAY){
			    (yyvsp[-1].symb)->token_type_2 = (yyvsp[0].decl_type).token_type_2;
			    (yyvsp[-1].symb)->c = (yyvsp[0].decl_type).c;
			    (yyval.decl_type).c = (yyvsp[0].decl_type).c;
			    (yyvsp[-1].symb)->size = (yyvsp[0].decl_type).elements * (yyvsp[0].decl_type).size;
			    (yyval.decl_type).elements = (yyvsp[0].decl_type).elements;
			  }
			  else {
			    (yyvsp[-1].symb)->token_type_2 = T_VAR;
			    (yyvsp[-1].symb)->size = (yyvsp[0].decl_type).size;
			  }

			  (yyvsp[-1].symb)->data_type = (yyvsp[0].decl_type).data_type;
			  pop_offset(&offset_stack, &offset);
			  (yyvsp[-1].symb)->offset = offset;
			  offset = offset + (yyvsp[-1].symb)->size;
			  push_offset(&offset_stack, offset);

                         if(p_tac1 != NULL){
			    TAC* temp_tac = declare_var((yyvsp[-1].symb));
			    p_tac1 = join_tac(temp_tac, p_tac1);		    
			  }
			  else{
			    p_tac1 = declare_var((yyvsp[-1].symb));
			  }			
			}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 233 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.decl_type) = (yyvsp[0].decl_type);
			}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 239 "pascal.y" /* yacc.c:1646  */
    {
                          if(parameter_mode == 1)
                            { (yyvsp[-1].symb)->token_type_1 = T_PARAM; param_count++; }
                          else (yyvsp[-1].symb)->token_type_1 = T_LOCAL;

                          if(parameter_mode == 1){
                            param = get_param();
                            param->param_symb = (yyvsp[-1].symb);
                            param->next = parameter_list;
                            parameter_list = param;
                          }

                          (yyvsp[-1].symb)->line = line_count;
                          if((yyvsp[0].decl_type).token_type_2 == T_ARRAY){
                            (yyvsp[-1].symb)->token_type_2 = (yyvsp[0].decl_type).token_type_2;
                            (yyvsp[-1].symb)->c = (yyvsp[0].decl_type).c;
                            (yyvsp[-1].symb)->size = (yyvsp[0].decl_type).elements * (yyvsp[0].decl_type).size;
                          }

                          else {
                          (yyvsp[-1].symb)->token_type_2 = T_VAR;
                          (yyvsp[-1].symb)->offset = offset;
                          (yyvsp[-1].symb)->size = (yyvsp[0].decl_type).size;
                          }

                          (yyvsp[-1].symb)->data_type = (yyvsp[0].decl_type).data_type;
                          (yyvsp[-1].symb)->dimensions = (yyvsp[0].decl_type).dimensions;
                          (yyvsp[-1].symb)->dimension_list = (yyvsp[0].decl_type).dimension_list;

                          pop_offset(&offset_stack, &offset);
                          (yyvsp[-1].symb)->offset = offset;
                          offset = offset + (yyvsp[-1].symb)->size;
                          push_offset(&offset_stack, offset);

			  if(p_tac1 != NULL){
			    TAC* temp_tac = declare_var((yyvsp[-1].symb));		    
			    (yyval.tac) = join_tac(temp_tac, p_tac1);		    
			    p_tac1 = NULL;			    
			  }
			  else{
			    (yyval.tac) = declare_var((yyvsp[-1].symb));
			  }			  
                        }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 285 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = join_tac((yyvsp[-3].tac), (yyvsp[-1].tac));			  
                        }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 289 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = (yyvsp[-1].tac);			  
			}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 294 "pascal.y" /* yacc.c:1646  */
    { (yyval.decl_type) = (yyvsp[0].decl_type); }
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 296 "pascal.y" /* yacc.c:1646  */
    {
			   (yyval.decl_type).token_type_2 = T_ARRAY;
			   (yyval.decl_type).data_type = (yyvsp[0].decl_type).data_type;			   
			   (yyval.decl_type).size = (yyvsp[0].decl_type).size;
			   (yyval.decl_type).elements = (yyvsp[-3].dim_type)->node_elements;
			   DIM_TYPE *temp = (yyvsp[-3].dim_type);
			   while(temp->next != NULL){
			     temp = temp->next;
			     (yyval.decl_type).elements *= temp->node_elements;                            
                            }			   
			   (yyval.decl_type).dimensions = (yyvsp[-3].dim_type)->dimension;
			   (yyval.decl_type).dimension_list = (yyvsp[-3].dim_type); 
			   (yyval.decl_type).c = calculate_c((yyvsp[-3].dim_type), (yyvsp[0].decl_type).size);
                        }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 313 "pascal.y" /* yacc.c:1646  */
    {
                          (yyval.decl_type).data_type = T_INT;
                          (yyval.decl_type).size = SIZEOF_INT;
                          (yyval.decl_type).dimensions = 0;
                          (yyval.decl_type).dimension_list = NULL;
                        }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 321 "pascal.y" /* yacc.c:1646  */
    {
                          (yyval.decl_type).data_type = T_REAL;
                          (yyval.decl_type).size = SIZEOF_REAL;
                          (yyval.decl_type).dimensions = 0;
                          (yyval.decl_type).dimension_list = NULL;
                        }
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 330 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = join_tac((yyvsp[-1].tac), (yyvsp[0].tac));			  
                        }
#line 1737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 334 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.tac) = NULL;
                        }
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 340 "pascal.y" /* yacc.c:1646  */
    {
                          pop_table(&symbol_table_stack, &table_pointer);
                          pop_offset(&offset_stack, &offset);
                          table_pointer->width = offset;
			  
			  //make a function TAC
			  if((yyvsp[-4].symb)->token_type_2 == T_FUNC){
			    TAC *temp1 = join_tac((yyvsp[-3].tac), (yyvsp[-1].tac));			    

			    //make the param tac list
			    PARAM_TYPE *temp2 = get_param();
			    temp2 = (yyvsp[-4].symb)->parameter_list;
			    TAC *temp3 = NULL;
			    TAC *temp4 = NULL;
			    if(temp2 != NULL){

			      temp3 = (TAC*)mktac(TAC_ARG, (SYMB*)temp2->param_symb, NULL, NULL);
			      while(temp2->next != NULL){
				temp2 = temp2->next;
				temp4 = (TAC*)mktac(TAC_ARG, (SYMB*)temp2->param_symb, NULL, NULL);
				temp3 = join_tac(temp4, temp3);
			      }
			    }
			    TAC *temp5 = do_func((yyvsp[-4].symb), temp3, temp1);
			    (yyval.tac) = join_tac(temp5, (yyvsp[-2].tac));
			    p_tac2 = NULL;
			  }

			  //make a procedure TAC
			  if((yyvsp[-4].symb)->token_type_2 == T_PROC){
			    TAC *temp1 = join_tac((yyvsp[-3].tac), (yyvsp[-1].tac));			    

			    //make the param tac list
			    PARAM_TYPE *temp2 = get_param();
			    temp2 = (yyvsp[-4].symb)->parameter_list;
			    TAC *temp3 = NULL;
			    TAC *temp4 = NULL;
			    if(temp2 != NULL){

			      temp3 = (TAC*)mktac(TAC_ARG, (SYMB*)temp2->param_symb, NULL, NULL);
			      while(temp2->next != NULL){
				temp2 = (PARAM_TYPE*)temp2->next;
				temp4 = (TAC*)mktac(TAC_ARG, (SYMB*)temp2->param_symb, NULL, NULL);
				temp3 = join_tac(temp4, temp3);
			      }
			    }
			    TAC *temp5 = do_proc((yyvsp[-4].symb), temp3, temp1);
			    (yyval.tac) = join_tac(temp5, (yyvsp[-2].tac));
			    p_tac2 = NULL;
			  }
			  global_nesting_depth--;			  
                        }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 395 "pascal.y" /* yacc.c:1646  */
    {			   
			  (yyvsp[-5].symb)->line = line_count;
			  (yyvsp[-5].symb)->token_type_1 = T_SELF;
			  (yyvsp[-5].symb)->token_type_2 = T_FUNC;
			  (yyvsp[-5].symb)->data_type = (yyvsp[-1].decl_type).data_type;
			  (yyvsp[-5].symb)->function_st_ptr = table_ptr;
			  table_ptr->name = (yyvsp[-5].symb)->name;
			  (yyvsp[-5].symb)->parameter_list = parameter_list;
			  (yyvsp[-5].symb)->nesting_depth = global_nesting_depth;

			  //make the functions label at this time
			  TAC *label = (TAC*)mktac(TAC_LABEL, (SYMB*)make_label(next_label++), NULL, NULL);
			  (yyvsp[-5].symb)->label = label;
			  //make a local symb for function return value
			  mkname(table_ptr, (yyvsp[-5].symb)->name, T_RETURN);
			  SYMB *t = lookup(table_ptr, (yyvsp[-5].symb)->name);			  
			  t->label = label;			  

			  (yyval.symb) = (yyvsp[-5].symb);
                        }
#line 1827 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 416 "pascal.y" /* yacc.c:1646  */
    {
			  (yyvsp[-3].symb)->line = line_count;
			  (yyvsp[-3].symb)->token_type_1 = T_SELF;
			  (yyvsp[-3].symb)->token_type_2 = T_PROC;
			  (yyvsp[-3].symb)->data_type = T_UNDEF;
			  (yyvsp[-3].symb)->function_st_ptr = table_ptr;
			  table_ptr->name = (yyvsp[-3].symb)->name;
			  (yyvsp[-3].symb)->parameter_list = parameter_list;
			  (yyvsp[-3].symb)->nesting_depth = global_nesting_depth;

			  TAC *label = (TAC*)mktac(TAC_LABEL, (SYMB*)make_label(next_label++), NULL, NULL);
			  (yyvsp[-3].symb)->label = label;
			  (yyval.symb) = (yyvsp[-3].symb); 
                        }
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 433 "pascal.y" /* yacc.c:1646  */
    {
                          table_ptr = mktable(table_ptr);
                          push_table(&symbol_table_stack, table_ptr);
                          push_offset(&offset_stack, offset);
			  global_nesting_depth++;
                          parameter_mode = 0;			  
                        }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 443 "pascal.y" /* yacc.c:1646  */
    {
			  top_table(&symbol_table_stack, &table_pointer);
			  table_pointer->parameters = param_count;
			  table_pointer->parameter_list = parameter_list;
			  parameter_mode = 0;			  
			  (yyval.symb) = (yyvsp[-1].symb);
                        }
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 451 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.symb) = NULL;
                        }
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 457 "pascal.y" /* yacc.c:1646  */
    { parameter_mode = 1; param_count = 0; parameter_list = NULL; }
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 460 "pascal.y" /* yacc.c:1646  */
    { 			 
			  (yyval.symb) = (yyvsp[-2].symb);
                        }
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 464 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.symb) = (yyvsp[0].tac)->a.var; 
			}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 470 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = (yyvsp[-2].tac);
                        }
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 475 "pascal.y" /* yacc.c:1646  */
    { block_depth++; executable_statement_mode = 1; }
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 476 "pascal.y" /* yacc.c:1646  */
    { if(--block_depth == 0) executable_statement_mode = 0; }
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 480 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = NULL;
                        }
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 487 "pascal.y" /* yacc.c:1646  */
    {
			  DIM_TYPE *dim = (DIM_TYPE*)safe_malloc(sizeof(DIM_TYPE));
			  (yyvsp[-2].symb)->int_value = atoi((yyvsp[-2].symb)->name);
			  (yyvsp[0].symb)->int_value = atoi((yyvsp[0].symb)->name);
			  dim->high = (yyvsp[0].symb)->int_value;
			  dim->low = (yyvsp[-2].symb)->int_value;
			  dim->prev = NULL;
			  dim->next = (yyval.dim_type);
			  dim->node_elements = dim->high - dim->low + 1;
			  
			  (yyval.dim_type)->prev = dim;
			  (yyval.dim_type) = dim;
			  (yyval.dim_type)->dimension = (yyval.dim_type)->next->dimension + 1;
			}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 502 "pascal.y" /* yacc.c:1646  */
    {
			  DIM_TYPE *dim = (DIM_TYPE*)malloc(sizeof(DIM_TYPE));
			  dim->dimension = 1;
			  (yyvsp[-2].symb)->int_value = atoi((yyvsp[-2].symb)->name);
                          (yyvsp[0].symb)->int_value = atoi((yyvsp[0].symb)->name);
			  dim->high = (yyvsp[0].symb)->int_value;
			  dim->low = (yyvsp[-2].symb)->int_value;
			  dim->prev = NULL;
			  dim->next = NULL;
			  dim->node_elements = dim->high - dim->low + 1;
			  (yyval.dim_type) = dim;
			}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 518 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = join_tac((yyvsp[-2].tac), (yyvsp[0].tac));
                        }
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 524 "pascal.y" /* yacc.c:1646  */
    {
			   if((yyvsp[-2].enode)->offset == NULL)
			     (yyval.tac) = do_assign((yyvsp[-2].enode)->res, (yyvsp[0].enode));
			   else				     
			     (yyval.tac) = do_assign_offset((yyvsp[-2].enode), (yyvsp[0].enode));
                        }
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 533 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = do_test((yyvsp[-4].enode), (yyvsp[-2].tac), (yyvsp[0].tac));
			}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 537 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = do_while((yyvsp[-2].enode), (yyvsp[0].tac));
			}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 541 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.tac) = do_print((yyvsp[0].enode));
			}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 549 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.tac) = call_proc((yyvsp[-1].symb), (yyvsp[0].enode));			  
                        }
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 555 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = (yyvsp[-1].enode);
                        }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 561 "pascal.y" /* yacc.c:1646  */
    {
			  (yyvsp[-2].enode)->next = (yyvsp[0].enode);
			  (yyval.enode) = (yyvsp[-2].enode);
                        }
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 566 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = (yyvsp[0].enode);
                        }
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 573 "pascal.y" /* yacc.c:1646  */
    {
			   (yyvsp[-2].enode)->next = (yyvsp[0].enode);
			   (yyval.enode) = (yyvsp[-2].enode);
                        }
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 580 "pascal.y" /* yacc.c:1646  */
    {			  
			  int m = (yyvsp[-2].enode)->ndim + 1;
			  int l = limit((yyvsp[-2].enode)->array, m);
			  SYMB *limit = (SYMB*)safe_malloc(sizeof(SYMB));
			  limit->int_value = l;
			  limit->token_type_2 = T_INT;

			  TAC *temp1 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);
			  TAC *temp2 = (TAC*)mktac(TAC_MUL, temp1->a.var, (yyvsp[-2].enode)->res, limit);
			  TAC *temp3 = (TAC*)mktac(TAC_ADD, temp1->a.var, temp1->a.var, (yyvsp[0].enode)->res);
			  TAC *temp4 = join_tac(temp1, temp2);
			  TAC *temp5 = join_tac(temp4, temp3);			  
			  (yyval.enode) = make_enode(NULL, temp1->a.var, temp5);
			  (yyval.enode)->array = (yyvsp[-2].enode)->array;
			  (yyval.enode)->ndim = m;			   
                        }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 597 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = make_enode(NULL, (yyvsp[0].enode)->res, (yyvsp[0].enode)->tac);
			  (yyval.enode)->array = (yyvsp[-2].symb);			  
			  (yyval.enode)->ndim = 1;
                        }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 606 "pascal.y" /* yacc.c:1646  */
    {
			  if((yyvsp[0].enode)->offset == NULL)
			    (yyval.enode) = (yyvsp[0].enode);
			  else{
			    TAC *temp1 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);
			    TAC *temp2 = (TAC*)mktac(TAC_OFFSET, temp1->a.var, (yyvsp[0].enode)->res, (yyvsp[0].enode)->offset);
			    TAC *temp3 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);
			    TAC *temp4 = (TAC*)mktac(TAC_COPY, temp3->a.var, temp1->a.var, NULL);
			    TAC *temp5 = join_tac(temp1, temp2);
			    TAC *temp6 = join_tac(temp5, temp3);
			    TAC *temp7 = join_tac(temp6, temp4);
			    TAC *temp8 = join_tac((yyvsp[0].enode)->tac, temp7);
			    (yyval.enode) = make_enode(NULL, temp3->a.var, temp8);
			    (yyval.enode)->offset = (yyvsp[0].enode)->offset;			    
			  }
                        }
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 623 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_EQUAL, (yyvsp[-2].enode), (yyvsp[0].enode));
                        }
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 627 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_NE, (yyvsp[-2].enode), (yyvsp[0].enode));
			}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 631 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_GE, (yyvsp[-2].enode), (yyvsp[0].enode));
			}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 635 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_LE, (yyvsp[-2].enode), (yyvsp[0].enode));
			}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 639 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_LESSTHAN, (yyvsp[-2].enode), (yyvsp[0].enode));
			}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 643 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_relop(TAC_GRTRTHAN, (yyvsp[-2].enode), (yyvsp[0].enode));
			}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 649 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = make_enode(NULL, (yyvsp[0].symb), NULL);
			  (yyval.enode)->offset = NULL;
                        }
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 654 "pascal.y" /* yacc.c:1646  */
    {
			  TAC *temp1 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);
			  ENODE *final = make_enode(NULL, temp1->a.var, NULL);
			  (yyval.enode) = final;		  

			  SYMB *c = (SYMB*)safe_malloc(sizeof(SYMB));
			  c->token_type_2 = T_INT;
			  c->int_value = (yyvsp[-1].enode)->array->c;			  
			  TAC *temp2 = (TAC*)mktac(TAC_COPY, (yyval.enode)->res, c, NULL);

			  SYMB *width = (SYMB*)safe_malloc(sizeof(SYMB));			  
			  if((yyvsp[-1].enode)->array->data_type == T_INT){
			    width->token_type_2 = T_INT;
			    width->int_value = SIZEOF_INT;
			  }
			  if((yyvsp[-1].enode)->array->data_type == T_REAL){
			    width->token_type_2 = T_REAL;
			    width->dbl_value = SIZEOF_REAL;
			  }
			  TAC *temp3 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);
			  TAC *temp4 = (TAC*)mktac(TAC_MUL, temp3->a.var, (yyvsp[-1].enode)->res, width);
			  TAC *temp5 = (TAC*)mktac(TAC_VAR, (SYMB*)mktmp(), NULL, NULL);	  
			  TAC *temp6 = (TAC*)mktac(TAC_COPY, temp5->a.var, temp4->a.var, NULL);
			  TAC *temp7 = join_tac(temp1, temp2);			  
			  TAC *temp8 = join_tac(temp7, temp3);			  
			  TAC *temp9 = join_tac(temp8, temp4);			  
			  TAC *temp10 = join_tac(temp9, temp5);
			  TAC *temp11 = join_tac(temp10, temp6);
			  TAC *temp12 = join_tac((yyvsp[-1].enode)->tac, temp11);
			  (yyval.enode)->offset = temp5->a.var;			  
			  (yyval.enode)->tac = temp12;			  
			}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 690 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_unary(TAC_POS, (yyvsp[0].enode), table_pointer);
                        }
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 694 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.enode) = do_unary(TAC_NEG, (yyvsp[0].enode), table_pointer);
			}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 698 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.enode) = do_bin(TAC_ADD, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
                        }
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 702 "pascal.y" /* yacc.c:1646  */
    {			  
			  (yyval.enode) = do_bin(TAC_SUB, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
			}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 706 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_OR, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
			}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 713 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_MUL, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
                        }
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 717 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_DIV, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
			}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 721 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_TDIV, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);	  
			}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 725 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_MOD, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
			}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 729 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_bin(TAC_AND, (yyvsp[-2].enode), (yyvsp[0].enode), table_pointer);
			}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 735 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = make_enode(NULL, (yyvsp[0].symb), NULL);
                        }
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 739 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = call_func((yyvsp[-3].symb), (yyvsp[-1].enode));
			}
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 743 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = make_enode(NULL, (yyvsp[0].symb), NULL);			  
                        }
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 747 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = make_enode(NULL, (yyvsp[0].symb), NULL);
                        }
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 751 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = (yyvsp[-1].enode);
			}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 755 "pascal.y" /* yacc.c:1646  */
    {
			  (yyval.enode) = do_unary(TAC_NOT, (yyvsp[0].enode), table_pointer);
			}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2327 "y.tab.c" /* yacc.c:1646  */
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
#line 760 "pascal.y" /* yacc.c:1906  */


