/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         TURTLE_PARSER_STYPE
/* Substitute the variable and function names.  */
#define yyparse         turtle_parser_parse
#define yylex           turtle_parser_lex
#define yyerror         turtle_parser_error
#define yydebug         turtle_parser_debug
#define yynerrs         turtle_parser_nerrs

/* First part of user prologue.  */
#line 31 "./turtle_parser.y"

#ifdef HAVE_CONFIG_H
#include <raptor_config.h>
#endif

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

#include "raptor2.h"
#include "raptor_internal.h"

#include <turtle_parser.h>

#define YY_NO_UNISTD_H 1
#undef yylex
#include <turtle_lexer.h>

#include <turtle_common.h>


/* Set RAPTOR_DEBUG to 3 for super verbose parsing - watching the shift/reduces */
#if 0
#undef RAPTOR_DEBUG
#define RAPTOR_DEBUG 3
#endif


/* Fail with an debug error message if RAPTOR_DEBUG > 1 */
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
#define YYERROR_MSG(msg) do { fputs("** YYERROR ", RAPTOR_DEBUG_FH); fputs(msg, RAPTOR_DEBUG_FH); fputc('\n', RAPTOR_DEBUG_FH); YYERROR; } while(0)
#else
#define YYERROR_MSG(ignore) YYERROR
#endif
#define YYERR_MSG_GOTO(label,msg) do { errmsg = msg; goto label; } while(0)

/* Slow down the grammar operation and watch it work */
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 2
#undef YYDEBUG
#define YYDEBUG 1
#endif

#ifdef RAPTOR_DEBUG
const char * turtle_token_print(raptor_world* world, int token,
                                TURTLE_PARSER_STYPE *lval);
#endif


/* the lexer does not seem to track this */
#undef RAPTOR_TURTLE_USE_ERROR_COLUMNS

/* set api.push-pull to "push" if this is defined */
#undef TURTLE_PUSH_PARSE

/* Prototypes */ 
int turtle_parser_error(raptor_parser* rdf_parser, void* scanner, const char *msg);
static void turtle_parser_error_simple(void* user_data, const char *msg, ...) RAPTOR_PRINTF_FORMAT(2, 3);

/* Make lex/yacc interface as small as possible */
#undef yylex
#define yylex turtle_lexer_lex

/* Prototypes for local functions */
static void raptor_turtle_generate_statement(raptor_parser *parser, raptor_statement *triple);

static void raptor_turtle_defer_statement(raptor_parser *parser, raptor_statement *triple);

static void raptor_turtle_handle_statement(raptor_parser *parser, raptor_statement *triple);


#line 155 "turtle_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include <turtle_parser.h>
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_A = 3,                          /* "a"  */
  YYSYMBOL_HAT = 4,                        /* "^"  */
  YYSYMBOL_DOT = 5,                        /* "."  */
  YYSYMBOL_COMMA = 6,                      /* ","  */
  YYSYMBOL_SEMICOLON = 7,                  /* ";"  */
  YYSYMBOL_LEFT_SQUARE = 8,                /* "["  */
  YYSYMBOL_RIGHT_SQUARE = 9,               /* "]"  */
  YYSYMBOL_LEFT_ROUND = 10,                /* "("  */
  YYSYMBOL_RIGHT_ROUND = 11,               /* ")"  */
  YYSYMBOL_LEFT_CURLY = 12,                /* "{"  */
  YYSYMBOL_RIGHT_CURLY = 13,               /* "}"  */
  YYSYMBOL_TRUE_TOKEN = 14,                /* "true"  */
  YYSYMBOL_FALSE_TOKEN = 15,               /* "false"  */
  YYSYMBOL_PREFIX = 16,                    /* "@prefix"  */
  YYSYMBOL_BASE = 17,                      /* "@base"  */
  YYSYMBOL_SPARQL_PREFIX = 18,             /* "PREFIX"  */
  YYSYMBOL_SPARQL_BASE = 19,               /* "BASE"  */
  YYSYMBOL_STRING_LITERAL = 20,            /* "string literal"  */
  YYSYMBOL_IDENTIFIER = 21,                /* "identifier"  */
  YYSYMBOL_LANGTAG = 22,                   /* "langtag"  */
  YYSYMBOL_INTEGER_LITERAL = 23,           /* "integer literal"  */
  YYSYMBOL_FLOATING_LITERAL = 24,          /* "floating point literal"  */
  YYSYMBOL_DECIMAL_LITERAL = 25,           /* "decimal literal"  */
  YYSYMBOL_BLANK_LITERAL = 26,             /* "blank node"  */
  YYSYMBOL_URI_LITERAL = 27,               /* "URI literal"  */
  YYSYMBOL_GRAPH_NAME_LEFT_CURLY = 28,     /* "Graph URI literal {"  */
  YYSYMBOL_QNAME_LITERAL = 29,             /* "QName"  */
  YYSYMBOL_ERROR_TOKEN = 30,               /* ERROR_TOKEN  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_Document = 32,                  /* Document  */
  YYSYMBOL_graph = 33,                     /* graph  */
  YYSYMBOL_34_1 = 34,                      /* $@1  */
  YYSYMBOL_35_2 = 35,                      /* $@2  */
  YYSYMBOL_graphBody = 36,                 /* graphBody  */
  YYSYMBOL_triplesList = 37,               /* triplesList  */
  YYSYMBOL_dotTriplesList = 38,            /* dotTriplesList  */
  YYSYMBOL_statementList = 39,             /* statementList  */
  YYSYMBOL_statement = 40,                 /* statement  */
  YYSYMBOL_triples = 41,                   /* triples  */
  YYSYMBOL_objectList = 42,                /* objectList  */
  YYSYMBOL_itemList = 43,                  /* itemList  */
  YYSYMBOL_verb = 44,                      /* verb  */
  YYSYMBOL_predicateObjectList = 45,       /* predicateObjectList  */
  YYSYMBOL_directive = 46,                 /* directive  */
  YYSYMBOL_prefix = 47,                    /* prefix  */
  YYSYMBOL_base = 48,                      /* base  */
  YYSYMBOL_subject = 49,                   /* subject  */
  YYSYMBOL_predicate = 50,                 /* predicate  */
  YYSYMBOL_object = 51,                    /* object  */
  YYSYMBOL_literal = 52,                   /* literal  */
  YYSYMBOL_resource = 53,                  /* resource  */
  YYSYMBOL_predicateObjectListOpt = 54,    /* predicateObjectListOpt  */
  YYSYMBOL_blankNode = 55,                 /* blankNode  */
  YYSYMBOL_blankNodePropertyList = 56,     /* blankNodePropertyList  */
  YYSYMBOL_collection = 57                 /* collection  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

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
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined TURTLE_PARSER_STYPE_IS_TRIVIAL && TURTLE_PARSER_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
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
#define YYLAST   147

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  88

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if TURTLE_PARSER_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   218,   218,   223,   222,   255,   254,   280,   281,   284,
     285,   288,   300,   314,   324,   325,   328,   329,   330,   363,
     399,   435,   442,   482,   526,   566,   610,   620,   633,   694,
     726,   737,   737,   740,   774,   811,   819,   829,   833,   837,
     844,   851,   855,   859,   863,   867,   880,   892,   915,   938,
     954,   969,   980,   993,  1006,  1023,  1036,  1052,  1066,  1083,
    1087,  1094,  1112,  1166,  1268
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"a\"", "\"^\"",
  "\".\"", "\",\"", "\";\"", "\"[\"", "\"]\"", "\"(\"", "\")\"", "\"{\"",
  "\"}\"", "\"true\"", "\"false\"", "\"@prefix\"", "\"@base\"",
  "\"PREFIX\"", "\"BASE\"", "\"string literal\"", "\"identifier\"",
  "\"langtag\"", "\"integer literal\"", "\"floating point literal\"",
  "\"decimal literal\"", "\"blank node\"", "\"URI literal\"",
  "\"Graph URI literal {\"", "\"QName\"", "ERROR_TOKEN", "$accept",
  "Document", "graph", "$@1", "$@2", "graphBody", "triplesList",
  "dotTriplesList", "statementList", "statement", "triples", "objectList",
  "itemList", "verb", "predicateObjectList", "directive", "prefix", "base",
  "subject", "predicate", "object", "literal", "resource",
  "predicateObjectListOpt", "blankNode", "blankNodePropertyList",
  "collection", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-16)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-11)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -16,     8,     9,   -16,    11,    27,    78,   -16,    12,    13,
      18,    14,   -16,   -16,   -16,   -16,   -16,   -16,    38,   -16,
     -16,   -16,    27,   -16,   -16,    27,   -16,   -16,   -16,   118,
      37,   -16,   -16,    36,   -16,   -16,   -16,     7,   -16,   -16,
     -16,    98,   -16,   -16,   -16,   -16,   -16,   -16,     5,    22,
      53,    33,   -16,     5,   -16,    37,   -16,    55,   -16,    27,
     -16,   -15,    59,   -16,   -16,    11,    49,   -16,    60,   -16,
      62,   -16,   -16,    51,   118,   118,   -16,   -16,    -5,   -16,
      58,   -16,   -16,   -16,    55,   -16,   -16,   -16
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      15,     0,     0,     1,    14,    60,     0,     5,     0,     0,
       0,     0,    61,    57,     3,    58,    17,    13,     0,    16,
      31,    32,     0,    37,    38,    60,    39,    21,    27,     0,
      59,    26,    40,     0,    64,    55,    56,    51,    52,    53,
      54,     0,    25,    45,    41,    42,    44,    43,     0,     0,
       0,     0,    36,     0,    18,    19,    20,    29,    23,    30,
      62,     0,    46,    63,    24,     0,     0,     7,     9,    11,
       0,    35,    34,     0,     0,     0,    49,    50,     0,     6,
       0,    33,     4,    22,    28,    47,    48,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -16,   -16,   -16,   -16,   -16,    16,   -16,   -16,   -16,   -16,
       3,    -3,   -16,    15,    48,   -16,   -16,   -16,   -16,   -16,
       1,   -16,    -2,    52,    -1,     0,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    16,    53,    48,    66,    67,    68,     2,    17,
      69,    57,    41,    29,    30,    19,    20,    21,    22,    31,
      58,    43,    44,    33,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      23,    24,    25,    32,    26,    18,    65,    42,     3,    -2,
       4,    61,    76,     5,    77,     6,    27,     5,    -8,     6,
      32,     7,    85,    32,    86,     8,     9,    10,    11,    62,
      28,    12,    13,    49,    15,    12,    13,    14,    15,    51,
      50,    52,    64,    54,    59,    60,    23,    24,    25,    70,
      26,    23,    24,    25,    13,    26,    15,    32,    71,    65,
      72,    74,    79,    78,    82,    80,     5,    81,     6,    73,
      55,   -10,    84,     0,    75,    83,     0,    56,    23,    24,
      25,     0,    26,    87,    12,    13,     5,    15,     6,    34,
       0,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,    38,    39,    40,    12,    13,     5,    15,     6,    63,
       0,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,    38,    39,    40,    12,    13,     5,    15,     6,     0,
       0,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,    38,    39,    40,    12,    13,     0,    15
};

static const yytype_int8 yycheck[] =
{
       2,     2,     2,     5,     2,     2,     1,     6,     0,     0,
       1,     4,    27,     8,    29,    10,     5,     8,    13,    10,
      22,    12,    27,    25,    29,    16,    17,    18,    19,    22,
       3,    26,    27,    21,    29,    26,    27,    28,    29,    21,
      27,    27,    41,     5,     7,     9,    48,    48,    48,    27,
      48,    53,    53,    53,    27,    53,    29,    59,     5,     1,
      27,     6,    13,     4,    13,     5,     8,     5,    10,    53,
      22,    13,    75,    -1,    59,    74,    -1,    25,    80,    80,
      80,    -1,    80,    80,    26,    27,     8,    29,    10,    11,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,     8,    29,    10,    11,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,     8,    29,    10,    -1,
      -1,    -1,    14,    15,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    23,    24,    25,    26,    27,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    39,     0,     1,     8,    10,    12,    16,    17,
      18,    19,    26,    27,    28,    29,    33,    40,    41,    46,
      47,    48,    49,    53,    55,    56,    57,     5,     3,    44,
      45,    50,    53,    54,    11,    14,    15,    20,    23,    24,
      25,    43,    51,    52,    53,    55,    56,    57,    35,    21,
      27,    21,    27,    34,     5,    45,    54,    42,    51,     7,
       9,     4,    22,    11,    51,     1,    36,    37,    38,    41,
      27,     5,    27,    36,     6,    44,    27,    29,     4,    13,
       5,     5,    13,    51,    42,    27,    29,    41
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    34,    33,    35,    33,    36,    36,    37,
      37,    38,    38,    39,    39,    39,    40,    40,    40,    41,
      41,    41,    42,    42,    43,    43,    44,    44,    45,    45,
      45,    46,    46,    47,    47,    48,    48,    49,    49,    49,
      50,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    53,    53,    54,
      54,    55,    56,    57,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     4,     0,     4,     1,     0,     1,
       2,     1,     3,     2,     2,     0,     1,     1,     2,     2,
       2,     2,     3,     1,     2,     1,     1,     1,     4,     2,
       2,     1,     1,     4,     3,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     3,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = TURTLE_PARSER_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == TURTLE_PARSER_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (rdf_parser, yyscanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use TURTLE_PARSER_error or TURTLE_PARSER_UNDEF. */
