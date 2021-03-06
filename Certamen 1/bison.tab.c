//
// Created by kid03 on 16-11-21.
//

// A Bison parser, made by GNU Bison 3.7.5.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.



// First part of user prologue.
#line 3 "bison.y"

#include <stdio.h>
#include <string>
#include "Graph.h"

using namespace std;

int yylex();
void yyerror(string s);
Graph * graph ;

#line 53 "bison.tab.c"




# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

namespace yy {
#line 184 "bison.tab.c"




		/// A Bison parser.
		class parser
		{
			public:
#ifndef YYSTYPE
			/// Symbol semantic values.
			union semantic_type
			{
#line 15 "bison.y"

				string strVal;
				int intVal;

#line 202 "bison.tab.c"

			};
#else
			typedef YYSTYPE semantic_type;
#endif

			/// Syntax errors thrown from user actions.
			struct syntax_error : std::runtime_error
			{
				syntax_error (const std::string& m)
				: std::runtime_error (m)
						{}

				syntax_error (const syntax_error& s)
				: std::runtime_error (s.what ())
				{}

				~syntax_error () YY_NOEXCEPT YY_NOTHROW;
			};

			/// Token kinds.
			struct token
			{
				enum token_kind_type
				{
					YYEMPTY = -2,
					YYEOF = 0,                     // "end of file"
					YYerror = 256,                 // error
					YYUNDEF = 257,                 // "invalid token"
					NEWPLACE = 258,                // NEWPLACE
					NEWARC = 259,                  // NEWARC
					NEWTRANS = 260,                // NEWTRANS
					RMPLACE = 261,                 // RMPLACE
					RMARC = 262,                   // RMARC
					RMTRANS = 263,                 // RMTRANS
					SETTOKENS = 264,               // SETTOKENS
					SETPESO = 265,                 // SETPESO
					MAZESOLVER = 266,              // MAZESOLVER
					READWRITE = 267,               // READWRITE
					MUTUALEXCLUSION = 268,         // MUTUALEXCLUSION
					PALABRA = 269,                 // PALABRA
					NUMERO = 270                   // NUMERO
				};
				/// Backward compatibility alias (Bison 3.6).
				typedef token_kind_type yytokentype;
			};

			/// Token kind, as returned by yylex.
			typedef token::yytokentype token_kind_type;

			/// Backward compatibility alias (Bison 3.6).
			typedef token_kind_type token_type;

			/// Symbol kinds.
			struct symbol_kind
			{
				enum symbol_kind_type
				{
					YYNTOKENS = 18, ///< Number of tokens.
					S_YYEMPTY = -2,
					S_YYEOF = 0,                             // "end of file"
					S_YYerror = 1,                           // error
					S_YYUNDEF = 2,                           // "invalid token"
					S_NEWPLACE = 3,                          // NEWPLACE
					S_NEWARC = 4,                            // NEWARC
					S_NEWTRANS = 5,                          // NEWTRANS
					S_RMPLACE = 6,                           // RMPLACE
					S_RMARC = 7,                             // RMARC
					S_RMTRANS = 8,                           // RMTRANS
					S_SETTOKENS = 9,                         // SETTOKENS
					S_SETPESO = 10,                          // SETPESO
					S_MAZESOLVER = 11,                       // MAZESOLVER
					S_READWRITE = 12,                        // READWRITE
					S_MUTUALEXCLUSION = 13,                  // MUTUALEXCLUSION
					S_PALABRA = 14,                          // PALABRA
					S_NUMERO = 15,                           // NUMERO
					S_16_ = 16,                              // '('
					S_17_ = 17,                              // ')'
					S_YYACCEPT = 18,                         // $accept
					S_INICIO = 19,                           // INICIO
					S_Expr = 20                              // Expr
				};
			};

			/// (Internal) symbol kind.
			typedef symbol_kind::symbol_kind_type symbol_kind_type;

			/// The number of tokens.
			static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

			/// A complete symbol.
			///
			/// Expects its Base type to provide access to the symbol kind
			/// via kind ().
			///
			/// Provide access to semantic value.
			template <typename Base>
			struct basic_symbol : Base
			{
				/// Alias to Base.
				typedef Base super_type;

				/// Default constructor.
				basic_symbol ()
						: value ()
						{}

#if 201103L <= YY_CPLUSPLUS
				/// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value (std::move (that.value))
      {}
#endif

