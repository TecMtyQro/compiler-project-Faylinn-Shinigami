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
#line 58 "pascal.y" /* yacc.c:1909  */

  SYMB      *symb;
  DECL_TYPE  decl_type;
  DIM_TYPE  *dim_type;
  TAC       *tac;
  ENODE     *enode;

#line 164 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