#define YYERRCODE TURTLE_PARSER_UNDEF


/* Enable debugging if requested.  */
#if TURTLE_PARSER_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, rdf_parser, yyscanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, raptor_parser* rdf_parser, void* yyscanner)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (rdf_parser);
  YY_USE (yyscanner);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, raptor_parser* rdf_parser, void* yyscanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, rdf_parser, yyscanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, raptor_parser* rdf_parser, void* yyscanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], rdf_parser, yyscanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, rdf_parser, yyscanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !TURTLE_PARSER_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !TURTLE_PARSER_DEBUG */


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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
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
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, raptor_parser* rdf_parser, void* yyscanner)
{
  YY_USE (yyvaluep);
  YY_USE (rdf_parser);
  YY_USE (yyscanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yykind)
    {
    case YYSYMBOL_STRING_LITERAL: /* "string literal"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1285 "turtle_parser.c"
        break;

    case YYSYMBOL_IDENTIFIER: /* "identifier"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1294 "turtle_parser.c"
        break;

    case YYSYMBOL_LANGTAG: /* "langtag"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1303 "turtle_parser.c"
        break;

    case YYSYMBOL_INTEGER_LITERAL: /* "integer literal"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1312 "turtle_parser.c"
        break;

    case YYSYMBOL_FLOATING_LITERAL: /* "floating point literal"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1321 "turtle_parser.c"
        break;

    case YYSYMBOL_DECIMAL_LITERAL: /* "decimal literal"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1330 "turtle_parser.c"
        break;

    case YYSYMBOL_BLANK_LITERAL: /* "blank node"  */
#line 196 "./turtle_parser.y"
            {
  if(((*yyvaluep).string))
    RAPTOR_FREE(char*, ((*yyvaluep).string));
}
#line 1339 "turtle_parser.c"
        break;

    case YYSYMBOL_URI_LITERAL: /* "URI literal"  */
#line 201 "./turtle_parser.y"
            {
  if(((*yyvaluep).uri))
    raptor_free_uri(((*yyvaluep).uri));
}
#line 1348 "turtle_parser.c"
        break;

    case YYSYMBOL_GRAPH_NAME_LEFT_CURLY: /* "Graph URI literal {"  */
#line 201 "./turtle_parser.y"
            {
  if(((*yyvaluep).uri))
    raptor_free_uri(((*yyvaluep).uri));
}
#line 1357 "turtle_parser.c"
        break;

    case YYSYMBOL_QNAME_LITERAL: /* "QName"  */
#line 201 "./turtle_parser.y"
            {
  if(((*yyvaluep).uri))
    raptor_free_uri(((*yyvaluep).uri));
}
#line 1366 "turtle_parser.c"
        break;

    case YYSYMBOL_triples: /* triples  */
#line 211 "./turtle_parser.y"
            {
  if(((*yyvaluep).sequence))
    raptor_free_sequence(((*yyvaluep).sequence));
}
#line 1375 "turtle_parser.c"
        break;

    case YYSYMBOL_objectList: /* objectList  */
#line 211 "./turtle_parser.y"
            {
  if(((*yyvaluep).sequence))
    raptor_free_sequence(((*yyvaluep).sequence));
}
#line 1384 "turtle_parser.c"
        break;

    case YYSYMBOL_itemList: /* itemList  */
#line 211 "./turtle_parser.y"
            {
  if(((*yyvaluep).sequence))
    raptor_free_sequence(((*yyvaluep).sequence));
}
#line 1393 "turtle_parser.c"
        break;

    case YYSYMBOL_verb: /* verb  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1402 "turtle_parser.c"
        break;

    case YYSYMBOL_predicateObjectList: /* predicateObjectList  */
#line 211 "./turtle_parser.y"
            {
  if(((*yyvaluep).sequence))
    raptor_free_sequence(((*yyvaluep).sequence));
}
#line 1411 "turtle_parser.c"
        break;

    case YYSYMBOL_subject: /* subject  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1420 "turtle_parser.c"
        break;

    case YYSYMBOL_predicate: /* predicate  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1429 "turtle_parser.c"
        break;

    case YYSYMBOL_object: /* object  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1438 "turtle_parser.c"
        break;

    case YYSYMBOL_literal: /* literal  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1447 "turtle_parser.c"
        break;

    case YYSYMBOL_resource: /* resource  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1456 "turtle_parser.c"
        break;

    case YYSYMBOL_predicateObjectListOpt: /* predicateObjectListOpt  */
#line 211 "./turtle_parser.y"
            {
  if(((*yyvaluep).sequence))
    raptor_free_sequence(((*yyvaluep).sequence));
}
#line 1465 "turtle_parser.c"
        break;

    case YYSYMBOL_blankNode: /* blankNode  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1474 "turtle_parser.c"
        break;

    case YYSYMBOL_blankNodePropertyList: /* blankNodePropertyList  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1483 "turtle_parser.c"
        break;

    case YYSYMBOL_collection: /* collection  */
#line 206 "./turtle_parser.y"
            {
  if(((*yyvaluep).identifier))
    raptor_free_term(((*yyvaluep).identifier));
}
#line 1492 "turtle_parser.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (raptor_parser* rdf_parser, void* yyscanner)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = TURTLE_PARSER_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == TURTLE_PARSER_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, yyscanner);
    }

  if (yychar <= TURTLE_PARSER_EOF)
    {
      yychar = TURTLE_PARSER_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == TURTLE_PARSER_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = TURTLE_PARSER_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = TURTLE_PARSER_EMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3: /* $@1: %empty  */
#line 223 "./turtle_parser.y"
  {
    /* action in mid-rule so this is run BEFORE the triples in graphBody */
    raptor_turtle_parser* turtle_parser;

    turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
    if(!turtle_parser->trig)
      turtle_parser_error(rdf_parser, yyscanner, "{ ... } is not allowed in Turtle");
    else {
      if(turtle_parser->graph_name)
        raptor_free_term(turtle_parser->graph_name);
      turtle_parser->graph_name = raptor_new_term_from_uri(rdf_parser->world, (yyvsp[0].uri));
      raptor_free_uri((yyvsp[0].uri));
      raptor_parser_start_graph(rdf_parser,
                                turtle_parser->graph_name->value.uri, 1);
    }
  }
#line 1784 "turtle_parser.c"
    break;

  case 4: /* graph: "Graph URI literal {" $@1 graphBody "}"  */
#line 240 "./turtle_parser.y"
{
  raptor_turtle_parser* turtle_parser;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(turtle_parser->trig) {
    raptor_parser_end_graph(rdf_parser,
                            turtle_parser->graph_name->value.uri, 1);
    raptor_free_term(turtle_parser->graph_name);
    turtle_parser->graph_name = NULL;
    rdf_parser->emitted_default_graph = 0;
  }
}
#line 1802 "turtle_parser.c"
    break;

  case 5: /* $@2: %empty  */
#line 255 "./turtle_parser.y"
  {
    /* action in mid-rule so this is run BEFORE the triples in graphBody */
    raptor_turtle_parser* turtle_parser;

    turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
    if(!turtle_parser->trig)
      turtle_parser_error(rdf_parser, yyscanner, "{ ... } is not allowed in Turtle");
    else {
      raptor_parser_start_graph(rdf_parser, NULL, 1);
      rdf_parser->emitted_default_graph++;
    }
  }
#line 1819 "turtle_parser.c"
    break;

  case 6: /* graph: "{" $@2 graphBody "}"  */
#line 268 "./turtle_parser.y"
{
  raptor_turtle_parser* turtle_parser;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  if(turtle_parser->trig) {
    raptor_parser_end_graph(rdf_parser, NULL, 1);
    rdf_parser->emitted_default_graph = 0;
  }
}
#line 1833 "turtle_parser.c"
    break;

  case 11: /* dotTriplesList: triples  */
#line 289 "./turtle_parser.y"
{
  int i;

  if((yyvsp[0].sequence)) {
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      raptor_turtle_generate_statement(rdf_parser, t2);
    }
    raptor_free_sequence((yyvsp[0].sequence));
  }
}
#line 1849 "turtle_parser.c"
    break;

  case 12: /* dotTriplesList: dotTriplesList "." triples  */
#line 301 "./turtle_parser.y"
{
  int i;

  if((yyvsp[0].sequence)) {
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      raptor_turtle_generate_statement(rdf_parser, t2);
    }
    raptor_free_sequence((yyvsp[0].sequence));
  }
}
#line 1865 "turtle_parser.c"
    break;

  case 13: /* statementList: statementList statement  */
