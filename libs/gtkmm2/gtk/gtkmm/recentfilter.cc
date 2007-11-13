// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/recentfilter.h>
#include <gtkmm/private/recentfilter_p.h>

/* Copyright (C) 2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtk/gtkrecentfilter.h>
#include <gtk/gtktypebuiltins.h>

#include <glibmm/ustring.h>

// This Signal Proxy allows the C++ coder to specify a sigc::slot instead of a static function.

static gboolean SignalProxy_Custom_gtk_callback(const GtkRecentFilterInfo* filter_info, gpointer data)
{
  const Gtk::RecentFilter::SlotCustom* the_slot = static_cast<Gtk::RecentFilter::SlotCustom*>(data);

  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  try
  {
  #endif //GLIBMM_EXCEPTIONS_ENABLED
    // Create a suitable C++ instance to pass to the C++ method:
    Gtk::RecentFilter::Info cppInfo;
    cppInfo.contains = (Gtk::RecentFilterFlags)filter_info->contains;
    cppInfo.uri = Glib::convert_const_gchar_ptr_to_ustring(filter_info->uri);
    cppInfo.display_name = Glib::convert_const_gchar_ptr_to_ustring(filter_info->display_name);
    cppInfo.mime_type = Glib::convert_const_gchar_ptr_to_ustring(filter_info->mime_type);
    
    // Create string lists from char**s.
    
    for(int i = 0; filter_info->groups[i] != 0; ++i)
    {
      cppInfo.groups.push_back( Glib::convert_const_gchar_ptr_to_ustring(filter_info->groups[i]) );
    }
    for(int i = 0; filter_info->applications[i] != 0; ++i)
    {
      cppInfo.applications.push_back( Glib::convert_const_gchar_ptr_to_ustring(filter_info->applications[i]) );
    }
    
    cppInfo.age = filter_info->age;
  
    return (*the_slot)(cppInfo);
  #ifdef GLIBMM_EXCEPTIONS_ENABLED
  }
  catch(...)
  {
    Glib::exception_handlers_invoke();
    return false; // arbitrary default;
  }
  #endif //GLIBMM_EXCEPTIONS_ENABLED
}

static void SignalProxy_Custom_gtk_callback_destroy(void* data)
{
  delete static_cast<Gtk::RecentFilter::SlotCustom*>(data);
}

namespace Gtk
{

RecentFilter::Info::Info()
: contains(Gtk::RECENT_FILTER_MIME_TYPE), //arbitrary default
  age(0)
{
}

void RecentFilter::add_custom(RecentFilterFlags needed, const SlotCustom& slot)
{
  // Create a copy of the slot. A pointer to this will be passed through the callback's data parameter.
  // It will be deleted when SignalProxy_Custom_gtk_callback_destroy() is called.
  SlotCustom* slot_copy = new SlotCustom(slot);
      
  gtk_recent_filter_add_custom(gobj(), (GtkRecentFilterFlags)needed,
                               &SignalProxy_Custom_gtk_callback,
                               slot_copy,
                               &SignalProxy_Custom_gtk_callback_destroy);
}

} // namespace Gtk

namespace
{
} // anonymous namespace

// static
GType Glib::Value<Gtk::RecentFilterFlags>::value_type()
{
  return gtk_recent_filter_flags_get_type();
}


namespace Glib
{

Gtk::RecentFilter* wrap(GtkRecentFilter* object, bool take_copy)
{
  return dynamic_cast<Gtk::RecentFilter *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& RecentFilter_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &RecentFilter_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_recent_filter_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  }

  return *this;
}

void RecentFilter_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* RecentFilter_Class::wrap_new(GObject* o)
{
  return manage(new RecentFilter((GtkRecentFilter*)(o)));

}


/* The implementation: */

RecentFilter::RecentFilter(const Glib::ConstructParams& construct_params)
:
  Gtk::Object(construct_params)
{
  }

RecentFilter::RecentFilter(GtkRecentFilter* castitem)
:
  Gtk::Object((GtkObject*)(castitem))
{
  }

RecentFilter::~RecentFilter()
{
  destroy_();
}

RecentFilter::CppClassType RecentFilter::recentfilter_class_; // initialize static member

GType RecentFilter::get_type()
{
  return recentfilter_class_.init().get_type();
}

GType RecentFilter::get_base_type()
{
  return gtk_recent_filter_get_type();
}


RecentFilter::RecentFilter()
:
  Glib::ObjectBase(0), //Mark this class as gtkmmproc-generated, rather than a custom class, to allow vfunc optimisations.
  Gtk::Object(Glib::ConstructParams(recentfilter_class_.init()))
{
  }

void RecentFilter::set_name(const Glib::ustring& name)
{
gtk_recent_filter_set_name(gobj(), name.c_str()); 
}

Glib::ustring RecentFilter::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_recent_filter_get_name(const_cast<GtkRecentFilter*>(gobj())));
}

void RecentFilter::add_mime_type(const Glib::ustring& mime_type)
{
gtk_recent_filter_add_mime_type(gobj(), mime_type.c_str()); 
}

void RecentFilter::add_pattern(const Glib::ustring& pattern)
{
gtk_recent_filter_add_pattern(gobj(), pattern.c_str()); 
}

void RecentFilter::add_pixbuf_formats()
{
gtk_recent_filter_add_pixbuf_formats(gobj()); 
}

void RecentFilter::add_application(const Glib::ustring& application)
{
gtk_recent_filter_add_application(gobj(), application.c_str()); 
}

void RecentFilter::add_group(const Glib::ustring& group)
{
gtk_recent_filter_add_group(gobj(), group.c_str()); 
}

void RecentFilter::add_age(int days)
{
gtk_recent_filter_add_age(gobj(), days); 
}

RecentFilterFlags RecentFilter::get_needed() const
{
  return (RecentFilterFlags)gtk_recent_filter_get_needed(const_cast<GtkRecentFilter*>(gobj()));
}


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gtk


