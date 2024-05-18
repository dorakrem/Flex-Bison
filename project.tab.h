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

#ifndef YY_YY_PROJECT_TAB_H_INCLUDED
# define YY_YY_PROJECT_TAB_H_INCLUDED
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
    TK_LINEARLAYOUT = 258,
    TK_RELATIVELAYOUT = 259,
    TK_TEXTVIEW = 260,
    TK_IMAGEVIEW = 261,
    TK_BUTTON = 262,
    TK_RADIOGROUP = 263,
    TK_RADIOBUTTON = 264,
    TK_PROGRESSBAR = 265,
    TK_ANDROID = 266,
    TK_LAYOUT = 267,
    TK_WIDTH = 268,
    TK_HEIGHT = 269,
    TK_ORIENTATION = 270,
    TK_ID = 271,
    TK_TEXT = 272,
    TK_TEXTCOLOR = 273,
    TK_PADDING = 274,
    TK_SRC = 275,
    TK_CHECKEDBUTTON = 276,
    TK_MAX = 277,
    TK_PROGRESS = 278,
    TK_START = 279,
    TK_END = 280,
    TK_SL = 281,
    TK_EQUAL = 282,
    TK_COLON = 283,
    TK_US = 284,
    TK_QM = 285,
    STRING = 286,
    POS_INT = 287,
    TK_RBNUM = 288,
    WRAPCONTENT = 289,
    MATCHPARENT = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "project.y" /* yacc.c:1909  */

    char *str;
    int num;

#line 95 "project.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROJECT_TAB_H_INCLUDED  */