#line 315 "./turtle_parser.y"
{
  raptor_turtle_parser* turtle_parser;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  /* sync up consumed/processed so we know what to unwind */
  turtle_parser->processed = turtle_parser->consumed;
  turtle_parser->lineno_last_good = turtle_parser->lineno;
}
#line 1879 "turtle_parser.c"
    break;

  case 18: /* statement: triples "."  */
#line 331 "./turtle_parser.y"
{
  raptor_turtle_parser* turtle_parser;
  int i;

  /* yield deferred statements, if any */
  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  if(turtle_parser->deferred) {
    raptor_sequence* def = turtle_parser->deferred;

    for(i = 0; i < raptor_sequence_size(def); i++) {
      raptor_statement *t2 = (raptor_statement*)raptor_sequence_get_at(def, i);

      raptor_turtle_handle_statement(rdf_parser, t2);
    }
  }

  if((yyvsp[-1].sequence)) {
    for(i = 0; i < raptor_sequence_size((yyvsp[-1].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[-1].sequence), i);
      raptor_turtle_generate_statement(rdf_parser, t2);
    }
    raptor_free_sequence((yyvsp[-1].sequence));
  }

  if(turtle_parser->deferred) {
    /* debrief resources */
    raptor_free_sequence(turtle_parser->deferred);
    turtle_parser->deferred = NULL;
  }
}
#line 1914 "turtle_parser.c"
    break;

  case 19: /* triples: subject predicateObjectList  */
#line 364 "./turtle_parser.y"
{
  int i;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("triples 1\n subject=");
  if((yyvsp[-1].identifier))
    raptor_term_print_as_ntriples((yyvsp[-1].identifier), stdout);
  else
    fputs("NULL", stdout);
  if((yyvsp[0].sequence)) {
    printf("\n predicateObjectList (reverse order to syntax)=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n");
  } else     
    printf("\n and empty predicateObjectList\n");
#endif

  if((yyvsp[-1].identifier) && (yyvsp[0].sequence)) {
    /* have subject and non-empty property list, handle it  */
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      t2->subject = raptor_term_copy((yyvsp[-1].identifier));
    }
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" after substitution predicateObjectList=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n\n");
#endif
  }

  if((yyvsp[-1].identifier))
    raptor_free_term((yyvsp[-1].identifier));

  (yyval.sequence) = (yyvsp[0].sequence);
}
#line 1954 "turtle_parser.c"
    break;

  case 20: /* triples: blankNodePropertyList predicateObjectListOpt  */
#line 400 "./turtle_parser.y"
{
  int i;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("triples 2\n blankNodePropertyList=");
  if((yyvsp[-1].identifier))
    raptor_term_print_as_ntriples((yyvsp[-1].identifier), stdout);
  else
    fputs("NULL", stdout);
  if((yyvsp[0].sequence)) {
    printf("\n predicateObjectListOpt (reverse order to syntax)=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n");
  } else     
    printf("\n and empty predicateObjectListOpt\n");
#endif

  if((yyvsp[-1].identifier) && (yyvsp[0].sequence)) {
    /* have subject and non-empty predicate object list, handle it  */
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      t2->subject = raptor_term_copy((yyvsp[-1].identifier));
    }
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" after substitution predicateObjectListOpt=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n\n");
#endif
  }

  if((yyvsp[-1].identifier))
    raptor_free_term((yyvsp[-1].identifier));

  (yyval.sequence) = (yyvsp[0].sequence);
}
#line 1994 "turtle_parser.c"
    break;

  case 21: /* triples: error "."  */
#line 436 "./turtle_parser.y"
{
  (yyval.sequence) = NULL;
}
#line 2002 "turtle_parser.c"
    break;

  case 22: /* objectList: objectList "," object  */
#line 443 "./turtle_parser.y"
{
  raptor_statement *triple;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("objectList 1\n");
  if((yyvsp[0].identifier)) {
    printf(" object=\n");
    raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
    printf("\n");
  } else  
    printf(" and empty object\n");
  if((yyvsp[-2].sequence)) {
    printf(" objectList=");
    raptor_sequence_print((yyvsp[-2].sequence), stdout);
    printf("\n");
  } else
    printf(" and empty objectList\n");
#endif

  if(!(yyvsp[0].identifier))
    (yyval.sequence) = NULL;
  else {
    triple = raptor_new_statement_from_nodes(rdf_parser->world, NULL, NULL, (yyvsp[0].identifier), NULL);
    if(!triple) {
      raptor_free_sequence((yyvsp[-2].sequence));
      YYERROR;
    }
    if(raptor_sequence_push((yyvsp[-2].sequence), triple)) {
      raptor_free_sequence((yyvsp[-2].sequence));
      YYERROR;
    }
    (yyval.sequence) = (yyvsp[-2].sequence);
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" objectList is now ");
    raptor_sequence_print((yyval.sequence), stdout);
    printf("\n\n");
#endif
  }
}
#line 2046 "turtle_parser.c"
    break;

  case 23: /* objectList: object  */
#line 483 "./turtle_parser.y"
{
  raptor_statement *triple;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("objectList 2\n");
  if((yyvsp[0].identifier)) {
    printf(" object=\n");
    raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
    printf("\n");
  } else  
    printf(" and empty object\n");
#endif

  if(!(yyvsp[0].identifier))
    (yyval.sequence) = NULL;
  else {
    triple = raptor_new_statement_from_nodes(rdf_parser->world, NULL, NULL, (yyvsp[0].identifier), NULL);
    if(!triple)
      YYERROR;
#ifdef RAPTOR_DEBUG
    (yyval.sequence) = raptor_new_sequence((raptor_data_free_handler)raptor_free_statement,
                             (raptor_data_print_handler)raptor_statement_print);
#else
    (yyval.sequence) = raptor_new_sequence((raptor_data_free_handler)raptor_free_statement, NULL);
#endif
    if(!(yyval.sequence)) {
      raptor_free_statement(triple);
      YYERROR;
    }
    if(raptor_sequence_push((yyval.sequence), triple)) {
      raptor_free_sequence((yyval.sequence));
      (yyval.sequence) = NULL;
      YYERROR;
    }
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" objectList is now ");
    raptor_sequence_print((yyval.sequence), stdout);
    printf("\n\n");
#endif
  }
}
#line 2092 "turtle_parser.c"
    break;

  case 24: /* itemList: itemList object  */
#line 527 "./turtle_parser.y"
{
  raptor_statement *triple;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("objectList 1\n");
  if((yyvsp[0].identifier)) {
    printf(" object=\n");
    raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
    printf("\n");
  } else  
    printf(" and empty object\n");
  if((yyvsp[-1].sequence)) {
    printf(" objectList=");
    raptor_sequence_print((yyvsp[-1].sequence), stdout);
    printf("\n");
  } else
    printf(" and empty objectList\n");
#endif

  if(!(yyvsp[0].identifier))
    (yyval.sequence) = NULL;
  else {
    triple = raptor_new_statement_from_nodes(rdf_parser->world, NULL, NULL, (yyvsp[0].identifier), NULL);
    if(!triple) {
      raptor_free_sequence((yyvsp[-1].sequence));
      YYERROR;
    }
    if(raptor_sequence_push((yyvsp[-1].sequence), triple)) {
      raptor_free_sequence((yyvsp[-1].sequence));
      YYERROR;
    }
    (yyval.sequence) = (yyvsp[-1].sequence);
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" objectList is now ");
    raptor_sequence_print((yyval.sequence), stdout);
    printf("\n\n");
#endif
  }
}
#line 2136 "turtle_parser.c"
    break;

  case 25: /* itemList: object  */
