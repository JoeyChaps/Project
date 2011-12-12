AUTOMAKE_OPTIONS = foreign
ACLOCAL_AMFLAGS = -I m4
AM_CFLAGS = -O2 -w

bin_PROGRAMS = ma joe
ma_SOURCES = ma.c
ma_LDADD = libcma.la
joe_SOURCES = joe.c
joe_LDADD = libcma.la

include_HEADERS = cma.h debug.h

lib_LTLIBRARIES = libcma.la
libcma_la_SOURCES = cma.c