				/// Copy constructor.
				basic_symbol (const basic_symbol& that);
				/// Constructor for valueless symbols.
				basic_symbol (typename Base::kind_type t);

				/// Constructor for symbols with semantic value.
				basic_symbol (typename Base::kind_type t,
				YY_RVREF (semantic_type) v);

				/// Destroy the symbol.
				~basic_symbol ()
				{
					clear ();
				}

				/// Destroy contents, and record that is empty.
				void clear () YY_NOEXCEPT
				{
					Base::clear ();
				}

#if YYDEBUG || 0
				/// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return parser::symbol_name (this->kind ());
      }
#endif // #if YYDEBUG || 0


				/// Backward compatibility (Bison 3.6).
				symbol_kind_type type_get () const YY_NOEXCEPT;

				/// Whether empty.
				bool empty () const YY_NOEXCEPT;

				/// Destructive move, \a s is emptied into this.
				void move (basic_symbol& s);

				/// The semantic value.
				semantic_type value;

				private:
#if YY_CPLUSPLUS < 201103L
/// Assignment operator.
basic_symbol& operator= (const basic_symbol& that);
#endif
			};

			/// Type access provider for token (enum) based symbols.
			struct by_kind
			{
				/// Default constructor.
				by_kind ();

#if 201103L <= YY_CPLUSPLUS
				/// Move constructor.
      by_kind (by_kind&& that);
#endif

				/// Copy constructor.
				by_kind (const by_kind& that);

				/// The symbol kind as needed by the constructor.
				typedef token_kind_type kind_type;

				/// Constructor from (external) token numbers.
				by_kind (kind_type t);

				/// Record that this symbol is empty.
				void clear () YY_NOEXCEPT;

				/// Steal the symbol kind from \a that.
				void move (by_kind& that);

				/// The (internal) type number (corresponding to \a type).
				/// \a empty when empty.
				symbol_kind_type kind () const YY_NOEXCEPT;

				/// Backward compatibility (Bison 3.6).
				symbol_kind_type type_get () const YY_NOEXCEPT;

				/// The symbol kind.
				/// \a S_YYEMPTY when empty.
				symbol_kind_type kind_;
			};

			/// Backward compatibility for a private implementation detail (Bison 3.6).
			typedef by_kind by_type;

			/// "External" symbols: returned by the scanner.
			struct symbol_type : basic_symbol<by_kind>
			{};

			/// Build a parser object.
			parser ();
			virtual ~parser ();

#if 201103L <= YY_CPLUSPLUS
			/// Non copyable.
    parser (const parser&) = delete;
    /// Non copyable.
    parser& operator= (const parser&) = delete;
#endif

			/// Parse.  An alias for parse ().
			/// \returns  0 iff parsing succeeded.
			int operator() ();

			/// Parse.
			/// \returns  0 iff parsing succeeded.
			virtual int parse ();

#if YYDEBUG
			/// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

			/// Report a syntax error.
			/// \param msg    a description of the syntax error.
			virtual void error (const std::string& msg);

			/// Report a syntax error.
			void error (const syntax_error& err);

#if YYDEBUG || 0
			/// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);
#endif // #if YYDEBUG || 0




			private:
#if YY_CPLUSPLUS < 201103L
			/// Non copyable.
			parser (const parser&);
			/// Non copyable.
			parser& operator= (const parser&);
#endif


			/// Stored state numbers (used for stacks).
			typedef signed char state_type;

			/// Compute post-reduction state.
			/// \param yystate   the current state
			/// \param yysym     the nonterminal to push on the stack
			static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

			/// Whether the given \c yypact_ value indicates a defaulted state.
			/// \param yyvalue   the value to check
			static bool yy_pact_value_is_default_ (int yyvalue);

			/// Whether the given \c yytable_ value indicates a syntax error.
			/// \param yyvalue   the value to check
			static bool yy_table_value_is_error_ (int yyvalue);

			static const signed char yypact_ninf_;
			static const signed char yytable_ninf_;

			/// Convert a scanner token kind \a t to a symbol kind.
			/// In theory \a t should be a token_kind_type, but character literals
			/// are valid, yet not members of the token_type enum.
			static symbol_kind_type yytranslate_ (int t);

#if YYDEBUG || 0
			/// For a symbol, its name in clear.
    static const char* const yytname_[];
#endif // #if YYDEBUG || 0


