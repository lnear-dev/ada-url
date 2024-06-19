
PHP_ARG_ENABLE([ada_url],
  [whether to enable ada_url support],
  [AS_HELP_STRING([--enable-ada_url],
    [Enable ada_url support])],
  [no])

if test "$PHP_ADA_URL" != "no"; then
  # Require C++ support
  PHP_REQUIRE_CXX()
  PHP_ADD_LIBRARY(stdc++, 1, PHP_ADA_SHARED_LIBADD)
  PHP_SUBST(PHP_ADA_SHARED_LIBADD)
  AC_DEFINE([HAVE_PHP_ADA_URL], [1], [Have ada_url support])
  PHP_CXX_COMPILE_STDCXX(17, mandatory, [PHP_ADACXX_CFLAGS])
  PHP_ADA_CXXFLAGS="-std=c++17"
  PHP_INSTALL_HEADERS([ext/ada_url], [ada_url.h ada.h ada_c.h])
  CXXFLAGS="$CXXFLAGS $PHP_ADACXX_CFLAGS"
  LDFLAGS="$LDFLAGS $PHP_ADA_LIBS"
  PHP_NEW_EXTENSION(ada_url, [ada_url.cpp ada.cpp], $ext_shared)
  PHP_ADD_INCLUDE([$ext_srcdir])
fi