#line 567 "./turtle_parser.y"
{
  raptor_statement *triple;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("objectList 2\n");
  if((yyvsp[0].identifier)) {
    printf(" object=\n");
    raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
    printf("\n");
  } else  
    printf(" and empty object\n");
#endif

  if(!(yyvsp[0].identifier))
    (yyval.sequence) = NULL;
  else {
    triple = raptor_new_statement_from_nodes(rdf_parser->world, NULL, NULL, (yyvsp[0].identifier), NULL);
    if(!triple)
      YYERROR;
#ifdef RAPTOR_DEBUG
    (yyval.sequence) = raptor_new_sequence((raptor_data_free_handler)raptor_free_statement,
                             (raptor_data_print_handler)raptor_statement_print);
#else
    (yyval.sequence) = raptor_new_sequence((raptor_data_free_handler)raptor_free_statement, NULL);
#endif
    if(!(yyval.sequence)) {
      raptor_free_statement(triple);
      YYERROR;
    }
    if(raptor_sequence_push((yyval.sequence), triple)) {
      raptor_free_sequence((yyval.sequence));
      (yyval.sequence) = NULL;
      YYERROR;
    }
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" objectList is now ");
    raptor_sequence_print((yyval.sequence), stdout);
    printf("\n\n");
#endif
  }
}
#line 2182 "turtle_parser.c"
    break;

  case 26: /* verb: predicate  */
#line 611 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("verb predicate=");
  raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
  printf("\n");
#endif

  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2196 "turtle_parser.c"
    break;

  case 27: /* verb: "a"  */
#line 621 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("verb predicate = rdf:type (a)\n");
#endif

  (yyval.identifier) = raptor_term_copy(RAPTOR_RDF_type_term(rdf_parser->world));
  if(!(yyval.identifier))
    YYERROR;
}
#line 2210 "turtle_parser.c"
    break;

  case 28: /* predicateObjectList: predicateObjectList ";" verb objectList  */
#line 634 "./turtle_parser.y"
{
  int i;
  
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("predicateObjectList 1\n verb=");
  raptor_term_print_as_ntriples((yyvsp[-1].identifier), stdout);
  printf("\n objectList=");
  raptor_sequence_print((yyvsp[0].sequence), stdout);
  printf("\n predicateObjectList=");
  raptor_sequence_print((yyvsp[-3].sequence), stdout);
  printf("\n\n");
#endif
  
  if((yyvsp[0].sequence) == NULL) {
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" empty objectList not processed\n");
#endif
  } else if((yyvsp[-1].identifier) && (yyvsp[0].sequence)) {
    /* non-empty property list, handle it  */
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      t2->predicate = raptor_term_copy((yyvsp[-1].identifier));
    }
  
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" after substitution objectList=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n");
#endif
  }

  if((yyvsp[-3].sequence) == NULL) {
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" empty predicateObjectList not copied\n\n");
#endif
  } else if((yyvsp[-1].identifier) && (yyvsp[0].sequence) && (yyvsp[-3].sequence)) {
    while(raptor_sequence_size((yyvsp[0].sequence))) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_unshift((yyvsp[0].sequence));
      if(raptor_sequence_push((yyvsp[-3].sequence), t2)) {
        raptor_free_sequence((yyvsp[-3].sequence));
        raptor_free_term((yyvsp[-1].identifier));
        raptor_free_sequence((yyvsp[0].sequence));
        YYERROR;
      }
    }

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" after appending objectList (reverse order)=");
    raptor_sequence_print((yyvsp[-3].sequence), stdout);
    printf("\n\n");
#endif

    raptor_free_sequence((yyvsp[0].sequence));
  }

  if((yyvsp[-1].identifier))
    raptor_free_term((yyvsp[-1].identifier));

  (yyval.sequence) = (yyvsp[-3].sequence);
}
#line 2275 "turtle_parser.c"
    break;

  case 29: /* predicateObjectList: verb objectList  */
#line 695 "./turtle_parser.y"
{
  int i;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("predicateObjectList 2\n verb=");
  raptor_term_print_as_ntriples((yyvsp[-1].identifier), stdout);
  if((yyvsp[0].sequence)) {
    printf("\n objectList=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n");
  } else
    printf("\n and empty objectList\n");
#endif

  if((yyvsp[-1].identifier) && (yyvsp[0].sequence)) {
    for(i = 0; i < raptor_sequence_size((yyvsp[0].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[0].sequence), i);
      t2->predicate = raptor_term_copy((yyvsp[-1].identifier));
    }

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf(" after substitution objectList=");
    raptor_sequence_print((yyvsp[0].sequence), stdout);
    printf("\n\n");
#endif
  }

  if((yyvsp[-1].identifier))
    raptor_free_term((yyvsp[-1].identifier));

  (yyval.sequence) = (yyvsp[0].sequence);
}
#line 2311 "turtle_parser.c"
    break;

  case 30: /* predicateObjectList: predicateObjectList ";"  */
#line 727 "./turtle_parser.y"
{
  (yyval.sequence) = (yyvsp[-1].sequence);
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("predicateObjectList 5\n trailing semicolon returning existing list ");
  raptor_sequence_print((yyval.sequence), stdout);
  printf("\n\n");
#endif
}
#line 2324 "turtle_parser.c"
    break;

  case 33: /* prefix: "@prefix" "identifier" "URI literal" "."  */
#line 741 "./turtle_parser.y"
{
  unsigned char *prefix = (yyvsp[-2].string);
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)(rdf_parser->context);
  raptor_namespace *ns;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("directive PREFIX %s %s\n",((yyvsp[-2].string) ? (char*)(yyvsp[-2].string) : "(default)"), raptor_uri_as_string((yyvsp[-1].uri)));
#endif

  if(prefix) {
    size_t len = strlen((const char*)prefix);
    if(prefix[len-1] == ':') {
      if(len == 1)
         /* declaring default namespace prefix PREFIX : ... */
        prefix = NULL;
      else
        prefix[len-1]='\0';
    }
  }

  ns = raptor_new_namespace_from_uri(&turtle_parser->namespaces, prefix, (yyvsp[-1].uri), 0);
  if(ns) {
    raptor_namespaces_start_namespace(&turtle_parser->namespaces, ns);
    raptor_parser_start_namespace(rdf_parser, ns);
  }

  if((yyvsp[-2].string))
    RAPTOR_FREE(char*, (yyvsp[-2].string));
  raptor_free_uri((yyvsp[-1].uri));

  if(!ns)
    YYERROR;
}
#line 2362 "turtle_parser.c"
    break;

  case 34: /* prefix: "PREFIX" "identifier" "URI literal"  */
#line 775 "./turtle_parser.y"
{
  unsigned char *prefix = (yyvsp[-1].string);
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)(rdf_parser->context);
  raptor_namespace *ns;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("directive @prefix %s %s.\n",((yyvsp[-1].string) ? (char*)(yyvsp[-1].string) : "(default)"), raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if(prefix) {
    size_t len = strlen((const char*)prefix);
    if(prefix[len-1] == ':') {
      if(len == 1)
         /* declaring default namespace prefix @prefix : ... */
        prefix = NULL;
      else
        prefix[len-1]='\0';
    }
  }

  ns = raptor_new_namespace_from_uri(&turtle_parser->namespaces, prefix, (yyvsp[0].uri), 0);
  if(ns) {
    raptor_namespaces_start_namespace(&turtle_parser->namespaces, ns);
    raptor_parser_start_namespace(rdf_parser, ns);
  }

  if((yyvsp[-1].string))
    RAPTOR_FREE(char*, (yyvsp[-1].string));
  raptor_free_uri((yyvsp[0].uri));

  if(!ns)
    YYERROR;
}
#line 2400 "turtle_parser.c"
    break;

  case 35: /* base: "@base" "URI literal" "."  */
#line 812 "./turtle_parser.y"
{
  raptor_uri *uri=(yyvsp[-1].uri);

  if(rdf_parser->base_uri)
    raptor_free_uri(rdf_parser->base_uri);
  rdf_parser->base_uri = uri;
}
#line 2412 "turtle_parser.c"
    break;

  case 36: /* base: "BASE" "URI literal"  */
#line 820 "./turtle_parser.y"
{
  raptor_uri *uri=(yyvsp[0].uri);

  if(rdf_parser->base_uri)
    raptor_free_uri(rdf_parser->base_uri);
  rdf_parser->base_uri = uri;
}
#line 2424 "turtle_parser.c"
    break;

  case 37: /* subject: resource  */
#line 830 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2432 "turtle_parser.c"
    break;

  case 38: /* subject: blankNode  */
#line 834 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2440 "turtle_parser.c"
    break;

  case 39: /* subject: collection  */
#line 838 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2448 "turtle_parser.c"
    break;

  case 40: /* predicate: resource  */
#line 845 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2456 "turtle_parser.c"
    break;

  case 41: /* object: resource  */
#line 852 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2464 "turtle_parser.c"
    break;

  case 42: /* object: blankNode  */
#line 856 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2472 "turtle_parser.c"
    break;

  case 43: /* object: collection  */
#line 860 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2480 "turtle_parser.c"
    break;

  case 44: /* object: blankNodePropertyList  */
#line 864 "./turtle_parser.y"
{
  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2488 "turtle_parser.c"
    break;

  case 45: /* object: literal  */
#line 868 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("object literal=");
  raptor_term_print_as_ntriples((yyvsp[0].identifier), stdout);
  printf("\n");
#endif

  (yyval.identifier) = (yyvsp[0].identifier);
}
#line 2502 "turtle_parser.c"
    break;

  case 46: /* literal: "string literal" "langtag"  */
#line 881 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal + language string=\"%s\"\n", (yyvsp[-1].string));
#endif

  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[-1].string), NULL, (yyvsp[0].string));
  RAPTOR_FREE(char*, (yyvsp[-1].string));
  RAPTOR_FREE(char*, (yyvsp[0].string));
  if(!(yyval.identifier))
    YYERROR;
}
#line 2518 "turtle_parser.c"
    break;

  case 47: /* literal: "string literal" "langtag" "^" "URI literal"  */