			// Tables.
			// YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
			// STATE-NUM.
			static const signed char yypact_[];

			// YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
			// Performed when YYTABLE does not specify something else to do.  Zero
			// means the default is an error.
			static const signed char yydefact_[];

			// YYPGOTO[NTERM-NUM].
			static const signed char yypgoto_[];

			// YYDEFGOTO[NTERM-NUM].
			static const signed char yydefgoto_[];

			// YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
			// positive, shift that token.  If negative, reduce the rule whose
			// number is the opposite.  If YYTABLE_NINF, syntax error.
			static const signed char yytable_[];

			static const signed char yycheck_[];

			// YYSTOS[STATE-NUM] -- The (internal number of the) accessing
			// symbol of state STATE-NUM.
			static const signed char yystos_[];

			// YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
			static const signed char yyr1_[];

			// YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
			static const signed char yyr2_[];


#if YYDEBUG
			// YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const signed char yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

			/// \brief Reclaim the memory associated to a symbol.
			/// \param yymsg     Why this token is reclaimed.
			///                  If null, print nothing.
			/// \param yysym     The symbol.
			template <typename Base>
			void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

			private:
			/// Type access provider for state based symbols.
			struct by_state
			{
				/// Default constructor.
				by_state () YY_NOEXCEPT;

				/// The symbol kind as needed by the constructor.
				typedef state_type kind_type;

				/// Constructor.
				by_state (kind_type s) YY_NOEXCEPT;

				/// Copy constructor.
				by_state (const by_state& that) YY_NOEXCEPT;

				/// Record that this symbol is empty.
				void clear () YY_NOEXCEPT;

				/// Steal the symbol kind from \a that.
				void move (by_state& that);

				/// The symbol kind (corresponding to \a state).
				/// \a symbol_kind::S_YYEMPTY when empty.
				symbol_kind_type kind () const YY_NOEXCEPT;

				/// The state number used to denote an empty symbol.
				/// We use the initial state, as it does not have a value.
				enum { empty_state = 0 };

				/// The state.
				/// \a empty when empty.
				state_type state;
			};

			/// "Internal" symbol: element of the stack.
			struct stack_symbol_type : basic_symbol<by_state>
			{
				/// Superclass.
				typedef basic_symbol<by_state> super_type;
				/// Construct an empty symbol.
				stack_symbol_type ();
				/// Move or copy construction.
				stack_symbol_type (YY_RVREF (stack_symbol_type) that);
				/// Steal the contents from \a sym to build this.
				stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
				/// Assignment, needed by push_back by some old implementations.
				/// Moves the contents of that.
				stack_symbol_type& operator= (stack_symbol_type& that);

				/// Assignment, needed by push_back by other implementations.
				/// Needed by some other old implementations.
				stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
			};

			/// A stack with random access from its top.
			template <typename T, typename S = std::vector<T> >
											   class stack
			{
				public:
				// Hide our reversed order.
				typedef typename S::iterator iterator;
				typedef typename S::const_iterator const_iterator;
				typedef typename S::size_type size_type;
				typedef typename std::ptrdiff_t index_type;

				stack (size_type n = 200)
				: seq_ (n)
				{}

#if 201103L <= YY_CPLUSPLUS
				/// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

				/// Random access.
				///
				/// Index 0 returns the topmost element.
				const T&
						operator[] (index_type i) const
				{
					return seq_[size_type (size () - 1 - i)];
				}

				/// Random access.
				///
				/// Index 0 returns the topmost element.
				T&
				operator[] (index_type i)
				{
					return seq_[size_type (size () - 1 - i)];
				}

				/// Steal the contents of \a t.
				///
				/// Close to move-semantics.
				void
				push (YY_MOVE_REF (T) t)
				{
					seq_.push_back (T ());
					operator[] (0).move (t);
				}

				/// Pop elements from the stack.
				void
				pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
				{
					for (; 0 < n; --n)
						seq_.pop_back ();
				}

				/// Pop all elements from the stack.
				void
				clear () YY_NOEXCEPT
				{
					seq_.clear ();
				}

				/// Number of elements on the stack.
				index_type
				size () const YY_NOEXCEPT
				{
					return index_type (seq_.size ());
				}

				/// Iterator on top of the stack (going downwards).
				const_iterator
				begin () const YY_NOEXCEPT
				{
					return seq_.begin ();
				}

