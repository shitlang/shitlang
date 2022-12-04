// shitlang 3.3
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdint>
#include <fstream>
using namespace std;
#define FILE std::fstream
#define STRING std::string
#define INT int
#define VOID void
#define CHAR char
#define FLOAT float
#define DOUBLE double
#define BOOL bool
#define CLASS class
#define LIST std::vector
#define PRINT std::cout << 
#define ENDLINE << std::endl
#define ENDL << std::endl
#define FOREVER while(1)
#define OPEN_C {
#define CLOSE_C }
#define BLANK_C {}
#define ENTRY main
#define ENTRY_V main(void)
#define ENTRY_VOID main(void)
#define ENTRY_BLANK main()
#define ENTRY_B main()
#define ENTRY_CLI main(int argc, char* argv[])
#define IS =
#define OPEN_P (
#define CLOSE_P )
#define BLANK_P ()
#define VOID_B (void)
#define END ;
#define TERMINATE exit()
#define NAMESPACE namespace
#define DO do
#define WHILE while 
#define FOR for 
#define INCREMENT ++
#define DECREMENT --
#define SYSTEM std::system
#define EXTRACT >>
#define INSERT <<
#define USING using
#define PUBLIC public:
#define PRIVATE private:
#define PROTECTED protected:
#define SECURE protected:
#define NPTR nullptr
#define CEXPR constexpr
#define CONST_EXPR constexpr
#define CONSTEXPR constexpr
#define CXPR constexpr
#define VIRTUAL virtual
#define STATIC static
#define FINAL const
#define FRIEND friend
#define BASED_OFF :
#define BREAK break;
#define CONTINUE continue;
#define INPUT_TO std::cin << 
#define ENUM enum
#define STRUCT struct 
#define OR ||
#define AND &&
#define B_OR |
#define B_AND &
#define ADDS +
#define SUBS -
#define DIVS /
#define MOD %
#define MODS %
#define MULTS *
#define COUNT_TO_1B for(int i=0; i<1000000000; i++){}
#define TO_STRING std::to_string
#define TO_INT atoi
#define CAST
#define CAST_TO
#define TEST_CALL std::cout << "\n[\t\tTEST\t\t]\n"
#define CENT 100
#define KILO 1000
#define GOTO goto
#define FUNCTION void
#define S_FUNCTION static void
#define ANY auto
#define T_ANY T
#define ANY_T T
#define ANY_TYPE T
#define TYPEDEF typedef
#define TEMPLATE template
#define IF_TRUE ?
#define IF_FALSE :
#define IF if
#define EVALUATE if
#define EVAL if
#define ELSE_IF else if
#define OTHERWISE_EVALUATE else if
#define OTHERWISE_EVAL else if
#define ELSEIF else if
#define OTHERWISE else
#define ELSE else
#define SHIT_STAMP std::cout << "\n\n[\t\tPROGRAMMED WITH SHITLANG.\t\t]\n\n"
#define SHITSTAMP std::cout << "\n\n[\t\tPROGRAMMED WITH SHITLANG.\t\t]\n\n"
#define EQUALS ==
#define EQUAL_TO ==
#define EQUALTO ==
#define UNEQUALS !=
#define UNEQUAL_TO !=
#define UNEQUALTO !=
#define NOT_EQUAL !=
#define NOT_EQUAL_TO !=
#define G_EQUALS >=
#define L_EQUALS <=
#define GREATER_THAN >
#define MORE_THAN >
#define GREATER >
#define MORE >
#define LESS_THAN <
#define FEWER_THAN <
#define LESS <
#define FEWER <
#define OPEN_B [
#define CLOSE_B ]
#define BLANK_B []
#define OPEN_A <
#define CLOSE_A >
#define BLANK_A <>
#define Q_MARK ?
#define LINE "\n"
#define TAB "\t"
#define NOT !
#define PTR *
#define REF &
#define PTR_PTR **
#define WITH ,
#define UNLIMITED ...
#define OPEN ...
#define ENDLESS ...
#define CONTINUES ...
#define TRUE true
#define FALSE false
#define MAYBE |
#define END_FUNC return 0;
#define RETURN return
#define PUSH std::cout <<
#define PASS return
#define USE_STD using namespace std
#define USE using
#define USE_N using namespace 
#define STR_BLANK ""
#define STRING_BLANK ""
#define CHAR_BLANK ''
#define ASM asm
#define RAISE throw
#define THROW throw 
#define TRY try
#define UNSAFE try
#define ATTEMPT try
#define EXCEPT catch
#define EXCEPT_ANY catch(...)
#define ANY_ERROR catch(...)
#define CALL 
#define OB [
#define CB ]
#define OP (
#define CP )
#define OC {
#define CC }
#define OA <
#define CA >
#define FROM .
#define FROM_P ->
#define self this
#define SELF this
#define THIS this
#define VAR 
#define ZERO 0
#define MARK
#define CXX
#define CPP
#define ASSEMBLE asm
#define STD std
#define PLEASE
#define CL_ARGS int argc, char* argv[]
#define CL_ARGS_PTR_PTR int argc, char** argv
#define CONTAINER namespace
#define MODULE namespace
#define FROM
#define MOVE
#define B_OP ^
#define AE +=
#define SE -=
#define ME *=
#define MDE %=
#define DE /=
#define B_A_E &=
#define B_O_E |=
#define B_OP_E ^=
#define AUTO_TEMPLATE template <typename T>
#define TEMPLATE_T template <typename T>
#define TYPE_T <typename T>
#define TNAME_T <typename T>
#define SEQUENCE_START {
#define SEQUENCE_END }
#define SEQ_START {
#define SEQ_END }
#define BLOCK_START {
#define BLOCK_END }
#define B_START {
#define B_END }
bool NOT_TRUE (bool condition){return !condition;}
#define VECTOR std::vector
#define __ARGC argc
#define __ARGV argv
#define APPEND push_back
#define V_APPEND push_back
#define ARGV_IDX argv[i]
#define __ARGV_IDX argv[i]
#define ARGV_SIZE argc
#define __ARGV_SIZE argc
#define VOID_CAST (void)
#define VOID_PTR_CAST (void*)
#define VOID_PTR_PTR_CAST (void**)
#define INT_CAST (int)
#define INT_PTR_CAST (int*)
#define INT_PTR_PTR_CAST (int**)
#define CHAR_CAST (char)
#define CHAR_PTR_CAST (char*)
#define CHAR_PTR_PTR_CAST (char**)
#define FLOAT_CAST (float)
#define FLOAT_PTR_CAST (float*)
#define FLOAT_PTR_PTR_CAST (float**)
#define DOUBLE_CAST (double)
#define DOUBLE_PTR_CAST (double*)
#define DOUBLE_PTR_PTR_CAST (double**)
#define VOID_REF_CAST (void&)
#define INT_REF_CAST (int&)
#define CHAR_REF_CAST (char&)
#define FLOAT_REF_CAST (float&)
#define DOUBLE_REF_CAST (double&)
#define STD_STRING char*
#define CHAR_PTR char*
#define CPTR char*
#define UINT unsigned int
#define UINT_PTR unsigned int*
#define UINT_PTR_PTR unsigned int**
#define UINT_REF unsigned int&
#define ULINT unsigned long int
#define ULINT_PTR unsigned long int*
#define ULINT_PTR_PTR unsigned long int**
#define ULINT_REF unsigned long int&
#define ULLINT unsigned long long int
#define ULLINT_PTR unsigned long long int*
#define ULLINT_PTR_PTR unsigned long long int**
#define ULLINT_REF unsigned long long int&
#define INT_PTR int*
#define INT_PTR_PTR int**
#define INT_REF int&
#define LINT long int
#define LINT_PTR long int*
#define LINT_PTR_PTR long int**
#define LINT_REF long int&
#define LLINT long long int
#define LLINT_PTR long long int*
#define LLINT_PTR_PTR long long int**
#define LLINT_REF long long int&
#define UCHAR unsigned char
#define UCHAR_PTR unsigned char*
#define UCHAR_PTR_PTR unsigned char**
#define UCHAR_REF unsigned char&
#define ULCHAR unsigned long char
#define ULCHAR_PTR unsigned long char*
#define ULCHAR_PTR_PTR unsigned long char**
#define ULCHAR_REF unsigned long char&
#define ULLCHAR unsigned long long char
#define ULLCHAR_PTR unsigned long long char*
#define ULLCHAR_PTR_PTR unsigned long long char**
#define ULLCHAR_REF unsigned long long char&
#define CHAR_PTR_PTR char**
#define CHAR_REF char&
#define LCHAR long char
#define LCHAR_PTR long char*
#define LCHAR_PTR_PTR long char**
#define LCHAR_REF long char&
#define LLCHAR long long char
#define LLCHAR_PTR long long char*
#define LLCHAR_PTR_PTR long long char**
#define LLCHAR_REF long long char&
#define STRING_PTR std::string*
#define STRING_PTR_PTR std::string**
#define STRING_REF std::string&
#define DUMP delete
#define DELETE delete
#define ERASE delete
#define NEW new
#define FRESH new
#define OF new
#define IMPORTANT
#define FIRST [0]
#define FROM_CS .
#define FROM_NS ::
#define MEMBER_CS .
#define MEMBER_NS ::
bool IS_EVEN(int __int){return (__int%2==0) ? true : false;}
bool IS_ODD(int __int){return !IS_EVEN(__int);}
bool IS_PRIME(int __int){if(__int==0||__int==1){return false;}for(int i=2;i<=__int/2;++i){if (__int%i==0){return false;}}return true;}
template <typename T>
int SIZEOF(T __t){return sizeof(__t);}
#define USEFUL 
#define TEST
#define TEST_BLOCK
#define TESTING
#define TEST_FIELD
#define TESTFIELD
#define UNSAFE
#define DANGEROUS
#define PASS
#define CASE case
#define SWITCH switch
#define DEFAULT default
#define NO_MATCH default:
#define NOMATCH default:
#define EVENT
#define EVAL
#define EVALUATE
#define RUN
#define PUTS std::cout <<
#define FUNCTION
#define FUNC
#define ASSIGNED_TO =
#define ASSIGNS =
#define ASSIGN =
#define ACCESS ::
#define GET .