#line 893 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal + language=\"%s\" datatype string=\"%s\" uri=\"%s\"\n", (yyvsp[-3].string), (yyvsp[-2].string), raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    if((yyvsp[-2].string)) {
      raptor_parser_error(rdf_parser,
                          "Language not allowed with datatyped literal");
      RAPTOR_FREE(char*, (yyvsp[-2].string));
      (yyvsp[-2].string) = NULL;
    }
  
    (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[-3].string), (yyvsp[0].uri), NULL);
    RAPTOR_FREE(char*, (yyvsp[-3].string));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;
    
}
#line 2545 "turtle_parser.c"
    break;

  case 48: /* literal: "string literal" "langtag" "^" "QName"  */
#line 916 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal + language=\"%s\" datatype string=\"%s\" qname URI=<%s>\n", (yyvsp[-3].string), (yyvsp[-2].string), raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    if((yyvsp[-2].string)) {
      raptor_parser_error(rdf_parser,
                          "Language not allowed with datatyped literal");
      RAPTOR_FREE(char*, (yyvsp[-2].string));
      (yyvsp[-2].string) = NULL;
    }
  
    (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[-3].string), (yyvsp[0].uri), NULL);
    RAPTOR_FREE(char*, (yyvsp[-3].string));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;

}
#line 2572 "turtle_parser.c"
    break;

  case 49: /* literal: "string literal" "^" "URI literal"  */
#line 939 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal + datatype string=\"%s\" uri=\"%s\"\n", (yyvsp[-2].string), raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[-2].string), (yyvsp[0].uri), NULL);
    RAPTOR_FREE(char*, (yyvsp[-2].string));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;
    
}
#line 2592 "turtle_parser.c"
    break;

  case 50: /* literal: "string literal" "^" "QName"  */
#line 955 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal + datatype string=\"%s\" qname URI=<%s>\n", (yyvsp[-2].string), raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[-2].string), (yyvsp[0].uri), NULL);
    RAPTOR_FREE(char*, (yyvsp[-2].string));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;
}
#line 2611 "turtle_parser.c"
    break;

  case 51: /* literal: "string literal"  */
#line 970 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("literal string=\"%s\"\n", (yyvsp[0].string));
#endif

  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[0].string), NULL, NULL);
  RAPTOR_FREE(char*, (yyvsp[0].string));
  if(!(yyval.identifier))
    YYERROR;
}
#line 2626 "turtle_parser.c"
    break;

  case 52: /* literal: "integer literal"  */
#line 981 "./turtle_parser.y"
{
  raptor_uri *uri;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource integer=%s\n", (yyvsp[0].string));
#endif
  uri = raptor_uri_copy(rdf_parser->world->xsd_integer_uri);
  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[0].string), uri, NULL);
  RAPTOR_FREE(char*, (yyvsp[0].string));
  raptor_free_uri(uri);
  if(!(yyval.identifier))
    YYERROR;
}
#line 2643 "turtle_parser.c"
    break;

  case 53: /* literal: "floating point literal"  */
#line 994 "./turtle_parser.y"
{
  raptor_uri *uri;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource double=%s\n", (yyvsp[0].string));
#endif
  uri = raptor_uri_copy(rdf_parser->world->xsd_double_uri);
  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[0].string), uri, NULL);
  RAPTOR_FREE(char*, (yyvsp[0].string));
  raptor_free_uri(uri);
  if(!(yyval.identifier))
    YYERROR;
}
#line 2660 "turtle_parser.c"
    break;

  case 54: /* literal: "decimal literal"  */
#line 1007 "./turtle_parser.y"
{
  raptor_uri *uri;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource decimal=%s\n", (yyvsp[0].string));
#endif
  uri = raptor_uri_copy(rdf_parser->world->xsd_decimal_uri);
  if(!uri) {
    RAPTOR_FREE(char*, (yyvsp[0].string));
    YYERROR;
  }
  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world, (yyvsp[0].string), uri, NULL);
  RAPTOR_FREE(char*, (yyvsp[0].string));
  raptor_free_uri(uri);
  if(!(yyval.identifier))
    YYERROR;
}
#line 2681 "turtle_parser.c"
    break;

  case 55: /* literal: "true"  */
#line 1024 "./turtle_parser.y"
{
  raptor_uri *uri;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  fputs("resource boolean true\n", stderr);
#endif
  uri = raptor_uri_copy(rdf_parser->world->xsd_boolean_uri);
  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world,
                                    (const unsigned char*)"true", uri, NULL);
  raptor_free_uri(uri);
  if(!(yyval.identifier))
    YYERROR;
}
#line 2698 "turtle_parser.c"
    break;

  case 56: /* literal: "false"  */
#line 1037 "./turtle_parser.y"
{
  raptor_uri *uri;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  fputs("resource boolean false\n", stderr);
#endif
  uri = raptor_uri_copy(rdf_parser->world->xsd_boolean_uri);
  (yyval.identifier) = raptor_new_term_from_literal(rdf_parser->world,
                                    (const unsigned char*)"false", uri, NULL);
  raptor_free_uri(uri);
  if(!(yyval.identifier))
    YYERROR;
}
#line 2715 "turtle_parser.c"
    break;

  case 57: /* resource: "URI literal"  */
#line 1053 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource URI=<%s>\n", raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    (yyval.identifier) = raptor_new_term_from_uri(rdf_parser->world, (yyvsp[0].uri));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;
}
#line 2733 "turtle_parser.c"
    break;

  case 58: /* resource: "QName"  */
#line 1067 "./turtle_parser.y"
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource qname URI=<%s>\n", raptor_uri_as_string((yyvsp[0].uri)));
#endif

  if((yyvsp[0].uri)) {
    (yyval.identifier) = raptor_new_term_from_uri(rdf_parser->world, (yyvsp[0].uri));
    raptor_free_uri((yyvsp[0].uri));
    if(!(yyval.identifier))
      YYERROR;
  } else
    (yyval.identifier) = NULL;
}
#line 2751 "turtle_parser.c"
    break;

  case 59: /* predicateObjectListOpt: predicateObjectList  */
#line 1084 "./turtle_parser.y"
{
  (yyval.sequence) = (yyvsp[0].sequence);
}
#line 2759 "turtle_parser.c"
    break;

  case 60: /* predicateObjectListOpt: %empty  */
#line 1088 "./turtle_parser.y"
{
  (yyval.sequence) = NULL;
}
#line 2767 "turtle_parser.c"
    break;

  case 61: /* blankNode: "blank node"  */
#line 1095 "./turtle_parser.y"
{
  const unsigned char *id;
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("subject blank=\"%s\"\n", (yyvsp[0].string));
#endif
  id = raptor_world_internal_generate_id(rdf_parser->world, (yyvsp[0].string));
  if(!id)
    YYERROR;

  (yyval.identifier) = raptor_new_term_from_blank(rdf_parser->world, id);
  RAPTOR_FREE(char*, id);

  if(!(yyval.identifier))
    YYERROR;
}
#line 2787 "turtle_parser.c"
    break;

  case 62: /* blankNodePropertyList: "[" predicateObjectListOpt "]"  */
#line 1113 "./turtle_parser.y"
{
  int i;
  const unsigned char *id;

  id = raptor_world_generate_bnodeid(rdf_parser->world);
  if(!id) {
    if((yyvsp[-1].sequence))
      raptor_free_sequence((yyvsp[-1].sequence));
    YYERROR;
  }

  (yyval.identifier) = raptor_new_term_from_blank(rdf_parser->world, id);
  RAPTOR_FREE(char*, id);
  if(!(yyval.identifier)) {
    if((yyvsp[-1].sequence))
      raptor_free_sequence((yyvsp[-1].sequence));
    YYERROR;
  }

  if((yyvsp[-1].sequence) == NULL) {
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf("resource\n predicateObjectList=");
    raptor_term_print_as_ntriples((yyval.identifier), stdout);
    printf("\n");
#endif
  } else {
    /* non-empty property list, handle it  */
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
    printf("resource\n predicateObjectList=");
    raptor_sequence_print((yyvsp[-1].sequence), stdout);
    printf("\n");
#endif

    for(i = 0; i < raptor_sequence_size((yyvsp[-1].sequence)); i++) {
      raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[-1].sequence), i);
      t2->subject = raptor_term_copy((yyval.identifier));
      raptor_turtle_defer_statement(rdf_parser, t2);
    }

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
    printf(" after substitution objectList=");
    raptor_sequence_print((yyvsp[-1].sequence), stdout);
    printf("\n\n");
#endif

    raptor_free_sequence((yyvsp[-1].sequence));

  }
  
}
#line 2842 "turtle_parser.c"
    break;

  case 63: /* collection: "(" itemList ")"  */