				/// Bottom of the stack.
				const_iterator
				end () const YY_NOEXCEPT
				{
					return seq_.end ();
				}

				/// Present a slice of the top of a stack.
				class slice
						{
								public:
								slice (const stack& stack, index_type range)
						: stack_ (stack)
						, range_ (range)
						{}

						const T&
						operator[] (index_type i) const
						{
							return stack_[range_ - i];
						}

						private:
						const stack& stack_;
						index_type range_;
						};

				private:
#if YY_CPLUSPLUS < 201103L
				/// Non copyable.
				stack (const stack&);
				/// Non copyable.
				stack& operator= (const stack&);
#endif
				/// The wrapped container.
				S seq_;
			};


			/// Stack type.
			typedef stack<stack_symbol_type> stack_type;

			/// The stack.
			stack_type yystack_;

			/// Push a new state on the stack.
			/// \param m    a debug message to display
			///             if null, no trace is output.
			/// \param sym  the symbol
			/// \warning the contents of \a s.value is stolen.
			void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

			/// Push a new look ahead token on the state on the stack.
			/// \param m    a debug message to display
			///             if null, no trace is output.
			/// \param s    the state
			/// \param sym  the symbol (for its value and location).
			/// \warning the contents of \a sym.value is stolen.
			void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

			/// Pop \a n symbols from the stack.
			void yypop_ (int n = 1);

			/// Constants.
			enum
			{
				yylast_ = 3,     ///< Last index in yytable_.
				yynnts_ = 3,  ///< Number of nonterminal symbols.
				yyfinal_ = 5 ///< Termination state number.
			};



		};


} // yy
#line 774 "bison.tab.c"








#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 853 "bison.tab.c"

		/// Build a parser object.
		parser::parser ()
#if YYDEBUG
		: yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
		{}

		parser::~parser ()
		{}

		parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
		{}

		/*---------------.
		| symbol kinds.  |
		`---------------*/

		// basic_symbol.
		template <typename Base>
		parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
		: Base (that)
		, value (that.value)
		{}


		/// Constructor for valueless symbols.
		template <typename Base>
		parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t)
		: Base (t)
		, value ()
		{}

		template <typename Base>
		parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (semantic_type) v)
		: Base (t)
		, value (YY_MOVE (v))
		{}

		template <typename Base>
		parser::symbol_kind_type
		parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
		{
			return this->kind ();
		}

		template <typename Base>
		bool
		parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
		{
			return this->kind () == symbol_kind::S_YYEMPTY;
		}

		template <typename Base>
		void
		parser::basic_symbol<Base>::move (basic_symbol& s)
		{
			super_type::move (s);
			value = YY_MOVE (s.value);
		}

		// by_kind.
		parser::by_kind::by_kind ()
		: kind_ (symbol_kind::S_YYEMPTY)
		{}

#if 201103L <= YY_CPLUSPLUS
		parser::by_kind::by_kind (by_kind&& that)
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

		parser::by_kind::by_kind (const by_kind& that)
		: kind_ (that.kind_)
		{}

		parser::by_kind::by_kind (token_kind_type t)
		: kind_ (yytranslate_ (t))
		{}

		void
		parser::by_kind::clear () YY_NOEXCEPT
		{
			kind_ = symbol_kind::S_YYEMPTY;
		}

		void
		parser::by_kind::move (by_kind& that)
		{
			kind_ = that.kind_;
			that.clear ();
		}

		parser::symbol_kind_type
		parser::by_kind::kind () const YY_NOEXCEPT
		{
			return kind_;
		}

		parser::symbol_kind_type
		parser::by_kind::type_get () const YY_NOEXCEPT
		{
			return this->kind ();
		}


		// by_state.
		parser::by_state::by_state () YY_NOEXCEPT
		: state (empty_state)
		{}

		parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
		: state (that.state)
		{}

		void
		parser::by_state::clear () YY_NOEXCEPT
		{
			state = empty_state;
		}

		void
		parser::by_state::move (by_state& that)
		{
			state = that.state;
			that.clear ();
		}

		parser::by_state::by_state (state_type s) YY_NOEXCEPT
		: state (s)
		{}

		parser::symbol_kind_type
		parser::by_state::kind () const YY_NOEXCEPT
		{
			if (state == empty_state)
				return symbol_kind::S_YYEMPTY;
			else
				return YY_CAST (symbol_kind_type, yystos_[+state]);
		}

		parser::stack_symbol_type::stack_symbol_type ()
		{}

		parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
		: super_type (YY_MOVE (that.state), YY_MOVE (that.value))
		{
#if 201103L <= YY_CPLUSPLUS
			// that is emptied.
    that.state = empty_state;
#endif
		}

		parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
		: super_type (s, YY_MOVE (that.value))
		{
			// that is emptied.
			that.kind_ = symbol_kind::S_YYEMPTY;
		}

