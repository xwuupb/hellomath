AC_PREREQ([2.63])
AC_INIT([hellomath], [1.0], [xinwu@mail.uni-paderborn.de])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_SRCDIR([src/hellomath.c])
AM_INIT_AUTOMAKE([-Wall -Werror foreign subdir-objects])
##############################################################################80
#
# check for C compiler
#
##############################################################################80
AC_PROG_CC([cwhatever gcc])
AS_IF([test "${CC}" = gcc],
  [CFLAGS="-Wall -fdiagnostics-color=always -O0 -g $CFLAGS"
   LDFLAGS="$LDFLAGS"])
##############################################################################80
#
# check for archiver
#
##############################################################################80
AC_PROG_RANLIB
AM_PROG_AR
##############################################################################80
#
# check for headers
#
##############################################################################80
AC_CHECK_HEADER([math.h], [],
  [AC_MSG_ERROR([math.h required, but not found])], [])
##############################################################################80
#
# check for libraries
#
##############################################################################80
AC_CHECK_LIB([m], [sin], [],
  [AC_MSG_ERROR([libm required, but not found])], [])
##############################################################################80
#
# check for Doxygen
#
##############################################################################80
AC_ARG_VAR([DOXYGEN], [Doxygen: source documentation generation program])
AC_CHECK_PROG([DOXYGEN], [doxygen], [doxygen], [], [], [])
AS_IF([test -z "${DOXYGEN}"],
  [AC_MSG_WARN([doxygen not found - continue without doxygen support])])
AM_CONDITIONAL([HAVE_DOXYGEN], [test -n "${DOXYGEN}"])
AM_COND_IF([HAVE_DOXYGEN], [AC_CONFIG_FILES([docs/Doxyfile])])
AM_COND_IF([HAVE_DOXYGEN], [AC_CONFIG_FILES([docs/Makefile])])
##############################################################################80
#
# create final files
#
##############################################################################80
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile
                 src/Makefile
                 src/hm/Makefile
                 tests/Makefile])
AC_OUTPUT

echo "
//============================================================================80

Configuration:

  CC      : ${CC}
  CFLAGS  : ${CFLAGS}
  LDFLAGS : ${LDFLAGS}

//============================================================================80

Now, type make to build ..."
