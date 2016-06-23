// Do not edit this file.  It is created automatically from make_test_config.pl

#include <iostream>
#include <vcl_compiler.h>
#include <vxl_config.h>
#include <vcl_compiler.h>
#include <testlib/testlib_test.h>

// It is quite difficult to do anything out of the norm with the C preprocessor

// quote() has the effect of preprocessor expansion of the argument
// Inner parentheses are needed with quote() to protect empty definitions
// and definitions that have commas
// quote0() protects (") and quotes ("") the expanded argument
#define quote0(x) #x
#define quote(x) quote0((x))

void test_config()
{
  // This test does not test much.  Mostly, it prints configuration
  // macros so they can be viewed through Dart.  Some sanity checks are
  // at the end.

  std::cout << "All macro definitions are shown inside parentheses\n";

  std::cout << "VCL_HAS_BOOL ";
#ifdef VCL_HAS_BOOL
  std::cout << "is set to " << quote(VCL_HAS_BOOL);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_DYNAMIC_CAST ";
#ifdef VCL_HAS_DYNAMIC_CAST
  std::cout << "is set to " << quote(VCL_HAS_DYNAMIC_CAST);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_RTTI ";
#ifdef VCL_HAS_RTTI
  std::cout << "is set to " << quote(VCL_HAS_RTTI);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_TYPENAME ";
#ifdef VCL_HAS_TYPENAME
  std::cout << "is set to " << quote(VCL_HAS_TYPENAME);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_EXPORT ";
#ifdef VCL_HAS_EXPORT
  std::cout << "is set to " << quote(VCL_HAS_EXPORT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_MUTABLE ";
#ifdef VCL_HAS_MUTABLE
  std::cout << "is set to " << quote(VCL_HAS_MUTABLE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_EXPLICIT ";
#ifdef VCL_HAS_EXPLICIT
  std::cout << "is set to " << quote(VCL_HAS_EXPLICIT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_DEFAULT_VALUE(x) ";
#ifdef VCL_DEFAULT_VALUE
  std::cout << "is set to " << quote(VCL_DEFAULT_VALUE(x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_STATIC_CONST_INIT_INT_DECL(x) ";
#ifdef VCL_STATIC_CONST_INIT_INT_DECL
  std::cout << "is set to " << quote(VCL_STATIC_CONST_INIT_INT_DECL(x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_STATIC_CONST_INIT_INT_DEFN(x) ";
#ifdef VCL_STATIC_CONST_INIT_INT_DEFN
  std::cout << "is set to " << quote(VCL_STATIC_CONST_INIT_INT_DEFN(x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_STATIC_CONST_INIT_FLOAT_DECL(x) ";
#ifdef VCL_STATIC_CONST_INIT_FLOAT_DECL
  std::cout << "is set to " << quote(VCL_STATIC_CONST_INIT_FLOAT_DECL(x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_STATIC_CONST_INIT_FLOAT_DEFN(x) ";
#ifdef VCL_STATIC_CONST_INIT_FLOAT_DEFN
  std::cout << "is set to " << quote(VCL_STATIC_CONST_INIT_FLOAT_DEFN(x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_MEMBER_TEMPLATES ";
#ifdef VCL_HAS_MEMBER_TEMPLATES
  std::cout << "is set to " << quote(VCL_HAS_MEMBER_TEMPLATES);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CAN_DO_PARTIAL_SPECIALIZATION ";
#ifdef VCL_CAN_DO_PARTIAL_SPECIALIZATION
  std::cout << "is set to " << quote(VCL_CAN_DO_PARTIAL_SPECIALIZATION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_DEFINE_SPECIALIZATION ";
#ifdef VCL_DEFINE_SPECIALIZATION
  std::cout << "is set to " << quote(VCL_DEFINE_SPECIALIZATION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CANNOT_SPECIALIZE_CV ";
#ifdef VCL_CANNOT_SPECIALIZE_CV
  std::cout << "is set to " << quote(VCL_CANNOT_SPECIALIZE_CV);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_NULL_TMPL_ARGS ";
#ifdef VCL_NULL_TMPL_ARGS
  std::cout << "is set to " << quote(VCL_NULL_TMPL_ARGS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_ALLOWS_INLINE_INSTANTIATION ";
#ifdef VCL_ALLOWS_INLINE_INSTANTIATION
  std::cout << "is set to " << quote(VCL_ALLOWS_INLINE_INSTANTIATION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_NEEDS_INLINE_INSTANTIATION ";
#ifdef VCL_NEEDS_INLINE_INSTANTIATION
  std::cout << "is set to " << quote(VCL_NEEDS_INLINE_INSTANTIATION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_DO_NOT_INSTANTIATE(text,ret) ";
#ifdef VCL_DO_NOT_INSTANTIATE
  std::cout << "is set to " << quote(VCL_DO_NOT_INSTANTIATE(text,ret));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_UNINSTANTIATE_SPECIALIZATION(symbol) ";
#ifdef VCL_UNINSTANTIATE_SPECIALIZATION
  std::cout << "is set to " << quote(VCL_UNINSTANTIATE_SPECIALIZATION(symbol));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_UNINSTANTIATE_UNSEEN_SPECIALIZATION(symbol) ";
#ifdef VCL_UNINSTANTIATE_UNSEEN_SPECIALIZATION
  std::cout << "is set to " << quote(VCL_UNINSTANTIATE_UNSEEN_SPECIALIZATION(symbol));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CAN_DO_STATIC_TEMPLATE_MEMBER ";
#ifdef VCL_CAN_DO_STATIC_TEMPLATE_MEMBER
  std::cout << "is set to " << quote(VCL_CAN_DO_STATIC_TEMPLATE_MEMBER);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_INSTANTIATE_STATIC_TEMPLATE_MEMBER(symbol) ";
#ifdef VCL_INSTANTIATE_STATIC_TEMPLATE_MEMBER
  std::cout << "is set to " << quote(VCL_INSTANTIATE_STATIC_TEMPLATE_MEMBER(symbol));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_UNINSTANTIATE_STATIC_TEMPLATE_MEMBER(symbol) ";
#ifdef VCL_UNINSTANTIATE_STATIC_TEMPLATE_MEMBER
  std::cout << "is set to " << quote(VCL_UNINSTANTIATE_STATIC_TEMPLATE_MEMBER(symbol));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_OVERLOAD_CAST(T,x) ";
#ifdef VCL_OVERLOAD_CAST
  std::cout << "is set to " << quote(VCL_OVERLOAD_CAST(T,x));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_NO_STATIC_DATA_MEMBERS ";
#ifdef VCL_NO_STATIC_DATA_MEMBERS
  std::cout << "is set to " << quote(VCL_NO_STATIC_DATA_MEMBERS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_TEMPLATE_SYMBOLS ";
#ifdef VCL_HAS_TEMPLATE_SYMBOLS
  std::cout << "is set to " << quote(VCL_HAS_TEMPLATE_SYMBOLS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_DEFAULT_TMPL_ARG(arg) ";
#ifdef VCL_DEFAULT_TMPL_ARG
  std::cout << "is set to " << quote(VCL_DEFAULT_TMPL_ARG(arg));
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CAN_DO_COMPLETE_DEFAULT_TYPE_PARAMETER ";
#ifdef VCL_CAN_DO_COMPLETE_DEFAULT_TYPE_PARAMETER
  std::cout << "is set to " << quote(VCL_CAN_DO_COMPLETE_DEFAULT_TYPE_PARAMETER);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CAN_DO_TEMPLATE_DEFAULT_TYPE_PARAMETER ";
#ifdef VCL_CAN_DO_TEMPLATE_DEFAULT_TYPE_PARAMETER
  std::cout << "is set to " << quote(VCL_CAN_DO_TEMPLATE_DEFAULT_TYPE_PARAMETER);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_EXCEPTIONS ";
#ifdef VCL_HAS_EXCEPTIONS
  std::cout << "is set to " << quote(VCL_HAS_EXCEPTIONS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_HAS_NAMESPACES ";
#ifdef VCL_HAS_NAMESPACES
  std::cout << "is set to " << quote(VCL_HAS_NAMESPACES);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_ALLOWS_NAMESPACE_STD ";
#ifdef VCL_ALLOWS_NAMESPACE_STD
  std::cout << "is set to " << quote(VCL_ALLOWS_NAMESPACE_STD);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_NEEDS_NAMESPACE_STD ";
#ifdef VCL_NEEDS_NAMESPACE_STD
  std::cout << "is set to " << quote(VCL_NEEDS_NAMESPACE_STD);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CASSERT ";
#ifdef VCL_CXX_HAS_HEADER_CASSERT
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CASSERT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSETJMP ";
#ifdef VCL_CXX_HAS_HEADER_CSETJMP
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSETJMP);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSTDIO ";
#ifdef VCL_CXX_HAS_HEADER_CSTDIO
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSTDIO);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CTIME ";
#ifdef VCL_CXX_HAS_HEADER_CTIME
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CTIME);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CCTYPE ";
#ifdef VCL_CXX_HAS_HEADER_CCTYPE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CCTYPE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CLIMITS ";
#ifdef VCL_CXX_HAS_HEADER_CLIMITS
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CLIMITS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSIGNAL ";
#ifdef VCL_CXX_HAS_HEADER_CSIGNAL
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSIGNAL);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CWCHAR ";
#ifdef VCL_CXX_HAS_HEADER_CWCHAR
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CWCHAR);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CERRNO ";
#ifdef VCL_CXX_HAS_HEADER_CERRNO
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CERRNO);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CLOCALE ";
#ifdef VCL_CXX_HAS_HEADER_CLOCALE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CLOCALE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSTDARG ";
#ifdef VCL_CXX_HAS_HEADER_CSTDARG
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSTDARG);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSTRING ";
#ifdef VCL_CXX_HAS_HEADER_CSTRING
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSTRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CWCTYPE ";
#ifdef VCL_CXX_HAS_HEADER_CWCTYPE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CWCTYPE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CMATH ";
#ifdef VCL_CXX_HAS_HEADER_CMATH
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CMATH);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_CSTDDEF ";
#ifdef VCL_CXX_HAS_HEADER_CSTDDEF
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_CSTDDEF);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_ALGORITHM ";
#ifdef VCL_CXX_HAS_HEADER_ALGORITHM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_ALGORITHM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_IOMANIP ";
#ifdef VCL_CXX_HAS_HEADER_IOMANIP
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_IOMANIP);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_LIST ";
#ifdef VCL_CXX_HAS_HEADER_LIST
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_LIST);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_OSTREAM ";
#ifdef VCL_CXX_HAS_HEADER_OSTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_OSTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_STREAMBUF ";
#ifdef VCL_CXX_HAS_HEADER_STREAMBUF
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_STREAMBUF);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_BITSET ";
#ifdef VCL_CXX_HAS_HEADER_BITSET
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_BITSET);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_IOS ";
#ifdef VCL_CXX_HAS_HEADER_IOS
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_IOS);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_LOCALE ";
#ifdef VCL_CXX_HAS_HEADER_LOCALE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_LOCALE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_QUEUE ";
#ifdef VCL_CXX_HAS_HEADER_QUEUE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_QUEUE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_STRING ";
#ifdef VCL_CXX_HAS_HEADER_STRING
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_COMPLEX ";
#ifdef VCL_CXX_HAS_HEADER_COMPLEX
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_COMPLEX);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_IOSFWD ";
#ifdef VCL_CXX_HAS_HEADER_IOSFWD
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_IOSFWD);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_MAP ";
#ifdef VCL_CXX_HAS_HEADER_MAP
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_MAP);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_SET ";
#ifdef VCL_CXX_HAS_HEADER_SET
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_SET);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_TYPEINFO ";
#ifdef VCL_CXX_HAS_HEADER_TYPEINFO
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_TYPEINFO);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_DEQUE ";
#ifdef VCL_CXX_HAS_HEADER_DEQUE
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_DEQUE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_IOSTREAM ";
#ifdef VCL_CXX_HAS_HEADER_IOSTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_IOSTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_MEMORY ";
#ifdef VCL_CXX_HAS_HEADER_MEMORY
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_MEMORY);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_SSTREAM ";
#ifdef VCL_CXX_HAS_HEADER_SSTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_SSTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_UTILITY ";
#ifdef VCL_CXX_HAS_HEADER_UTILITY
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_UTILITY);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_EXCEPTION ";
#ifdef VCL_CXX_HAS_HEADER_EXCEPTION
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_EXCEPTION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_ISTREAM ";
#ifdef VCL_CXX_HAS_HEADER_ISTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_ISTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_NEW ";
#ifdef VCL_CXX_HAS_HEADER_NEW
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_NEW);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_STACK ";
#ifdef VCL_CXX_HAS_HEADER_STACK
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_STACK);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_VALARRAY ";
#ifdef VCL_CXX_HAS_HEADER_VALARRAY
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_VALARRAY);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_FSTREAM ";
#ifdef VCL_CXX_HAS_HEADER_FSTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_FSTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_ITERATOR ";
#ifdef VCL_CXX_HAS_HEADER_ITERATOR
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_ITERATOR);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_NUMERIC ";
#ifdef VCL_CXX_HAS_HEADER_NUMERIC
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_NUMERIC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_STDEXCEPT ";
#ifdef VCL_CXX_HAS_HEADER_STDEXCEPT
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_STDEXCEPT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_VECTOR ";
#ifdef VCL_CXX_HAS_HEADER_VECTOR
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_VECTOR);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_FUNCTIONAL ";
#ifdef VCL_CXX_HAS_HEADER_FUNCTIONAL
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_FUNCTIONAL);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_CXX_HAS_HEADER_STRSTREAM ";
#ifdef VCL_CXX_HAS_HEADER_STRSTREAM
  std::cout << "is set to " << quote(VCL_CXX_HAS_HEADER_STRSTREAM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_LITTLE_ENDIAN ";
#ifdef VXL_LITTLE_ENDIAN
  std::cout << "is set to " << quote(VXL_LITTLE_ENDIAN);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_BIG_ENDIAN ";
#ifdef VXL_BIG_ENDIAN
  std::cout << "is set to " << quote(VXL_BIG_ENDIAN);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_BYTE ";
#ifdef VXL_HAS_BYTE
  std::cout << "is set to " << quote(VXL_HAS_BYTE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_BYTE_STRING ";
#ifdef VXL_BYTE_STRING
  std::cout << "is set to " << quote(VXL_BYTE_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_INT_8 ";
#ifdef VXL_HAS_INT_8
  std::cout << "is set to " << quote(VXL_HAS_INT_8);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_INT_8_STRING ";
#ifdef VXL_INT_8_STRING
  std::cout << "is set to " << quote(VXL_INT_8_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_INT_16 ";
#ifdef VXL_HAS_INT_16
  std::cout << "is set to " << quote(VXL_HAS_INT_16);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_INT_16_STRING ";
#ifdef VXL_INT_16_STRING
  std::cout << "is set to " << quote(VXL_INT_16_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_INT_32 ";
#ifdef VXL_HAS_INT_32
  std::cout << "is set to " << quote(VXL_HAS_INT_32);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_INT_32_STRING ";
#ifdef VXL_INT_32_STRING
  std::cout << "is set to " << quote(VXL_INT_32_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_INT_64 ";
#ifdef VXL_HAS_INT_64
  std::cout << "is set to " << quote(VXL_HAS_INT_64);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_INT_64_STRING ";
#ifdef VXL_INT_64_STRING
  std::cout << "is set to " << quote(VXL_INT_64_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_INT_64_IS_LONG ";
#ifdef VXL_INT_64_IS_LONG
  std::cout << "is set to " << quote(VXL_INT_64_IS_LONG);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_IEEE_32 ";
#ifdef VXL_HAS_IEEE_32
  std::cout << "is set to " << quote(VXL_HAS_IEEE_32);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_IEEE_32_STRING ";
#ifdef VXL_IEEE_32_STRING
  std::cout << "is set to " << quote(VXL_IEEE_32_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_IEEE_64 ";
#ifdef VXL_HAS_IEEE_64
  std::cout << "is set to " << quote(VXL_HAS_IEEE_64);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_IEEE_64_STRING ";
#ifdef VXL_IEEE_64_STRING
  std::cout << "is set to " << quote(VXL_IEEE_64_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_IEEE_96 ";
#ifdef VXL_HAS_IEEE_96
  std::cout << "is set to " << quote(VXL_HAS_IEEE_96);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_IEEE_96_STRING ";
#ifdef VXL_IEEE_96_STRING
  std::cout << "is set to " << quote(VXL_IEEE_96_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_IEEE_128 ";
#ifdef VXL_HAS_IEEE_128
  std::cout << "is set to " << quote(VXL_HAS_IEEE_128);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_IEEE_128_STRING ";
#ifdef VXL_IEEE_128_STRING
  std::cout << "is set to " << quote(VXL_IEEE_128_STRING);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_PTHREAD_H ";
#ifdef VXL_HAS_PTHREAD_H
  std::cout << "is set to " << quote(VXL_HAS_PTHREAD_H);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_SEMAPHORE_H ";
#ifdef VXL_HAS_SEMAPHORE_H
  std::cout << "is set to " << quote(VXL_HAS_SEMAPHORE_H);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_USECONDS_T ";
#ifdef VXL_UNISTD_HAS_USECONDS_T
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_USECONDS_T);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_INTPTR_T ";
#ifdef VXL_UNISTD_HAS_INTPTR_T
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_INTPTR_T);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_UALARM ";
#ifdef VXL_UNISTD_HAS_UALARM
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_UALARM);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_USLEEP ";
#ifdef VXL_UNISTD_HAS_USLEEP
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_USLEEP);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_LCHOWN ";
#ifdef VXL_UNISTD_HAS_LCHOWN
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_LCHOWN);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_PREAD ";
#ifdef VXL_UNISTD_HAS_PREAD
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_PREAD);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_PWRITE ";
#ifdef VXL_UNISTD_HAS_PWRITE
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_PWRITE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_TELL ";
#ifdef VXL_UNISTD_HAS_TELL
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_TELL);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_GETPID ";
#ifdef VXL_UNISTD_HAS_GETPID
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_GETPID);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_HAS_GETHOSTNAME ";
#ifdef VXL_UNISTD_HAS_GETHOSTNAME
  std::cout << "is set to " << quote(VXL_UNISTD_HAS_GETHOSTNAME);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_STDLIB_HAS_QSORT ";
#ifdef VXL_STDLIB_HAS_QSORT
  std::cout << "is set to " << quote(VXL_STDLIB_HAS_QSORT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_STDLIB_HAS_LRAND48 ";
#ifdef VXL_STDLIB_HAS_LRAND48
  std::cout << "is set to " << quote(VXL_STDLIB_HAS_LRAND48);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_STDLIB_HAS_DRAND48 ";
#ifdef VXL_STDLIB_HAS_DRAND48
  std::cout << "is set to " << quote(VXL_STDLIB_HAS_DRAND48);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_IEEEFP_HAS_FINITE ";
#ifdef VXL_IEEEFP_HAS_FINITE
  std::cout << "is set to " << quote(VXL_IEEEFP_HAS_FINITE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_C_MATH_HAS_FINITE ";
#ifdef VXL_C_MATH_HAS_FINITE
  std::cout << "is set to " << quote(VXL_C_MATH_HAS_FINITE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_C_MATH_HAS_SQRTF ";
#ifdef VXL_C_MATH_HAS_SQRTF
  std::cout << "is set to " << quote(VXL_C_MATH_HAS_SQRTF);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_C_MATH_HAS_LROUND ";
#ifdef VXL_C_MATH_HAS_LROUND
  std::cout << "is set to " << quote(VXL_C_MATH_HAS_LROUND);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_UNISTD_USLEEP_IS_VOID ";
#ifdef VXL_UNISTD_USLEEP_IS_VOID
  std::cout << "is set to " << quote(VXL_UNISTD_USLEEP_IS_VOID);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_HAS_IEEEFP_H ";
#ifdef VXL_HAS_IEEEFP_H
  std::cout << "is set to " << quote(VXL_HAS_IEEEFP_H);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC ";
#ifdef VCL_GCC
  std::cout << "is set to " << quote(VCL_GCC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_4 ";
#ifdef VCL_GCC_4
  std::cout << "is set to " << quote(VCL_GCC_4);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_40 ";
#ifdef VCL_GCC_40
  std::cout << "is set to " << quote(VCL_GCC_40);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_41 ";
#ifdef VCL_GCC_41
  std::cout << "is set to " << quote(VCL_GCC_41);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_5 ";
#ifdef VCL_GCC_5
  std::cout << "is set to " << quote(VCL_GCC_5);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_50 ";
#ifdef VCL_GCC_50
  std::cout << "is set to " << quote(VCL_GCC_50);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_51 ";
#ifdef VCL_GCC_51
  std::cout << "is set to " << quote(VCL_GCC_51);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_52 ";
#ifdef VCL_GCC_52
  std::cout << "is set to " << quote(VCL_GCC_52);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_53 ";
#ifdef VCL_GCC_53
  std::cout << "is set to " << quote(VCL_GCC_53);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_6 ";
#ifdef VCL_GCC_6
  std::cout << "is set to " << quote(VCL_GCC_6);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_60 ";
#ifdef VCL_GCC_60
  std::cout << "is set to " << quote(VCL_GCC_60);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_61 ";
#ifdef VCL_GCC_61
  std::cout << "is set to " << quote(VCL_GCC_61);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_62 ";
#ifdef VCL_GCC_62
  std::cout << "is set to " << quote(VCL_GCC_62);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_GCC_63 ";
#ifdef VCL_GCC_63
  std::cout << "is set to " << quote(VCL_GCC_63);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_ICC ";
#ifdef VCL_ICC
  std::cout << "is set to " << quote(VCL_ICC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_WIN32 ";
#ifdef VCL_WIN32
  std::cout << "is set to " << quote(VCL_WIN32);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_VC ";
#ifdef VCL_VC
  std::cout << "is set to " << quote(VCL_VC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VCL_VC_DOTNET ";
#ifdef VCL_VC_DOTNET
  std::cout << "is set to " << quote(VCL_VC_DOTNET);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_WARN_DEPRECATED ";
#ifdef VXL_WARN_DEPRECATED
  std::cout << "is set to " << quote(VXL_WARN_DEPRECATED);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_WARN_DEPRECATED_ONCE ";
#ifdef VXL_WARN_DEPRECATED_ONCE
  std::cout << "is set to " << quote(VXL_WARN_DEPRECATED_ONCE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "VXL_WARN_DEPRECATED_ABORT ";
#ifdef VXL_WARN_DEPRECATED_ABORT
  std::cout << "is set to " << quote(VXL_WARN_DEPRECATED_ABORT);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "CMAKE_DEFINES_VARIABLE_UNIX ";
#ifdef CMAKE_DEFINES_VARIABLE_UNIX
  std::cout << "is set to " << quote(CMAKE_DEFINES_VARIABLE_UNIX);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "CMAKE_DEFINES_VARIABLE_CYGWIN ";
#ifdef CMAKE_DEFINES_VARIABLE_CYGWIN
  std::cout << "is set to " << quote(CMAKE_DEFINES_VARIABLE_CYGWIN);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "CMAKE_DEFINES_VARIABLE_MINGW ";
#ifdef CMAKE_DEFINES_VARIABLE_MINGW
  std::cout << "is set to " << quote(CMAKE_DEFINES_VARIABLE_MINGW);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "CMAKE_DEFINES_VARIABLE_WIN32 ";
#ifdef CMAKE_DEFINES_VARIABLE_WIN32
  std::cout << "is set to " << quote(CMAKE_DEFINES_VARIABLE_WIN32);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "CMAKE_DEFINES_VARIABLE_APPLE ";
#ifdef CMAKE_DEFINES_VARIABLE_APPLE
  std::cout << "is set to " << quote(CMAKE_DEFINES_VARIABLE_APPLE);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__cplusplus ";
#ifdef __cplusplus
  std::cout << "is set to " << quote(__cplusplus);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__STDC__ ";
#ifdef __STDC__
  std::cout << "is set to " << quote(__STDC__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__STDC_VERSION__ ";
#ifdef __STDC_VERSION__
  std::cout << "is set to " << quote(__STDC_VERSION__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "NDEBUG ";
#ifdef NDEBUG
  std::cout << "is set to " << quote(NDEBUG);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__STRICT_ANSI__ ";
#ifdef __STRICT_ANSI__
  std::cout << "is set to " << quote(__STRICT_ANSI__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__GNUC__ ";
#ifdef __GNUC__
  std::cout << "is set to " << quote(__GNUC__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__GNUG__ ";
#ifdef __GNUG__
  std::cout << "is set to " << quote(__GNUG__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__GNUC_MINOR__ ";
#ifdef __GNUC_MINOR__
  std::cout << "is set to " << quote(__GNUC_MINOR__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__GNUC_PATCHLEVEL__ ";
#ifdef __GNUC_PATCHLEVEL__
  std::cout << "is set to " << quote(__GNUC_PATCHLEVEL__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__VERSION__ ";
#ifdef __VERSION__
  std::cout << "is set to " << quote(__VERSION__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__OPTIMIZE__ ";
#ifdef __OPTIMIZE__
  std::cout << "is set to " << quote(__OPTIMIZE__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__ICC ";
#ifdef __ICC
  std::cout << "is set to " << quote(__ICC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__INTEL_COMPILER ";
#ifdef __INTEL_COMPILER
  std::cout << "is set to " << quote(__INTEL_COMPILER);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__INTEL_CXXLIB_ICC ";
#ifdef __INTEL_CXXLIB_ICC
  std::cout << "is set to " << quote(__INTEL_CXXLIB_ICC);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "_MSC_VER ";
#ifdef _MSC_VER
  std::cout << "is set to " << quote(_MSC_VER);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "_COMPILER_VERSION ";
#ifdef _COMPILER_VERSION
  std::cout << "is set to " << quote(_COMPILER_VERSION);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__CYGWIN__ ";
#ifdef __CYGWIN__
  std::cout << "is set to " << quote(__CYGWIN__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__MINGW32__ ";
#ifdef __MINGW32__
  std::cout << "is set to " << quote(__MINGW32__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "_WIN32 ";
#ifdef _WIN32
  std::cout << "is set to " << quote(_WIN32);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__APPLE__ ";
#ifdef __APPLE__
  std::cout << "is set to " << quote(__APPLE__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "macintosh ";
#ifdef macintosh
  std::cout << "is set to " << quote(macintosh);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "unix ";
#ifdef unix
  std::cout << "is set to " << quote(unix);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__unix ";
#ifdef __unix
  std::cout << "is set to " << quote(__unix);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__unix__ ";
#ifdef __unix__
  std::cout << "is set to " << quote(__unix__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__linux ";
#ifdef __linux
  std::cout << "is set to " << quote(__linux);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__linux__ ";
#ifdef __linux__
  std::cout << "is set to " << quote(__linux__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__DATE__ ";
#ifdef __DATE__
  std::cout << "is set to " << quote(__DATE__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << "__TIME__ ";
#ifdef __TIME__
  std::cout << "is set to " << quote(__TIME__);
#else
  std::cout << "is not set";
#endif
  std::cout << std::endl;

  std::cout << std::endl;

  // These are types that we expect every machine to have.

  testlib_test_begin( "Size of vxl_byte" );
#if VXL_HAS_BYTE
  testlib_test_perform( sizeof( vxl_byte ) == 1 );
#else
  std::cout << "(no vxl_byte)" << std::endl;
  testlib_test_perform( false );
#endif

  testlib_test_begin( "Size of vxl_uint_8" );
#if VXL_HAS_INT_8
  testlib_test_perform( sizeof( vxl_uint_8 ) == 1 );
#else
  std::cout << "(no vxl_uint_8)" << std::endl;
  testlib_test_perform( false );
#endif

  testlib_test_begin( "Size of vxl_uint_16" );
#if VXL_HAS_INT_16
  testlib_test_perform( sizeof( vxl_uint_16 ) == 2 );
#else
  std::cout << "(no vxl_uint_16)" << std::endl;
  testlib_test_perform( false );
#endif

  testlib_test_begin( "Size of vxl_uint_32" );
#if VXL_HAS_INT_32
  testlib_test_perform( sizeof( vxl_uint_32 ) == 4 );
#else
  std::cout << "(no vxl_uint_32)" << std::endl;
  testlib_test_perform( false );
#endif

  testlib_test_begin( "Size of vxl_ieee_32" );
#if VXL_HAS_IEEE_32
  testlib_test_perform( sizeof( vxl_ieee_32 ) == 4 );
#else
  std::cout << "(no vxl_ieee_32)" << std::endl;
  testlib_test_perform( false );
#endif

  testlib_test_begin( "Size of vxl_ieee_64" );
#if VXL_HAS_IEEE_64
  testlib_test_perform( sizeof( vxl_ieee_64 ) == 8 );
#else
  std::cout << "(no vxl_ieee_64)" << std::endl;
  testlib_test_perform( false );
#endif

  std::cout << std::endl;

  // These may not exist on some platforms.  If they exist, they should
  // be of the correct size.

#if VXL_HAS_INT_64
  testlib_test_begin( "Size of vxl_uint_64" );
  testlib_test_perform( sizeof( vxl_uint_64 ) == 8 );
#else
  std::cout << "(no vxl_uint_64)" << std::endl;
#endif

#if VXL_HAS_IEEE_96
  testlib_test_begin( "Size of vxl_ieee_96" );
  testlib_test_perform( sizeof( vxl_ieee_96 ) == 12 );
#else
  std::cout << "(no vxl_ieee_96)" << std::endl;
#endif

#if VXL_HAS_IEEE_128
  testlib_test_begin( "Size of vxl_ieee_128" );
  testlib_test_perform( sizeof( vxl_ieee_128 ) == 16 );
#else
  std::cout << "(no vxl_ieee_128)" << std::endl;
#endif

  std::cout << std::endl;

  std::cout << "sizeof(char) is " << sizeof(char) << std::endl;
  std::cout << "sizeof(short) is " << sizeof(short) << std::endl;
  std::cout << "sizeof(int) is " << sizeof(int) << std::endl;
  std::cout << "sizeof(long) is " << sizeof(long) << std::endl;
  std::cout << "sizeof(float) is " << sizeof(float) << std::endl;
  std::cout << "sizeof(double) is " << sizeof(double) << std::endl;
}

TESTMAIN(test_config);