#if YY_CPLUSPLUS < 201103L
		parser::stack_symbol_type&
		parser::stack_symbol_type::operator= (const stack_symbol_type& that)
		{
			state = that.state;
			value = that.value;
			return *this;
		}

		parser::stack_symbol_type&
		parser::stack_symbol_type::operator= (stack_symbol_type& that)
		{
			state = that.state;
			value = that.value;
			// that is emptied.
			that.state = empty_state;
			return *this;
		}
#endif

		template <typename Base>
		void
		parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
		{
			if (yymsg)
				YY_SYMBOL_PRINT (yymsg, yysym);

			// User destructor.
			YY_USE (yysym.kind ());
		}

#if YYDEBUG
		template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " (";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

		void
		parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
		{
			if (m)
				YY_SYMBOL_PRINT (m, sym);
			yystack_.push (YY_MOVE (sym));
		}

		void
		parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
		{
#if 201103L <= YY_CPLUSPLUS
			yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
			stack_symbol_type ss (s, sym);
			yypush_ (m, ss);
#endif
		}

		void
		parser::yypop_ (int n)
		{
			yystack_.pop (n);
		}

#if YYDEBUG
		std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

		parser::state_type
		parser::yy_lr_goto_state_ (state_type yystate, int yysym)
		{
			int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
			if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
				return yytable_[yyr];
			else
				return yydefgoto_[yysym - YYNTOKENS];
		}

		bool
		parser::yy_pact_value_is_default_ (int yyvalue)
		{
			return yyvalue == yypact_ninf_;
		}

		bool
		parser::yy_table_value_is_error_ (int yyvalue)
		{
			return yyvalue == yytable_ninf_;
		}

		int
		parser::operator() ()
		{
			return parse ();
		}

		int
		parser::parse ()
		{
			int yyn;
			/// Length of the RHS of the rule being reduced.
			int yylen = 0;

			// Error handling.
			int yynerrs_ = 0;
			int yyerrstatus_ = 0;

			/// The lookahead symbol.
			symbol_type yyla;

			/// The return value of parse ().
			int yyresult;

#if YY_EXCEPTIONS
			try
#endif // YY_EXCEPTIONS
			{
				YYCDEBUG << "Starting parse\n";


				/* Initialize the stack.  The initial state will be set in
				   yynewstate, since the latter expects the semantical and the
				   location values to have been already stored, initialize these
				   stacks with a primary value.  */
				yystack_.clear ();
				yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

				/*-----------------------------------------------.
				| yynewstate -- push a new symbol on the stack.  |
				`-----------------------------------------------*/
				yynewstate:
				YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
				YY_STACK_PRINT ();

				// Accept?
				if (yystack_[0].state == yyfinal_)
					YYACCEPT;

				goto yybackup;


				/*-----------.
				| yybackup.  |
				`-----------*/
				yybackup:
				// Try to take a decision without lookahead.
				yyn = yypact_[+yystack_[0].state];
				if (yy_pact_value_is_default_ (yyn))
					goto yydefault;

				// Read a lookahead token.
				if (yyla.empty ())
				{
					YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
					try
#endif // YY_EXCEPTIONS
					{
						yyla.kind_ = yytranslate_ (yylex (&yyla.value));
					}
#if YY_EXCEPTIONS
					catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
				}
				YY_SYMBOL_PRINT ("Next token is", yyla);

				if (yyla.kind () == symbol_kind::S_YYerror)
				{
					// The scanner already issued an error message, process directly
					// to error recovery.  But do not keep the error token as
					// lookahead, it is too special and may lead us to an endless
					// loop in error recovery. */
					yyla.kind_ = symbol_kind::S_YYUNDEF;
					goto yyerrlab1;
				}

				/* If the proper action on seeing token YYLA.TYPE is to reduce or
				   to detect an error, take that action.  */
				yyn += yyla.kind ();
				if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
				{
					goto yydefault;
				}

				// Reduce or error.
				yyn = yytable_[yyn];
				if (yyn <= 0)
				{
					if (yy_table_value_is_error_ (yyn))
						goto yyerrlab;
					yyn = -yyn;
					goto yyreduce;
				}

				// Count tokens shifted since error; after three, turn off error status.
				if (yyerrstatus_)
					--yyerrstatus_;

				// Shift the lookahead token.
				yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
				goto yynewstate;


				/*-----------------------------------------------------------.
				| yydefault -- do the default action for the current state.  |
				`-----------------------------------------------------------*/
				yydefault:
				yyn = yydefact_[+yystack_[0].state];
				if (yyn == 0)
					goto yyerrlab;
				goto yyreduce;


				/*-----------------------------.
				| yyreduce -- do a reduction.  |
				`-----------------------------*/
				yyreduce:
				yylen = yyr2_[yyn];
				{
					stack_symbol_type yylhs;
					yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
					/* If YYLEN is nonzero, implement the default value of the
					   action: '$$ = $1'.  Otherwise, use the top of the stack.

					   Otherwise, the following line sets YYLHS.VALUE to garbage.
					   This behavior is undocumented and Bison users should not rely
					   upon it.  */
					if (yylen)
						yylhs.value = yystack_[yylen - 1].value;
					else
						yylhs.value = yystack_[0].value;


					// Perform the reduction.
					YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
					try
#endif // YY_EXCEPTIONS
					{
						switch (yyn)
						{
							case 3: // Expr: NEWPLACE
#line 104 "bison.y"
							{
								std::cout << "1" <<endl;
							}
#line 1305 "bison.tab.c"
								break;

							case 4: // Expr: NEWPLACE '('
#line 108 "bison.y"
							{
								std::cout << "2" <<endl;
							}
#line 1313 "bison.tab.c"
								break;

							case 5: // Expr: NEWPLACE '(' ')'
#line 112 "bison.y"
							{
								std::cout << "3" <<endl;
							}
#line 1321 "bison.tab.c"
								break;


#line 1325 "bison.tab.c"

							default:
								break;
						}
					}
#if YY_EXCEPTIONS
					catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
					YY_SYMBOL_PRINT ("-> $$ =", yylhs);
					yypop_ (yylen);
					yylen = 0;

					// Shift the result of the reduction.
					yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
				}
				goto yynewstate;


				/*--------------------------------------.
				| yyerrlab -- here on detecting error.  |
				`--------------------------------------*/
				yyerrlab:
				// If not already recovering from an error, report this error.
				if (!yyerrstatus_)
				{
					++yynerrs_;
					std::string msg = YY_("syntax error");
					error (YY_MOVE (msg));
				}


				if (yyerrstatus_ == 3)
				{
					/* If just tried and failed to reuse lookahead token after an
					   error, discard it.  */

					// Return failure if at end of input.
					if (yyla.kind () == symbol_kind::S_YYEOF)
						YYABORT;
					else if (!yyla.empty ())
					{
						yy_destroy_ ("Error: discarding", yyla);
						yyla.clear ();
					}
				}

				// Else will try to reuse lookahead token after shifting the error token.
				goto yyerrlab1;


				/*---------------------------------------------------.
				| yyerrorlab -- error raised explicitly by YYERROR.  |
				`---------------------------------------------------*/
				yyerrorlab:
				/* Pacify compilers when the user code never invokes YYERROR and
				   the label yyerrorlab therefore never appears in user code.  */
				if (false)
					YYERROR;

				/* Do not reclaim the symbols of the rule whose action triggered
				   this YYERROR.  */
				yypop_ (yylen);
				yylen = 0;
				YY_STACK_PRINT ();
				goto yyerrlab1;


				/*-------------------------------------------------------------.
				| yyerrlab1 -- common code for both syntax error and YYERROR.  |
				`-------------------------------------------------------------*/
				yyerrlab1:
				yyerrstatus_ = 3;   // Each real token shifted decrements this.
				// Pop stack until we find a state that shifts the error token.
				for (;;)
				{
					yyn = yypact_[+yystack_[0].state];
					if (!yy_pact_value_is_default_ (yyn))
					{
						yyn += symbol_kind::S_YYerror;
						if (0 <= yyn && yyn <= yylast_
							&& yycheck_[yyn] == symbol_kind::S_YYerror)
						{
							yyn = yytable_[yyn];
							if (0 < yyn)
								break;
						}
					}

					// Pop the current state because it cannot handle the error token.
					if (yystack_.size () == 1)
						YYABORT;

					yy_destroy_ ("Error: popping", yystack_[0]);
					yypop_ ();
					YY_STACK_PRINT ();
				}
				{
					stack_symbol_type error_token;


					// Shift the error token.
					error_token.state = state_type (yyn);
					yypush_ ("Shifting", YY_MOVE (error_token));
				}
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


				/*-----------------------------------------------------.
				| yyreturn -- parsing is finished, return the result.  |
				`-----------------------------------------------------*/
				yyreturn:
				if (!yyla.empty ())
					yy_destroy_ ("Cleanup: discarding lookahead", yyla);

				/* Do not reclaim the symbols of the rule whose action triggered
				   this YYABORT or YYACCEPT.  */
				yypop_ (yylen);
				YY_STACK_PRINT ();
				while (1 < yystack_.size ())
				{
					yy_destroy_ ("Cleanup: popping", yystack_[0]);
					yypop_ ();
				}

				return yyresult;
			}
#if YY_EXCEPTIONS
			catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
		}

		void
		parser::error (const syntax_error& yyexc)
		{
			error (yyexc.what ());
		}

