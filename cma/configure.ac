#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.65])
AC_INIT([cma], [1.1], [jchapmantx@hotmail.com])
AM_INIT_AUTOMAKE
AC_OUTPUT([Makefile] [src/Makefile] [doc/Makefile])
AC_CONFIG_SRCDIR([cma.c])

# Checks for programs.
AC_PROG_CC


AC_CONFIG_MACRO_DIR([m4])
# Checks for libraries.
AM_PROG_LIBTOOL
#AC_PROG_RANLIB

# Checks for header files.
AC_CHECK_HEADERS([limits.h stdlib.h string.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset])

AC_OUTPUT
