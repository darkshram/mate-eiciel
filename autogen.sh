#!/bin/sh
# Run this to generate all the initial makefiles, etc.

srcdir=`dirname $0`
test -z "$srcdir" && srcdir=.

PKG_NAME="mate-eiciel"

(test -f $srcdir/configure.ac) || {
    echo -n "**Error**: Directory "\`$srcdir\'" does not look like the"
    echo " top-level directory"
    exit 1
}

which mate-autogen || {
    echo "You need to install mate-common from the MATE Git"
    exit 1
}

REQUIRED_AUTOMAKE_VERSION=1.11
USE_MATE2_MACROS=1 

. mate-autogen
