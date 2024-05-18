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
#line 1 "project.y" /* yacc.c:339  */

#define _GNU_SOURCE
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char const *S);
extern int yylineno;
extern int lineNumber;
extern char* yytext;
extern FILE *yyin;
int yylex();

int num_radio_buttons = 0;
int global_rbnum;

int global_max;
int global_progress;
int global_padding;
int global_buttonpadding;

char* relativeid;
char* linearid;
char* textviewid;
char* imageviewid;
char* buttonid;
char* progressbarid;
char* radiogroupid;
char* radiobuttonid;
char* firstradiobuttonid;
char* global_checkedbutton; 


#line 101 "project.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "project.tab.h".  */
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
#line 37 "project.y" /* yacc.c:355  */

    char *str;
    int num;

#line 182 "project.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROJECT_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 199 "project.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   384

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  362

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    83,    83,    83,    87,    88,    88,    92,    93,    93,
     100,   101,   104,   104,   104,   107,   108,   109,   109,   110,
     114,   115,   119,   120,   124,   124,   124,   124,   124,   124,
     124,   126,   127,   132,   133,   134,   134,   135,   139,   140,
     145,   146,   147,   147,   148,   148,   152,   153,   158,   159,
     160,   160,   161,   161,   166,   166,   167,   167,   172,   173,
     173,   182,   183,   184,   184,   185,   185,   190,   191,   191,
     195,   196,   201,   202,   204,   205,   206
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_LINEARLAYOUT", "TK_RELATIVELAYOUT",
  "TK_TEXTVIEW", "TK_IMAGEVIEW", "TK_BUTTON", "TK_RADIOGROUP",
  "TK_RADIOBUTTON", "TK_PROGRESSBAR", "TK_ANDROID", "TK_LAYOUT",
  "TK_WIDTH", "TK_HEIGHT", "TK_ORIENTATION", "TK_ID", "TK_TEXT",
  "TK_TEXTCOLOR", "TK_PADDING", "TK_SRC", "TK_CHECKEDBUTTON", "TK_MAX",
  "TK_PROGRESS", "TK_START", "TK_END", "TK_SL", "TK_EQUAL", "TK_COLON",
  "TK_US", "TK_QM", "STRING", "POS_INT", "TK_RBNUM", "WRAPCONTENT",
  "MATCHPARENT", "$accept", "root", "Relative_Layout", "$@1", "$@2",
  "Linear_Layout", "type", "optional_attributes_Linear", "$@3",
  "Content_Relative", "Content_Linear", "Content", "Text_View",
  "optional_attributes_TextView", "$@4", "Image_View",
  "optional_attributes_ImageView", "$@5", "$@6", "button",
  "optional_attributes_Button", "$@7", "$@8", "Radio_Group", "$@9", "$@10",
  "RadioButtons", "$@11", "optional_attributes_RadioGroup", "$@12", "$@13",
  "Radio_Button", "$@14", "Progress_Bar",
  "optional_attributes_ProgressBar", "optional_attributes", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF -184

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    36,    13,  -184,  -184,    50,    68,  -184,    23,    35,
      69,    71,    57,    70,    83,    84,    73,    74,    55,    55,
    -184,  -184,  -184,    87,    91,    75,    77,    92,    94,    79,
      80,    93,   101,    89,    90,    55,    55,   -10,     3,    95,
      96,    97,    98,    96,    99,    78,    67,  -184,  -184,   103,
    -184,  -184,  -184,  -184,  -184,  -184,    96,   102,   104,  -184,
    -184,   105,   106,   108,   110,   114,   118,   119,    16,  -184,
     107,   109,    28,  -184,   111,   112,   113,   116,   117,   120,
     121,   131,    40,   115,   133,   124,   127,   128,   135,   138,
     139,   145,   134,   136,   132,   137,   140,   149,   141,   142,
     143,   144,   146,  -184,   151,   152,   148,  -184,   147,   150,
     153,   154,   156,   166,   167,  -184,    96,   157,   158,   168,
     159,   160,   161,   162,   163,   169,  -184,   130,   164,    55,
      55,    55,    55,    55,    52,  -184,   165,   170,   173,   181,
     183,   184,   193,  -184,   171,   172,   174,   175,   176,   180,
     186,   189,   194,   195,   196,  -184,   182,   185,   187,   188,
     190,   198,   199,   201,   204,   206,   197,   200,   202,   203,
     205,    55,    55,    55,    55,    55,   210,   211,   212,   214,
      26,   207,   208,   209,   213,   215,   217,   218,   220,   192,
     219,   216,   177,   -11,  -184,   221,  -184,   222,   223,   224,
     225,   226,   227,   228,  -184,   229,   230,   231,   232,   234,
     235,   236,    38,    42,    54,   237,  -184,  -184,  -184,   238,
     233,   243,   242,   246,   247,   244,   249,   250,   252,   245,
     -12,  -184,   253,    72,  -184,   254,    76,  -184,   255,   239,
     256,   257,   248,   258,  -184,   259,   260,  -184,   261,   262,
    -184,   155,   266,  -184,   -14,   239,   263,   264,   265,   251,
     267,   268,   270,    -1,  -184,   272,   274,   269,   280,   281,
     286,   291,   292,   293,   277,   298,  -184,   276,   278,     1,
     299,   283,   301,   302,   303,   304,   305,   294,   307,   309,
     308,   295,   241,   296,   297,   300,   306,   310,  -184,   311,
     316,   312,   313,   314,   240,   317,   319,   320,   322,   315,
     318,  -184,   321,   290,   323,   324,   325,   326,   327,   328,
     329,   330,  -184,   331,   333,   334,   336,    55,   332,   335,
    -184,  -184,  -184,  -184,  -184,   344,   337,   338,   342,  -184,
    -184,   345,   343,   346,   347,    55,   354,   348,   339,   350,
     340,    56,   351,   353,   357,  -184,   355,   349,  -184,   358,
     356,  -184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     2,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
      22,    26,    27,    28,    29,    30,     0,     0,     0,    20,
       7,     0,     0,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,    21,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    15,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     4,     0,     0,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,    19,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,    70,     0,    73,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,    74,    75,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,    38,     0,     0,    46,     0,     0,
       0,     0,     0,     0,    32,     0,     0,    39,     0,     0,
      47,     0,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,    33,    34,
      40,    41,    48,    49,     0,     0,    60,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,     0,     0,     0,
      36,    43,    45,    51,    53,     0,     0,     0,     0,    64,
      66,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     0,     0,    68,     0,
       0,    69
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   375,  -184,  -184,   383,   -19,  -184,  -184,    49,
     178,   -40,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,   -29,  -184,  -184,  -184,
    -184,  -183,  -184,  -184,    59,  -184
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    47,   105,   106,    48,    23,    41,    97,    58,
      49,    50,    51,   221,   280,    52,   224,   282,   283,    53,
     227,   284,   285,    54,   228,   229,   252,   276,   241,   299,
     300,   253,   359,    55,   187,   188
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,    39,   265,    59,   242,   201,   243,   266,   262,    69,
     262,   202,   203,     7,    42,    40,    37,    38,    73,     5,
       6,    63,    64,    65,    66,   275,    67,   290,    43,    44,
      69,     5,     6,    63,    64,    65,    66,   185,    67,     5,
       6,     1,    81,     5,     6,    63,    64,    65,    66,   219,
      67,    10,   186,   222,    84,     5,     6,    63,    64,    65,
      66,     8,    67,    11,   220,   225,    93,   352,   223,   264,
       5,     6,    63,    64,    65,    66,    59,    67,   142,     9,
     226,    12,   353,    13,   264,    73,    14,    20,   245,    21,
      22,   246,   248,    61,    62,   249,    16,    17,    25,    15,
      18,    19,    26,    27,    29,    28,    30,    33,    31,    32,
     137,   138,   139,   140,   141,    34,    35,    36,    71,    76,
      46,    77,    56,    45,    60,    78,    57,    68,    72,    79,
      80,    82,    74,    75,    92,    96,    83,    95,   -17,   104,
      98,    87,    85,    86,    88,    89,    94,    99,    90,    91,
     100,   101,   176,   177,   178,   179,   180,   102,    -8,   103,
     109,   135,   107,   118,   262,   125,   120,   121,   108,   122,
     110,   111,   112,   113,   117,   114,   115,   116,   119,   123,
     124,   144,   126,   128,   145,   127,   129,   130,   131,   132,
     133,   136,   146,   134,   147,   148,   143,   149,   156,   150,
     151,   157,   152,   153,   154,   155,   158,   159,   160,   197,
     200,   161,   166,   167,   162,   168,   163,   164,   169,   165,
     170,   181,   182,   183,   171,   184,   267,   172,     0,   173,
     174,   185,   175,   199,    70,   189,   190,   191,     0,   198,
       0,   192,   194,   193,   195,     0,   204,   196,   -56,   205,
     206,   207,   208,   209,   210,   211,   240,   303,   231,   314,
     212,   213,   214,   251,   215,   216,   230,   217,   218,   232,
     233,   234,   236,   235,   237,   256,   238,   239,   244,   247,
     250,   274,   255,   271,   254,   257,   258,   259,   260,   261,
     263,   -35,   281,   279,   268,   269,   270,   -42,   272,   277,
     273,   278,   -44,   -50,   -52,   286,   287,   288,   335,   289,
     291,   292,   293,   294,   295,   296,   301,   297,   -63,   298,
     -65,   322,   309,   302,   304,   305,   346,   310,   306,     0,
       0,   312,     0,   315,   307,   318,   317,   311,   316,   308,
       0,   313,     0,   319,     0,   329,   320,     0,   321,   328,
     323,   324,   325,   326,   327,   338,   349,   342,     0,   336,
     344,   330,   337,   331,   332,   347,   333,   334,   339,   340,
     341,   351,   343,   356,   345,     3,   348,   350,   355,   354,
     358,   361,   357,     4,   360
};

