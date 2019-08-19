SHELL=/bin/sh

# Target directory prefix

PREFIX=$(DESTDIR)/usr/local
EPREFIX=$(PREFIX)

# Other directories

LIBDIR=$(EPREFIX)/lib
INCLUDEDIR=$(PREFIX)/include
BINDIR=$(PREFIX)/bin
top_builddir=.
ALLDIRS=$(LIBDIR) $(INCLUDEDIR) $(BINDIR)

CC=gcc
INSTALL=/usr/bin/install -c
LIBTOOL=$(SHELL) $(top_builddir)/libtool

# Flags passed to C compiler

CFLAGS=-g -O3 -fopenmp -std=c99 
#CFLAGS=-g -fopenmp -std=c99 
LDFLAGS=-rpath $(LIBDIR)

quantum: q_sbox.c Makefile
	$(LIBTOOL) --mode=link $(CC) $(CFLAGS) -o sbox q_sbox.c \
	subfunctions/affine.c \
	subfunctions/inverse.c \
	subfunctions/multiply.c \
	subfunctions/square.c \
	subbytes.c \
	-I./ -lquantum \
    -static	-lm




