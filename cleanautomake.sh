#!/bin/sh

find . \( -iname aclocal* -o -iname autom4te* -o -iname aclocal.m4 -o -iname configure -o -iname Makefile.in -o -iname libtool -o -iname config.status -o -iname config.h.in \) -print | xargs rm -fR

