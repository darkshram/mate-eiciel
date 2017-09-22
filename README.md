#mate-eiciel

MATE eiciel is a Graphical editor for access control lists (ACLs) and extended
attributes (xattr), either as an extension within Caja, or as a standalone
utility.

It's based on Eiciel by Roger Ferrer (http://rofi.roger-ferrer.org/eiciel/).

Source code has benn modified to allow mate-eiciel to coexist with the 
original eiciel.

Currently has some code to build with Gtk2 in case you have a Gtk2 MATE Desktop, but it will be removed in a future release.

FAQ
---

1. How is "eiciel" pronounced ?

Just like you would pronounce ACL in english.

2. First steps after you have cloned the repository:

Install dependencies:

* A c++11 capable compiler (gcc >= 4.8).
* caja-devel >= 1.18.0 (requires caja with GTK3 support)
* desktop-file-utils
* gettext-devel
* gtkmm30-devel
* libacl-devel
* libattr-devel

Then Execute:

autoreconf -fi

./configure

make install