#line 1167 "./turtle_parser.y"
{
  int i;
  raptor_world* world = rdf_parser->world;
  raptor_term* first_identifier = NULL;
  raptor_term* rest_identifier = NULL;
  raptor_term* object = NULL;
  raptor_term* blank = NULL;
  char const *errmsg = NULL;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("collection\n objectList=");
  raptor_sequence_print((yyvsp[-1].sequence), stdout);
  printf("\n");
#endif

  first_identifier = raptor_new_term_from_uri(world, RAPTOR_RDF_first_URI(world));
  if(!first_identifier)
    YYERR_MSG_GOTO(err_collection, "Cannot create rdf:first term");
  rest_identifier = raptor_new_term_from_uri(world, RAPTOR_RDF_rest_URI(world));
  if(!rest_identifier)
    YYERR_MSG_GOTO(err_collection, "Cannot create rdf:rest term");
  
  /* non-empty property list, handle it  */
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("resource\n predicateObjectList=");
  raptor_sequence_print((yyvsp[-1].sequence), stdout);
  printf("\n");
#endif

  object = raptor_new_term_from_uri(world, RAPTOR_RDF_nil_URI(world));
  if(!object)
    YYERR_MSG_GOTO(err_collection, "Cannot create rdf:nil term");

  for(i = raptor_sequence_size((yyvsp[-1].sequence))-1; i>=0; i--) {
    raptor_term* temp;
    raptor_statement* t2 = (raptor_statement*)raptor_sequence_get_at((yyvsp[-1].sequence), i);
    const unsigned char *blank_id;

    blank_id = raptor_world_generate_bnodeid(rdf_parser->world);
    if(!blank_id)
      YYERR_MSG_GOTO(err_collection, "Cannot create bnodeid");

    blank = raptor_new_term_from_blank(rdf_parser->world,
                                       blank_id);
    RAPTOR_FREE(char*, blank_id);
    if(!blank)
      YYERR_MSG_GOTO(err_collection, "Cannot create bnode");
    
    t2->subject = blank;
    t2->predicate = first_identifier;
    /* t2->object already set to the value we want */
    raptor_turtle_defer_statement((raptor_parser*)rdf_parser, t2);
    
    temp = t2->object;
    
    t2->subject = blank;
    t2->predicate = rest_identifier;
    t2->object = object;
    raptor_turtle_defer_statement((raptor_parser*)rdf_parser, t2);

    t2->subject = NULL;
    t2->predicate = NULL;
    t2->object = temp;

    raptor_free_term(object);
    object = blank;
    blank = NULL;
  }
  
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
  printf(" after substitution objectList=");
  raptor_sequence_print((yyvsp[-1].sequence), stdout);
  printf("\n\n");
#endif

  raptor_free_sequence((yyvsp[-1].sequence));

  raptor_free_term(first_identifier);
  raptor_free_term(rest_identifier);

  (yyval.identifier)=object;

  err_collection:
  if(errmsg) {
    if(blank)
      raptor_free_term(blank);

    if(object)
      raptor_free_term(object);

    if(rest_identifier)
      raptor_free_term(rest_identifier);

    if(first_identifier)
      raptor_free_term(first_identifier);

    raptor_free_sequence((yyvsp[-1].sequence));

    YYERROR_MSG(errmsg);
  }
}
#line 2948 "turtle_parser.c"
    break;

  case 64: /* collection: "(" ")"  */
#line 1269 "./turtle_parser.y"
{
  raptor_world* world = rdf_parser->world;

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1  
  printf("collection\n empty\n");
#endif

  (yyval.identifier) = raptor_new_term_from_uri(world, RAPTOR_RDF_nil_URI(world));
  if(!(yyval.identifier))
    YYERROR;
}
#line 2964 "turtle_parser.c"
    break;


#line 2968 "turtle_parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == TURTLE_PARSER_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (rdf_parser, yyscanner, yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= TURTLE_PARSER_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == TURTLE_PARSER_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, rdf_parser, yyscanner);
          yychar = TURTLE_PARSER_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, rdf_parser, yyscanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (rdf_parser, yyscanner, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != TURTLE_PARSER_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, rdf_parser, yyscanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, rdf_parser, yyscanner);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1283 "./turtle_parser.y"



/* Support functions */

/* Error handler with scanner context, during parsing */
int
turtle_parser_error(raptor_parser* rdf_parser, void* scanner,
                    const char *msg)
{
  raptor_turtle_parser* turtle_parser;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(turtle_parser->consumed == turtle_parser->consumable &&
     turtle_parser->processed < turtle_parser->consumed &&
     !turtle_parser->is_end) {
    /* we encountered an error on or around the last byte of the buffer
     * sorting it in the next run aye? */
    return 0;
  }
  
  if(turtle_parser->error_count++)
    return 0;

  rdf_parser->locator.line = turtle_parser->lineno;
#ifdef RAPTOR_TURTLE_USE_ERROR_COLUMNS
  rdf_parser->locator.column = turtle_lexer_get_column(yyscanner);
#endif

  raptor_log_error(rdf_parser->world, RAPTOR_LOG_LEVEL_ERROR,
                   &rdf_parser->locator, msg);

  return 0;
}


/* Error handler within raptor functions and callbacks */
static void
turtle_parser_error_simple(void* user_data, const char *msg, ...)
{
  raptor_parser* rdf_parser = (raptor_parser*)user_data;
  raptor_turtle_parser* turtle_parser;
  va_list args;

  va_start(args, msg);

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(turtle_parser->consumed == turtle_parser->consumable &&
     turtle_parser->processed < turtle_parser->consumed &&
     !turtle_parser->is_end) {
    /* we encountered an error on or around the last byte of the buffer
     * sorting it in the next run aye? */
    goto tidy;
  }
  
  if(turtle_parser->error_count++)
    goto tidy;

  rdf_parser->locator.line = turtle_parser->lineno;
#ifdef RAPTOR_TURTLE_USE_ERROR_COLUMNS
  rdf_parser->locator.column = turtle_lexer_get_column(yyscanner);
#endif

  raptor_log_error_varargs(rdf_parser->world, RAPTOR_LOG_LEVEL_ERROR,
                           &rdf_parser->locator, msg,
                           args);

tidy:
  va_end(args);
}


int
turtle_syntax_error(raptor_parser *rdf_parser, const char *message, ...)
{
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  va_list arguments;

  if(!turtle_parser)
    return 1;

  if(turtle_parser->error_count++)
    return 0;

  rdf_parser->locator.line = turtle_parser->lineno;
#ifdef RAPTOR_TURTLE_USE_ERROR_COLUMNS
  rdf_parser->locator.column = turtle_lexer_get_column(yyscanner);
#endif

  va_start(arguments, message);
  
  raptor_parser_log_error_varargs(((raptor_parser*)rdf_parser),
                                  RAPTOR_LOG_LEVEL_ERROR, message, arguments);

  va_end(arguments);

  return 0;
}


raptor_uri*
turtle_qname_to_uri(raptor_parser *rdf_parser, unsigned char *name, size_t name_len) 
{
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(!turtle_parser)
    return NULL;

  rdf_parser->locator.line = turtle_parser->lineno;
#ifdef RAPTOR_TURTLE_USE_ERROR_COLUMNS
  rdf_parser->locator.column = turtle_lexer_get_column(yyscanner);
#endif

  name_len = raptor_turtle_expand_qname_escapes(name, name_len,
                                                (raptor_simple_message_handler)turtle_parser_error_simple, rdf_parser);
  if(!name_len)
    return NULL;
  
  return raptor_qname_string_to_uri(&turtle_parser->namespaces, name, name_len);
}



#ifndef TURTLE_PUSH_PARSE
static int
turtle_parse(raptor_parser *rdf_parser, const char *string, size_t length)
{
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  int rc;
  
  if(!string || !*string)
    return 0;
  
  if(turtle_lexer_lex_init(&turtle_parser->scanner))
    return 1;
  turtle_parser->scanner_set = 1;

#if defined(YYDEBUG) && YYDEBUG > 0
  turtle_lexer_set_debug(1 ,&turtle_parser->scanner);
  turtle_parser_debug = 1;
#endif

  turtle_lexer_set_extra(rdf_parser, turtle_parser->scanner);
  (void)turtle_lexer__scan_bytes((char *)string, (yy_size_t)length, turtle_parser->scanner);

  rc = turtle_parser_parse(rdf_parser, turtle_parser->scanner);

  turtle_lexer_lex_destroy(turtle_parser->scanner);
  turtle_parser->scanner_set = 0;

  return rc;
}
#endif


#ifdef TURTLE_PUSH_PARSE
static int
turtle_push_parse(raptor_parser *rdf_parser, 
                  const char *string, size_t length)
{
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
  raptor_world* world = rdf_parser->world;
#endif
  raptor_turtle_parser* turtle_parser;
  void *buffer;
  int status;
  yypstate *ps;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(!string || !*string)
    return 0;
  
  if(turtle_lexer_lex_init(&turtle_parser->scanner))
    return 1;
  turtle_parser->scanner_set = 1;

#if defined(YYDEBUG) && YYDEBUG > 0
  turtle_lexer_set_debug(1 ,&turtle_parser->scanner);
  turtle_parser_debug = 1;
#endif

  turtle_lexer_set_extra(rdf_parser, turtle_parser->scanner);
  buffer = turtle_lexer__scan_bytes(string, (yy_size_t)length, turtle_parser->scanner);

  /* returns a parser instance or 0 on out of memory */
  ps = yypstate_new();
  if(!ps)
    return 1;

  do {
    TURTLE_PARSER_YYSTYPE lval;
    int token;

    memset(&lval, 0, sizeof(TURTLE_PARSER_YYSTYPE));
    
    token = turtle_lexer_lex(&lval, turtle_parser->scanner);

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
    printf("token %s\n", turtle_token_print(world, token, &lval));
#endif

    status = yypush_parse(ps, token, &lval, rdf_parser, turtle_parser->scanner);

    /* turtle_token_free(world, token, &lval); */

    if(!token || token == EOF || token == ERROR_TOKEN)
      break;
  } while (status == YYPUSH_MORE);
  yypstate_delete(ps);

  turtle_lexer_lex_destroy(turtle_parser->scanner);
  turtle_parser->scanner_set = 0;

  return 0;
}
#endif


/**
 * raptor_turtle_parse_init - Initialise the Raptor Turtle parser
 *
 * Return value: non 0 on failure
 **/

static int
raptor_turtle_parse_init(raptor_parser* rdf_parser, const char *name) {
  raptor_turtle_parser* turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  if(raptor_namespaces_init(rdf_parser->world, &turtle_parser->namespaces, 0))
    return 1;

  turtle_parser->trig = !strcmp(name, "trig");

  return 0;
}


/* PUBLIC FUNCTIONS */


