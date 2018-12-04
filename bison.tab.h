
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     id = 258,
     num = 259,
     le_oprtr = 260,
     ge_oprtr = 261,
     l_oprtr = 262,
     g_oprtr = 263,
     mns_oprtr = 264,
     plus_oprtr = 265,
     div_oprtr = 266,
     mult_oprtr_oprtr = 267,
     T_int = 268,
     fun_main = 269,
     fbs = 270,
     fbe = 271,
     sbs = 272,
     sbe = 273,
     sem_col = 274,
     com = 275,
     equ_oprtr = 276,
     mult_oprtr = 277,
     con_if = 278,
     con_else = 279,
     con_elseif = 280,
     lp_for = 281,
     inc = 282,
     lp_lim = 283,
     con_swi = 284,
     con_swi_def = 285,
     con_swi_col = 286,
     equequ_oprtr = 287,
     IFX = 288,
     SH = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 64 "bison.y"

  char memo[1000];
  int val;



/* Line 1676 of yacc.c  */
#line 93 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


