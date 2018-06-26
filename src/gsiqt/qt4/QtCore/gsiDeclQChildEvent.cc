
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2018 Matthias Koefferlein

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
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQChildEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QChildEvent>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QChildEvent

  namespace gsi 
  {
    gsi::Class<QObject> &qtdecl_QObject ();
  }

  namespace
  {
    struct DummyQObject { };

    class RawQObjectClass
      : public gsi::Class<QObject>
    {
    public:
      RawQObjectClass ()
        : gsi::Class<QObject> (gsi::qtdecl_QObject (), "Qt", "QObject_Raw", gsi::Methods (), "@hide")
      {
      }

      //  Final class - because of missing RTTI, subclassing won't work.
      virtual const gsi::ClassBase *subclass_decl (const void *) const { return this; }
      virtual bool can_upcast (const void *) const { return false; }

      //  Does not bind to a particular type
      virtual bool is_of_type (const std::type_info & /*ti*/) const { return false; }
      virtual const std::type_info &type () const { return typeid (DummyQObject); }
    };
  }

  static void _init_f_child (qt_gsi::GenericMethod *decl)
  {
    //  Make the QChildEvent::child method return a special class which is final 
    //  and does not try to return a gsi::ObjectBase object.
    static RawQObjectClass s_cls;
    decl->set_return<QObject * > ();
    decl->ret_type ().set_cls (&s_cls);
  }

  static void _call_f_child (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs & /*args*/, gsi::SerialArgs &ret) 
  {
    ret.write<QObject * > ((QObject *)((QChildEvent *)cls)->child ());
  }
  

// bool QChildEvent::added()


static void _init_f_added_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_added_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QChildEvent *)cls)->added ());
}


// bool QChildEvent::polished()


static void _init_f_polished_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_polished_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QChildEvent *)cls)->polished ());
}


// bool QChildEvent::removed()


static void _init_f_removed_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_removed_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QChildEvent *)cls)->removed ());
}


namespace gsi
{

static gsi::Methods methods_QChildEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("added", "@brief Method bool QChildEvent::added()\n", true, &_init_f_added_c0, &_call_f_added_c0);
  methods += new qt_gsi::GenericMethod ("polished", "@brief Method bool QChildEvent::polished()\n", true, &_init_f_polished_c0, &_call_f_polished_c0);
  methods += new qt_gsi::GenericMethod ("removed", "@brief Method bool QChildEvent::removed()\n", true, &_init_f_removed_c0, &_call_f_removed_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QChildEvent> decl_QChildEvent (qtdecl_QEvent (), "QtCore", "QChildEvent_Native",
  gsi::Methods(new qt_gsi::GenericMethod ("child", 
      "@brief Method QObject *QChildEvent::child()\n"
      "NOTE: the object returned by this method is not memory managed. It may be destroyed internally without notice. \n"
      "The returned object shall not be stored or used outside the childEvent handler. "
      "If used outside this handler, the reference might get lost and the application may crash.\n"
      "Furthermore, the object returned will only represent a QObject, not any derived type.\n",
      true, &_init_f_child, &_call_f_child))
+
  methods_QChildEvent (),
  "@hide\n@alias QChildEvent");

GSI_QTCORE_PUBLIC gsi::Class<QChildEvent> &qtdecl_QChildEvent () { return decl_QChildEvent; }

}


class QChildEvent_Adaptor : public QChildEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QChildEvent_Adaptor();

  //  [adaptor ctor] QChildEvent::QChildEvent(QEvent::Type type, QObject *child)
  QChildEvent_Adaptor(QEvent::Type type, QObject *child) : QChildEvent(type, child)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QChildEvent_Adaptor::~QChildEvent_Adaptor() { }

//  Constructor QChildEvent::QChildEvent(QEvent::Type type, QObject *child) (adaptor class)

static void _init_ctor_QChildEvent_Adaptor_2759 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("child");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QChildEvent_Adaptor> ();
}

static void _call_ctor_QChildEvent_Adaptor_2759 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  QObject *arg2 = args.read<QObject * > (heap);
  ret.write<QChildEvent_Adaptor *> (new QChildEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2));
}


namespace gsi
{

gsi::Class<QChildEvent> &qtdecl_QChildEvent ();

static gsi::Methods methods_QChildEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QChildEvent::QChildEvent(QEvent::Type type, QObject *child)\nThis method creates an object of class QChildEvent.", &_init_ctor_QChildEvent_Adaptor_2759, &_call_ctor_QChildEvent_Adaptor_2759);
  return methods;
}

gsi::Class<QChildEvent_Adaptor> decl_QChildEvent_Adaptor (qtdecl_QChildEvent (), "QtCore", "QChildEvent",
  methods_QChildEvent_Adaptor (),
  "@qt\n@brief Binding of QChildEvent");

}