#if YYDEBUG || 0
		const char *
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytname_[yysymbol];
  }
#endif // #if YYDEBUG || 0





		const signed char parser::yypact_ninf_ = -16;

		const signed char parser::yytable_ninf_ = -1;

		const signed char
		parser::yypact_[] =
		{
			-3,   -15,     2,   -16,   -14,   -16,   -16
		};

		const signed char
		parser::yydefact_[] =
		{
			0,     3,     0,     2,     4,     1,     5
		};

		const signed char
		parser::yypgoto_[] =
		{
			-16,   -16,   -16
		};

		const signed char
		parser::yydefgoto_[] =
		{
			0,     2,     3
		};

		const signed char
		parser::yytable_[] =
		{
			1,     4,     5,     6
		};

		const signed char
		parser::yycheck_[] =
		{
			3,    16,     0,    17
		};

		const signed char
		parser::yystos_[] =
		{
			0,     3,    19,    20,    16,     0,    17
		};

		const signed char
		parser::yyr1_[] =
		{
			0,    18,    19,    20,    20,    20
		};

		const signed char
		parser::yyr2_[] =
		{
			0,     2,     1,     1,     2,     3
		};


#if YYDEBUG
		// YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "NEWPLACE", "NEWARC",
  "NEWTRANS", "RMPLACE", "RMARC", "RMTRANS", "SETTOKENS", "SETPESO",
  "MAZESOLVER", "READWRITE", "MUTUALEXCLUSION", "PALABRA", "NUMERO", "'('",
  "')'", "$accept", "INICIO", "Expr", YY_NULLPTR
  };