/*
 * raptor_turtle_parse_terminate - Free the Raptor Turtle parser
 * @rdf_parser: parser object
 * 
 **/
static void
raptor_turtle_parse_terminate(raptor_parser *rdf_parser) {
  raptor_turtle_parser *turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  raptor_namespaces_clear(&turtle_parser->namespaces);

  if(turtle_parser->scanner_set) {
    turtle_lexer_lex_destroy(turtle_parser->scanner);
    turtle_parser->scanner_set = 0;
  }

  if(turtle_parser->buffer)
    RAPTOR_FREE(cdata, turtle_parser->buffer);

  if(turtle_parser->graph_name) {
    raptor_free_term(turtle_parser->graph_name);
    turtle_parser->graph_name = NULL;
  }
}


static void
raptor_turtle_clone_statement(raptor_parser *parser, raptor_statement *t)
{
  raptor_turtle_parser *turtle_parser = (raptor_turtle_parser*)parser->context;
  raptor_statement *statement = &parser->statement;

  if(!t->subject || !t->predicate || !t->object)
    return;

  if(turtle_parser->trig && turtle_parser->graph_name)
    statement->graph = raptor_term_copy(turtle_parser->graph_name);

  if(!parser->emitted_default_graph && !turtle_parser->graph_name) {
    /* for non-TRIG - start default graph at first triple */
    raptor_parser_start_graph(parser, NULL, 0);
    parser->emitted_default_graph++;
  }
  
  /* Two choices for subject for Turtle */
  if(t->subject->type == RAPTOR_TERM_TYPE_BLANK) {
    statement->subject = raptor_new_term_from_blank(parser->world,
                                                    t->subject->value.blank.string);
  } else {
    /* RAPTOR_TERM_TYPE_URI */
    RAPTOR_ASSERT(t->subject->type != RAPTOR_TERM_TYPE_URI,
                  "subject type is not resource");
    statement->subject = raptor_new_term_from_uri(parser->world,
                                                  t->subject->value.uri);
  }

  /* Predicates are URIs but check for bad ordinals */
  if(!strncmp((const char*)raptor_uri_as_string(t->predicate->value.uri),
              "http://www.w3.org/1999/02/22-rdf-syntax-ns#_", 44)) {
    unsigned char* predicate_uri_string = raptor_uri_as_string(t->predicate->value.uri);
    int predicate_ordinal = raptor_check_ordinal(predicate_uri_string+44);
    if(predicate_ordinal <= 0)
      raptor_parser_error(parser, "Illegal ordinal value %d in property '%s'.", predicate_ordinal, predicate_uri_string);
  }
  
  statement->predicate = raptor_new_term_from_uri(parser->world,
                                                  t->predicate->value.uri);
  

  /* Three choices for object for Turtle */
  if(t->object->type == RAPTOR_TERM_TYPE_URI) {
    statement->object = raptor_new_term_from_uri(parser->world,
                                                 t->object->value.uri);
  } else if(t->object->type == RAPTOR_TERM_TYPE_BLANK) {
    statement->object = raptor_new_term_from_blank(parser->world,
                                                   t->object->value.blank.string);
  } else {
    /* RAPTOR_TERM_TYPE_LITERAL */
    RAPTOR_ASSERT(t->object->type != RAPTOR_TERM_TYPE_LITERAL,
                  "object type is not literal");
    statement->object = raptor_new_term_from_literal(parser->world,
                                                     t->object->value.literal.string,
                                                     t->object->value.literal.datatype,
                                                     t->object->value.literal.language);
  }
}

static void
raptor_turtle_handle_statement(raptor_parser *parser, raptor_statement *t)
{
  if(!t->subject || !t->predicate || !t->object)
    return;

  if(!parser->statement_handler)
    return;

  /* Generate the statement */
  (*parser->statement_handler)(parser->user_data, t);
}

static void
raptor_turtle_generate_statement(raptor_parser *parser, raptor_statement *t)
{
  raptor_turtle_clone_statement(parser, t);
  raptor_turtle_handle_statement(parser, &parser->statement);
  /* clear resources */
  raptor_statement_clear(&parser->statement);
}

static void
raptor_turtle_defer_statement(raptor_parser *parser, raptor_statement *t)
{
  raptor_statement* st;
  raptor_turtle_parser* turtle_parser;

  raptor_turtle_clone_statement(parser, t);
  st = raptor_new_statement(parser->world);
  if(!st) {
    return;
  }
  /* copy static to dynamic statement, it's a move really */
  st->subject = parser->statement.subject, parser->statement.subject = NULL;
  st->predicate = parser->statement.predicate, parser->statement.predicate = NULL;
  st->object = parser->statement.object, parser->statement.object = NULL;
  st->graph = parser->statement.graph, parser->statement.graph = NULL;

  /* prep deferred list */
  turtle_parser = (raptor_turtle_parser*)parser->context;
  if(!turtle_parser->deferred) {
    turtle_parser->deferred = raptor_new_sequence((raptor_data_free_handler)raptor_free_statement, NULL);
    if(!turtle_parser->deferred) {
      goto free_seq;
    }
  }
  /* append to deferred list */
  if(raptor_sequence_push(turtle_parser->deferred, st)) {
  free_seq:
    raptor_free_statement(st);
  }
}



static int
raptor_turtle_parse_chunk(raptor_parser* rdf_parser, 
                          const unsigned char *s, size_t len,
                          int is_end)
{
  raptor_turtle_parser *turtle_parser;
  char *ptr;
  int rc;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
  RAPTOR_DEBUG2("adding %d bytes to line buffer\n", (int)len);
#endif

  if(!len && !is_end) {
    /* nothing to do */
    return 0;
  }

  /* the actual buffer will contained unprocessed characters from
   * the last run plus the chunk passed here */
  turtle_parser->end_of_buffer = turtle_parser->consumed + len;
  if(turtle_parser->end_of_buffer > turtle_parser->buffer_length) {
    /* resize */
    size_t new_buffer_length = turtle_parser->end_of_buffer;

    turtle_parser->buffer = RAPTOR_REALLOC(char*, turtle_parser->buffer,
                                           new_buffer_length + 1);

    /* adjust stored length */
    turtle_parser->buffer_length = new_buffer_length;
  }
  if(!turtle_parser->buffer && turtle_parser->buffer_length) {
    /* we tried to alloc a buffer but we failed */
    raptor_parser_fatal_error(rdf_parser, "Out of memory");
    return 1;
  }
  if(is_end && !turtle_parser->end_of_buffer) {
    /* Nothing to do */
    return 0;
  }

  /* move pointer to end of cdata buffer */
  ptr = turtle_parser->buffer + turtle_parser->consumed;

  /* now write new stuff at end of cdata buffer */
  memcpy(ptr, s, len);
  ptr += len;
  *ptr = '\0';

  /* reset processed counter */
  turtle_parser->processed = 0U;
  /* unconsume */
  turtle_parser->consumed = 0U;
  /* reset line numbers */
  turtle_parser->lineno = turtle_parser->lineno_last_good;

  /* let everyone know if this is the last chunk */
  turtle_parser->is_end = is_end;
  if(!is_end) {
    /* it's safer not to pass the very last line to the lexer
     * just in case we end up with EOB-in-the-middle-of-X situations */
    size_t i = turtle_parser->end_of_buffer;
    while(i > 0U && turtle_parser->buffer[--i] != '\n');
    /* either i == 0U or i points to the last \n before the end-of-buffer */
    turtle_parser->consumable = i;
  } else {
    /* otherwise the consumable number of bytes coincides with the EOB */
    turtle_parser->consumable = turtle_parser->end_of_buffer;
  }

#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 1
    RAPTOR_DEBUG3("buffer buffer now '%s' (%ld bytes)\n", 
                  turtle_parser->buffer, turtle_parser->buffer_length);
#endif

#ifdef TURTLE_PUSH_PARSE
  rc = turtle_push_parse(rdf_parser, 
                         turtle_parser->buffer, turtle_parser->consumable);
#else
  rc = turtle_parse(rdf_parser, turtle_parser->buffer, turtle_parser->consumable);
#endif  

  if(turtle_parser->error_count) {
    rc = 1;
  } else if(!is_end) {
    /* move stuff to the beginning of the buffer */
    turtle_parser->consumed = turtle_parser->end_of_buffer - turtle_parser->processed;
    if(turtle_parser->consumed && turtle_parser->processed) {
      memmove(turtle_parser->buffer,
              turtle_parser->buffer + turtle_parser->processed,
              turtle_parser->consumed);
      /* cancel all deferred eval's */
      if(turtle_parser->deferred) {
        raptor_free_sequence(turtle_parser->deferred);
        turtle_parser->deferred = NULL;
      }
    }
  } else {
    /* this was the last chunk, finalise */
    if(turtle_parser->deferred) {
      raptor_sequence* def = turtle_parser->deferred;
      int i;
      for(i = 0; i < raptor_sequence_size(def); i++) {
	raptor_statement *t2 = (raptor_statement*)raptor_sequence_get_at(def, i);

	raptor_turtle_handle_statement(rdf_parser, t2);
      }
    }
    if(rdf_parser->emitted_default_graph) {
      /* for non-TRIG - end default graph after last triple */
      raptor_parser_end_graph(rdf_parser, NULL, 0);
      rdf_parser->emitted_default_graph--;
    }
    if(turtle_parser->deferred) {
      /* clear resources */
      raptor_free_sequence(turtle_parser->deferred);
      turtle_parser->deferred = NULL;
    }
  }
  return rc;
}


static int
raptor_turtle_parse_start(raptor_parser *rdf_parser) 
{
  raptor_locator *locator=&rdf_parser->locator;
  raptor_turtle_parser *turtle_parser = (raptor_turtle_parser*)rdf_parser->context;

  /* base URI required for Turtle */
  if(!rdf_parser->base_uri)
    return 1;

  locator->line = 1;
  locator->column= -1; /* No column info */
  locator->byte= -1; /* No bytes info */

  if(turtle_parser->buffer_length) {
    RAPTOR_FREE(cdata, turtle_parser->buffer);
    turtle_parser->buffer = NULL;
    turtle_parser->buffer_length = 0;
  }
  
  turtle_parser->lineno = 1;

  return 0;
}


