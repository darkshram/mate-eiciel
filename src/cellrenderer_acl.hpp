/*
    Eiciel - GNOME editor of ACL file permissions.
    Copyright (C) 2004-2014 Roger Ferrer Ib��ez

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,  USA
*/
#ifndef CELLRENDERER_ACL_HPP
#define CELLRENDERER_ACL_HPP

#include <config.hpp>
#include <gtkmm.h>

class CellRendererACL : public Gtk::CellRendererToggle
{
    protected:

        virtual void render_vfunc (
#ifdef USING_GNOME2
                const Glib::RefPtr<Gdk::Drawable>& window,
#else
                const Cairo::RefPtr<Cairo::Context>& cr,
#endif
                Gtk::Widget& widget,
                const Gdk::Rectangle& background_area,
                const Gdk::Rectangle& cell_area,
#ifdef USING_GNOME2
                const Gdk::Rectangle& expose_area,
#endif
                Gtk::CellRendererState flags
                );

        virtual void get_preferred_width_vfunc(
                Gtk::Widget&    widget,
                int &   minimum_width,
                int &   natural_width 
                ) const;

        virtual void get_preferred_height_vfunc(
                Gtk::Widget&    widget,
                int &   minimum_width,
                int &   natural_width 
                ) const;

    private:
        Glib::Property<bool> _mark_background;

        Glib::RefPtr<Gdk::Pixbuf> get_warning_icon(Gtk::Widget& widget) const;

    public:
        CellRendererACL();
        Glib::PropertyProxy<bool> mark_background();

    protected:
        // Compatibility overrides
        virtual void get_size_vfunc(Gtk::Widget& widget,
                const Gdk::Rectangle* cell_area,
                int * x_offset,
                int * y_offset,
                int * width,
                int * height) const;

};

#endif