static const yytype_int16 yycheck[] =
{
      19,    11,    16,    43,    16,    16,    18,    21,     9,    49,
       9,    22,    23,     0,    11,    25,    35,    36,    58,     3,
       4,     5,     6,     7,     8,    26,    10,    26,    25,    26,
      70,     3,     4,     5,     6,     7,     8,    11,    10,     3,
       4,    24,    26,     3,     4,     5,     6,     7,     8,    11,
      10,    28,    26,    11,    26,     3,     4,     5,     6,     7,
       8,    11,    10,    28,    26,    11,    26,    11,    26,   252,
       3,     4,     5,     6,     7,     8,   116,    10,    26,    11,
      26,    12,    26,    12,   267,   125,    29,    32,    16,    34,
      35,    19,    16,    15,    16,    19,    13,    13,    11,    29,
      27,    27,    11,    28,    12,    28,    12,    14,    29,    29,
     129,   130,   131,   132,   133,    14,    27,    27,    16,    11,
      24,    11,    25,    28,    25,    11,    28,    24,    24,    11,
      11,    24,    27,    27,     3,    11,    27,     4,    11,     3,
      12,    28,    31,    31,    28,    28,    31,    12,    28,    28,
      12,    12,   171,   172,   173,   174,   175,    12,    26,    25,
      11,    31,    25,    16,     9,   116,    13,    13,    28,    13,
      29,    29,    29,    29,    26,    29,    25,    25,    28,    13,
      13,    11,    25,    15,    11,    27,    27,    27,    27,    27,
      27,    27,    11,    24,    11,    11,    31,     4,    12,    28,
      28,    12,    28,    28,    28,    25,    12,    12,    12,    17,
      33,    29,    14,    14,    29,    14,    29,    29,    14,    29,
      14,    11,    11,    11,    27,    11,   255,    27,    -1,    27,
      27,    11,    27,    17,    56,    28,    28,    28,    -1,    20,
      -1,    28,    25,    28,    26,    -1,    25,   188,    11,    27,
      27,    27,    27,    27,    27,    27,    11,    16,    25,    19,
      31,    31,    31,    24,    32,    31,    28,    32,    32,    26,
      28,    25,    28,    26,    25,    27,    26,    25,    25,    25,
      25,    11,    25,    32,    28,    27,    27,    27,    27,    27,
      24,    11,    11,    24,    31,    31,    31,    11,    31,    27,
      32,    27,    11,    11,    11,    28,     8,    31,   327,    31,
      11,    28,    11,    11,    11,    11,     8,    12,    11,    25,
      11,    31,    11,    28,    28,    28,   345,    11,    28,    -1,
      -1,    18,    -1,    16,    28,    13,    16,    25,    19,    29,
      -1,    27,    -1,    28,    -1,    16,    28,    -1,    27,    21,
      27,    27,    27,    27,    27,    11,    17,    12,    -1,    27,
      14,    31,    27,    32,    31,    11,    32,    31,    31,    31,
      28,    31,    29,    16,    27,     0,    28,    27,    25,    28,
      31,    25,    27,     0,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    24,    37,    38,    41,     3,     4,     0,    11,    11,
      28,    28,    12,    12,    29,    29,    13,    13,    27,    27,
      32,    34,    35,    42,    42,    11,    11,    28,    28,    12,
      12,    29,    29,    14,    14,    27,    27,    42,    42,    11,
      25,    43,    11,    25,    26,    28,    24,    38,    41,    46,
      47,    48,    51,    55,    59,    69,    25,    28,    45,    47,
      25,    15,    16,     5,     6,     7,     8,    10,    24,    47,
      46,    16,    24,    47,    27,    27,    11,    11,    11,    11,
      11,    26,    24,    27,    26,    31,    31,    28,    28,    28,
      28,    28,     3,    26,    31,     4,    11,    44,    12,    12,
      12,    12,    12,    25,     3,    39,    40,    25,    28,    11,
      29,    29,    29,    29,    29,    25,    25,    26,    16,    28,
      13,    13,    13,    13,    13,    45,    25,    27,    15,    27,
      27,    27,    27,    27,    24,    31,    27,    42,    42,    42,
      42,    42,    26,    31,    11,    11,    11,    11,    11,     4,
      28,    28,    28,    28,    28,    25,    12,    12,    12,    12,
      12,    29,    29,    29,    29,    29,    14,    14,    14,    14,
      14,    27,    27,    27,    27,    27,    42,    42,    42,    42,
      42,    11,    11,    11,    11,    11,    26,    70,    71,    28,
      28,    28,    28,    28,    25,    26,    70,    17,    20,    17,
      33,    16,    22,    23,    25,    27,    27,    27,    27,    27,
      27,    27,    31,    31,    31,    32,    31,    32,    32,    11,
      26,    49,    11,    26,    52,    11,    26,    56,    60,    61,
      28,    25,    26,    28,    25,    26,    28,    25,    26,    25,
      11,    64,    16,    18,    25,    16,    19,    25,    16,    19,
      25,    24,    62,    67,    28,    25,    27,    27,    27,    27,
      27,    27,     9,    24,    67,    16,    21,    62,    31,    31,
      31,    32,    31,    32,    11,    26,    63,    27,    27,    24,
      50,    11,    53,    54,    57,    58,    28,     8,    31,    31,
      26,    11,    28,    11,    11,    11,    11,    12,    25,    65,
      66,     8,    28,    16,    28,    28,    28,    28,    29,    11,
      11,    25,    18,    27,    19,    16,    19,    16,    13,    28,
      28,    27,    31,    27,    27,    27,    27,    27,    21,    16,
      31,    32,    31,    32,    31,    42,    27,    27,    11,    31,
      31,    28,    12,    29,    14,    27,    42,    11,    28,    17,
      27,    31,    11,    26,    28,    25,    16,    27,    31,    68,
      26,    25
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    36,    37,    37,    38,    39,    38,    38,    40,    38,
      41,    41,    42,    42,    42,    43,    43,    44,    43,    43,
      45,    45,    46,    46,    47,    47,    47,    47,    47,    47,
      47,    48,    48,    49,    49,    50,    49,    49,    51,    51,
      52,    52,    53,    52,    54,    52,    55,    55,    56,    56,
      57,    56,    58,    56,    60,    59,    61,    59,    62,    63,
      62,    64,    64,    65,    64,    66,    64,    67,    68,    67,
      69,    69,    70,    70,    71,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,    22,     0,    28,    18,     0,    24,
      22,    23,     1,     1,     1,     5,     5,     0,    11,    10,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,    23,    24,     5,     5,     0,    11,    10,    23,    24,
       5,     5,     0,    11,     0,    11,    23,    24,     5,     5,
       0,    11,     0,    11,     0,    28,     0,    29,     1,     0,
       3,     5,     5,     0,    11,     0,    11,    23,     0,    29,
      18,    19,     1,     2,     5,     5,     5
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
#line 83 "project.y" /* yacc.c:1646  */
    { printf("\n\nParsing completed successfully\n");}
#line 1496 "project.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 83 "project.y" /* yacc.c:1646  */
    { printf("\n\nParsing completed successfully\n"); }
#line 1502 "project.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "project.y" /* yacc.c:1646  */
    {relativeid=yylval.str;}
#line 1508 "project.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 90 "project.y" /* yacc.c:1646  */
    {if(strcmp(relativeid,textviewid)==0 || strcmp(relativeid,imageviewid)==0 || strcmp(relativeid,buttonid)==0 || strcmp(relativeid,progressbarid)==0 || strcmp(imageviewid,textviewid)==0 || strcmp(imageviewid,buttonid)==0 || strcmp(imageviewid,progressbarid)==0 || strcmp(buttonid,textviewid)==0 || strcmp(buttonid,progressbarid)==0 || strcmp(progressbarid,textviewid)==0 || strcmp(linearid,relativeid)==0 || strcmp(linearid,textviewid)==0 || strcmp(linearid,imageviewid)==0 || strcmp(linearid,buttonid)==0 || strcmp(linearid,progressbarid)==0 ){printf("\n\nError: IDs must be different!");exit(1);};}
#line 1514 "project.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "project.y" /* yacc.c:1646  */
    {relativeid=yylval.str;}
#line 1520 "project.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 95 "project.y" /* yacc.c:1646  */
    {if(strcmp(relativeid,textviewid)==0 || strcmp(relativeid,imageviewid)==0 || strcmp(relativeid,buttonid)==0 || strcmp(relativeid,progressbarid)==0 || strcmp(imageviewid,textviewid)==0 || strcmp(imageviewid,buttonid)==0 || strcmp(imageviewid,progressbarid)==0 || strcmp(buttonid,textviewid)==0 || strcmp(buttonid,progressbarid)==0 || strcmp(progressbarid,textviewid)==0 || strcmp(linearid,relativeid)==0 || strcmp(linearid,textviewid)==0 || strcmp(linearid,imageviewid)==0 || strcmp(linearid,buttonid)==0 || strcmp(linearid,progressbarid)==0 ){printf("\n\nError: IDs must be different!");exit(1);};}
#line 1526 "project.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "project.y" /* yacc.c:1646  */
    {if(yylval.num==0){printf("\n\nError: android:layout:height and android:layout_width must be strictly greater than 0\nLine: %d",lineNumber);exit(1);};}
#line 1532 "project.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 107 "project.y" /* yacc.c:1646  */
    {linearid=yylval.str;}
#line 1538 "project.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 109 "project.y" /* yacc.c:1646  */
    {linearid=yylval.str;}
#line 1544 "project.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 110 "project.y" /* yacc.c:1646  */
    {linearid=yylval.str;}
#line 1550 "project.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "project.y" /* yacc.c:1646  */
    {textviewid=yylval.str;}
#line 1556 "project.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "project.y" /* yacc.c:1646  */
    {textviewid=yylval.str;}
#line 1562 "project.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 135 "project.y" /* yacc.c:1646  */
    {textviewid=yylval.str;}
#line 1568 "project.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 140 "project.y" /* yacc.c:1646  */
    {if(global_padding==0) {printf("\n\nError: android:padding must be strictly greater than 0 \nLine: %d",lineNumber-1);exit(1);};}
#line 1574 "project.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "project.y" /* yacc.c:1646  */
    {imageviewid=yylval.str;}
#line 1580 "project.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "project.y" /* yacc.c:1646  */
    {global_padding=yylval.num;}
#line 1586 "project.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "project.y" /* yacc.c:1646  */
    {imageviewid=yylval.str;}
#line 1592 "project.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 147 "project.y" /* yacc.c:1646  */
    {global_padding=yylval.num;}
#line 1598 "project.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 148 "project.y" /* yacc.c:1646  */
    {global_padding=yylval.num;}
#line 1604 "project.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 148 "project.y" /* yacc.c:1646  */
    {imageviewid=yylval.str;}
#line 1610 "project.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 153 "project.y" /* yacc.c:1646  */
    {if(global_buttonpadding==0) {printf("\n\nError: android:padding must be strictly greater than 0\nLine: %d",lineNumber-1);exit(1);};}
#line 1616 "project.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 158 "project.y" /* yacc.c:1646  */
    {buttonid=yylval.str;}
#line 1622 "project.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 159 "project.y" /* yacc.c:1646  */
    {global_buttonpadding=yylval.num;}
#line 1628 "project.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 160 "project.y" /* yacc.c:1646  */
    {buttonid=yylval.str;}
#line 1634 "project.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 160 "project.y" /* yacc.c:1646  */
    {global_buttonpadding=yylval.num;}
#line 1640 "project.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 161 "project.y" /* yacc.c:1646  */
    {global_buttonpadding=yylval.num;}
#line 1646 "project.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 161 "project.y" /* yacc.c:1646  */
    {buttonid=yylval.str;}
#line 1652 "project.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "project.y" /* yacc.c:1646  */
    {global_rbnum = yylval.num;}
#line 1658 "project.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "project.y" /* yacc.c:1646  */
    {global_rbnum = yylval.num;}
#line 1664 "project.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 169 "project.y" /* yacc.c:1646  */
    {if(global_rbnum!= num_radio_buttons){ printf("\n\nError: The number of radio buttons is %d, but android:rbnum is %d \nLine: %d", num_radio_buttons, global_rbnum,lineNumber);exit(1);}; }
#line 1670 "project.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 172 "project.y" /* yacc.c:1646  */
    { num_radio_buttons = 1; firstradiobuttonid = yylval.str;}
#line 1676 "project.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 173 "project.y" /* yacc.c:1646  */
    {num_radio_buttons++;}
#line 1682 "project.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 173 "project.y" /* yacc.c:1646  */
    {
			  char* radiobuttonids[num_radio_buttons];
			 for (int i = 1; i <= num_radio_buttons; i++) 
			{  radiobuttonids[i] = strdup(yylval.str);
			if(strcmp(global_checkedbutton,radiobuttonids[i])!=0 && strcmp(global_checkedbutton,firstradiobuttonid)!=0){printf("\n\n\nError: android:checkedButton must be the android:id of one of the Radio Buttons");exit(1);};
			if(strcmp(firstradiobuttonid,radiobuttonids[i])==0){printf("\n\nError: IDs must be different!");exit(1);};};}
#line 1693 "project.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "project.y" /* yacc.c:1646  */
    {radiogroupid=yylval.str;}
#line 1699 "project.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 183 "project.y" /* yacc.c:1646  */
    {global_checkedbutton = yylval.str;}
#line 1705 "project.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 184 "project.y" /* yacc.c:1646  */
    {radiogroupid=yylval.str;}
#line 1711 "project.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 184 "project.y" /* yacc.c:1646  */
    {global_checkedbutton = yylval.str; }
#line 1717 "project.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "project.y" /* yacc.c:1646  */
    {global_checkedbutton = yylval.str;}
#line 1723 "project.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 185 "project.y" /* yacc.c:1646  */
    {radiogroupid=yylval.str;}
#line 1729 "project.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 191 "project.y" /* yacc.c:1646  */
    { radiobuttonid=yylval.str;}
#line 1735 "project.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 196 "project.y" /* yacc.c:1646  */
    {if (global_progress <0 || global_progress > global_max) {printf("\n\nError: android:progress must be between 0 and android:max %d \nLine: %d",global_max,lineNumber-1);exit(1);};}
#line 1741 "project.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 204 "project.y" /* yacc.c:1646  */
    {progressbarid=yylval.str;}
#line 1747 "project.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 205 "project.y" /* yacc.c:1646  */
    {global_max = yylval.num;}
#line 1753 "project.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 206 "project.y" /* yacc.c:1646  */
    {global_progress=yylval.num;}
#line 1759 "project.tab.c" /* yacc.c:1646  */
    break;


#line 1763 "project.tab.c" /* yacc.c:1646  */
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
#line 208 "project.y" /* yacc.c:1906  */


//Εμφάνιση error όταν υπάρχει συντακτικό λάθος
void yyerror(char const *s) 
{
    fprintf(stderr,"\nError: %s\nLine: %d\nToken: %s\n", s, lineNumber, yytext);
	exit(1);
}	

int main(int argc,char *argv[]){

int token;
if(argc >1){

    yyin=fopen(argv[1],"r");
        if(yyin == NULL){

            perror ("ERROR");
            return -1;
        }
}

yyparse();
fclose (yyin);
return 0;
}