#endif


#if YYDEBUG
		const signed char
  parser::yyrline_[] =
  {
       0,    39,    39,   103,   107,   111
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

		parser::symbol_kind_type
		parser::yytranslate_ (int t)
		{
			// YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
			// TOKEN-NUM as returned by yylex.
			static
			const signed char
					translate_table[] =
					{
							0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
							2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
							2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
							2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
							16,    17,     2,     2,     2,     2,     2,     2,     2,     2,
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
							15
					};
			// Last valid token kind.
			const int code_max = 270;

			if (t <= 0)
				return symbol_kind::S_YYEOF;
			else if (t <= code_max)
				return YY_CAST (symbol_kind_type, translate_table[t]);
			else
				return symbol_kind::S_YYUNDEF;
		}

} // yy
#line 1667 "bison.tab.c"

#line 115 "bison.y"


void yyerror(string s) {
	std::cout << s <<endl;
	exit(0);
}

int yywrap(){
	return 1;
}

int main(){
	graph = new Graph ();
	return (yyparse());
}

/*
{NUMERO}              { yylval.intVal = atoi(yytext); return NUMERO; }
{PALABRA}             { yylval.strVal = strdup(yytext); return PALABRA; }
*/

/*
LETRA                 [a-zA-Z]
DIGITO                [0-9]
NUMERO                {DIGITO}+
PALABRA               ({LETRA}|{NUMERO})+
*/