static int
raptor_turtle_parse_recognise_syntax(raptor_parser_factory* factory, 
                                     const unsigned char *buffer, size_t len,
                                     const unsigned char *identifier, 
                                     const unsigned char *suffix, 
                                     const char *mime_type)
{
  int score= 0;
  
  if(suffix) {
    if(!strcmp((const char*)suffix, "ttl"))
      score = 8;
    if(!strcmp((const char*)suffix, "n3"))
      score = 3;
  }
  
  if(mime_type) {
    if(strstr((const char*)mime_type, "turtle"))
      score += 6;
    if(strstr((const char*)mime_type, "n3"))
      score += 3;
  }

  /* Do this as long as N3 is not supported since it shares the same syntax */
  if(buffer && len) {
#define  HAS_TURTLE_PREFIX (raptor_memstr((const char*)buffer, len, "@prefix ") != NULL)
/* The following could also be found with N-Triples but not with @prefix */
#define  HAS_TURTLE_RDF_URI (raptor_memstr((const char*)buffer, len, ": <http://www.w3.org/1999/02/22-rdf-syntax-ns#>") != NULL)

    if(HAS_TURTLE_PREFIX) {
      score = 6;
      if(HAS_TURTLE_RDF_URI)
        score += 2;
    }
  }
  
  return score;
}


static raptor_uri*
raptor_turtle_get_graph(raptor_parser* rdf_parser)
{
  raptor_turtle_parser *turtle_parser;

  turtle_parser = (raptor_turtle_parser*)rdf_parser->context;
  if(turtle_parser->graph_name)
    return raptor_uri_copy(turtle_parser->graph_name->value.uri);

  return NULL;
}


#ifdef RAPTOR_PARSER_TRIG
static int
raptor_trig_parse_recognise_syntax(raptor_parser_factory* factory, 
                                   const unsigned char *buffer, size_t len,
                                   const unsigned char *identifier, 
                                   const unsigned char *suffix, 
                                   const char *mime_type)
{
  int score= 0;
  
  if(suffix) {
    if(!strcmp((const char*)suffix, "trig"))
      score = 9;
#ifndef RAPTOR_PARSER_TURTLE
    if(!strcmp((const char*)suffix, "ttl"))
      score = 8;
    if(!strcmp((const char*)suffix, "n3"))
      score = 3;
#endif
  }
  
  if(mime_type) {
    if(strstr((const char*)mime_type, "trig"))
      score = 6;
#ifndef RAPTOR_PARSER_TURTLE
    if(strstr((const char*)mime_type, "turtle"))
      score += 6;
    if(strstr((const char*)mime_type, "n3"))
      score += 3;
#endif
  }

#ifndef RAPTOR_PARSER_TURTLE
  /* Do this as long as N3 is not supported since it shares the same syntax */
  if(buffer && len) {
#define  HAS_TRIG_PREFIX (raptor_memstr((const char*)buffer, len, "@prefix ") != NULL)
/* The following could also be found with N-Triples but not with @prefix */
#define  HAS_TRIG_RDF_URI (raptor_memstr((const char*)buffer, len, ": <http://www.w3.org/1999/02/22-rdf-syntax-ns#>") != NULL)

    if(HAS_TRIG_PREFIX) {
      score = 6;
      if(HAS_TRIG_RDF_URI)
        score += 2;
    }
  }
#endif
  
  return score;
}
#endif


#ifdef RAPTOR_PARSER_TURTLE
static const char* const turtle_names[4] = { "turtle", "ntriples-plus", "n3", NULL };

static const char* const turtle_uri_strings[3] = {
  "http://www.w3.org/ns/formats/Turtle",
  "http://www.dajobe.org/2004/01/turtle/",
  NULL
};
  
#define TURTLE_TYPES_COUNT 6
static const raptor_type_q turtle_types[TURTLE_TYPES_COUNT + 1] = {
  /* first one is the default */
  { "text/turtle", 11, 10},
  { "application/x-turtle", 20, 10},
  { "application/turtle", 18, 10},
  { "text/n3", 7, 3},
  { "text/rdf+n3", 11, 3},
  { "application/rdf+n3", 18, 3},
  { NULL, 0}
};

static int
raptor_turtle_parser_register_factory(raptor_parser_factory *factory) 
{
  int rc = 0;

  factory->desc.names = turtle_names;

  factory->desc.mime_types = turtle_types;

  factory->desc.label = "Turtle Terse RDF Triple Language";
  factory->desc.uri_strings = turtle_uri_strings;

  factory->desc.flags = RAPTOR_SYNTAX_NEED_BASE_URI;
  
  factory->context_length     = sizeof(raptor_turtle_parser);
  
  factory->init      = raptor_turtle_parse_init;
  factory->terminate = raptor_turtle_parse_terminate;
  factory->start     = raptor_turtle_parse_start;
  factory->chunk     = raptor_turtle_parse_chunk;
  factory->recognise_syntax = raptor_turtle_parse_recognise_syntax;
  factory->get_graph = raptor_turtle_get_graph;

  return rc;
}
#endif


#ifdef RAPTOR_PARSER_TRIG
static const char* const trig_names[2] = { "trig", NULL };
  
static const char* const trig_uri_strings[2] = {
  "http://www.wiwiss.fu-berlin.de/suhl/bizer/TriG/Spec/",
  NULL
};
  
#define TRIG_TYPES_COUNT 1
static const raptor_type_q trig_types[TRIG_TYPES_COUNT + 1] = {
  /* first one is the default */
  { "application/x-trig", 18, 10},
  { NULL, 0, 0}
};

static int
raptor_trig_parser_register_factory(raptor_parser_factory *factory) 
{
  int rc = 0;

  factory->desc.names = trig_names;

  factory->desc.mime_types = trig_types;

  factory->desc.label = "TriG - Turtle with Named Graphs";
  factory->desc.uri_strings = trig_uri_strings;

  factory->desc.flags = RAPTOR_SYNTAX_NEED_BASE_URI;
  
  factory->context_length     = sizeof(raptor_turtle_parser);
  
  factory->init      = raptor_turtle_parse_init;
  factory->terminate = raptor_turtle_parse_terminate;
  factory->start     = raptor_turtle_parse_start;
  factory->chunk     = raptor_turtle_parse_chunk;
  factory->recognise_syntax = raptor_trig_parse_recognise_syntax;
  factory->get_graph = raptor_turtle_get_graph;

  return rc;
}
#endif


#ifdef RAPTOR_PARSER_TURTLE
int
raptor_init_parser_turtle(raptor_world* world)
{
  return !raptor_world_register_parser_factory(world,
                                               &raptor_turtle_parser_register_factory);
}
#endif

#ifdef RAPTOR_PARSER_TRIG
int
raptor_init_parser_trig(raptor_world* world)
{
  return !raptor_world_register_parser_factory(world,
                                               &raptor_trig_parser_register_factory);
}
#endif


#ifdef STANDALONE
#include <stdio.h>
#include <locale.h>

#define TURTLE_FILE_BUF_SIZE 2048

static void
turtle_parser_print_statement(void *user,
                              raptor_statement *statement) 
{
  FILE* stream = (FILE*)user;
  raptor_statement_print(statement, stream);
  putc('\n', stream);
}
  


int
main(int argc, char *argv[]) 
{
  char string[TURTLE_FILE_BUF_SIZE];
  raptor_parser rdf_parser; /* static */
  raptor_turtle_parser turtle_parser; /* static */
  raptor_locator *locator = &rdf_parser.locator;
  FILE *fh;
  const char *filename;
  size_t nobj;
  
#if defined(RAPTOR_DEBUG) && RAPTOR_DEBUG > 2
  turtle_parser_debug = 1;
#endif

  if(argc > 1) {
    filename = argv[1];
    fh = fopen(filename, "r");
    if(!fh) {
      fprintf(stderr, "%s: Cannot open file %s - %s\n", argv[0], filename,
              strerror(errno));
      exit(1);
    }
  } else {
    filename="<stdin>";
    fh = stdin;
  }

  memset(string, 0, TURTLE_FILE_BUF_SIZE);
  nobj = fread(string, TURTLE_FILE_BUF_SIZE, 1, fh);
  if(nobj < TURTLE_FILE_BUF_SIZE) {
    if(ferror(fh)) {
      fprintf(stderr, "%s: file '%s' read failed - %s\n",
              argv[0], filename, strerror(errno));
      fclose(fh);
      return(1);
    }
  }
  
  if(argc > 1)
    fclose(fh);

  memset(&rdf_parser, 0, sizeof(rdf_parser));
  memset(&turtle_parser, 0, sizeof(turtle_parser));

  locator->line= locator->column = -1;
  locator->file= filename;

  turtle_parser.lineno= 1;

  rdf_parser.world = raptor_new_world();
  rdf_parser.context = &turtle_parser;
  rdf_parser.base_uri = raptor_new_uri(rdf_parser.world,
                                       (const unsigned char*)"http://example.org/fake-base-uri/");

  raptor_parser_set_statement_handler(&rdf_parser, stdout,
                                      turtle_parser_print_statement);
  raptor_turtle_parse_init(&rdf_parser, "turtle");
  
  turtle_parser.error_count = 0;

#ifdef TURTLE_PUSH_PARSE
  turtle_push_parse(&rdf_parser, string, strlen(string));
#else
  turtle_parse(&rdf_parser, string, strlen(string));
#endif

  raptor_turtle_parse_terminate(&rdf_parser);
  
  raptor_free_uri(rdf_parser.base_uri);

  raptor_free_world(rdf_parser.world);
  
  return (0);
}
#endif
