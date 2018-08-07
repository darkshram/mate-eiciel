bin_PROGRAMS = mate-eiciel
mate_eiciel_CPPFLAGS = -I@top_srcdir@/lib -DDATADIR="\"$(datadir)\"" -DPKGDATADIR="\"$(pkgdatadir)\"" 
mate_eiciel_CXXFLAGS = @GTKMM_CFLAGS@ -Wall -std=c++11 
mate_eiciel_LDFLAGS = @GTKMM_LIBS@ @ACL_LIBS@
mate_eiciel_SOURCES = \
    acl_manager.cpp \
	acl_manager.hpp \
	eiciel_main_controller.cpp \
	eiciel_main_controller.hpp \
	eiciel_main_window.cpp \
	eiciel_main_window.hpp \
	acl_list.hpp \
	participant_list.hpp \
	acl_element_kind.hpp \
	cellrenderer_acl.hpp \
	cellrenderer_acl.cpp \
	eiciel_standalone.cpp \
	eiciel_container.hpp \
	eiciel_container.cpp

if ENABLE_USER_XATTR
mate_eiciel_SOURCES += \
	xattr_manager.hpp \
	xattr_manager.cpp \
	eiciel_xattr_window.cpp \
	eiciel_xattr_window.hpp \
	eiciel_xattr_controller.cpp \
	eiciel_xattr_controller.hpp \
	xattr_list_model.hpp
endif

cajaextdir=@CAJA_EXTENSIONS_DIR@
cajaext_LTLIBRARIES=libeiciel-caja.la
libeiciel_caja_la_CPPFLAGS = -I@top_srcdir@/lib -DDATADIR="\"$(datadir)\"" -DPKGDATADIR="\"$(pkgdatadir)\"" 
libeiciel_caja_la_CXXFLAGS = @GTKMM_CFLAGS@ -Wall -std=c++11 
libeiciel_caja_la_LDFLAGS =  -module -avoid-version @GTKMM_LIBS@ @ACL_LIBS@
libeiciel_caja_la_SOURCES = \
    acl_manager.cpp \
	acl_manager.hpp \
	eiciel_caja_page.cpp \
	eiciel_caja_page.hpp \
	eiciel_main_controller.cpp \
	eiciel_main_controller.hpp \
	eiciel_main_window.cpp \
	eiciel_main_window.hpp \
	xattr_list_model.hpp \
	participant_list.hpp \
	acl_element_kind.hpp \
	cellrenderer_acl.hpp \
	cellrenderer_acl.cpp 

if ENABLE_USER_XATTR
libeiciel_caja_la_SOURCES += \
	xattr_manager.hpp \
	xattr_manager.cpp \
	eiciel_xattr_window.cpp \
	eiciel_xattr_window.hpp \
	eiciel_xattr_controller.cpp \
	eiciel_xattr_controller.hpp \
	xattr_list_model.hpp
endif

desktopfilesdir=@datadir@/applications
desktopfiles_DATA=org.mate-desktop.mate-eiciel.desktop


appdatadir = $(datarootdir)/metainfo
dist_appdata_DATA = org.mate-desktop.mate-eiciel.appdata.xml

org.mate-desktop.mate-eiciel.desktop : org.mate-desktop.mate-eiciel.desktop.in
	sed -e "s|@DSK_VERSION@|$(VERSION)|;s|@DSK_bindir@|$(bindir)|;s|@DSK_pkgdatadir@|$(pkgdatadir)|" $< > $@

CLEANFILES = 

# Since 'make' built it, 'make clean' should clean it
# see http://sources.redhat.com/automake/automake.html#Clean
CLEANFILES += org.mate-desktop.mate-eiciel.desktop

EXTRA_DIST= \
	org.mate-desktop.mate-eiciel.desktop.in \
	org.mate-desktop.mate-eiciel.appdata.xml
