
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
*  @file gsiDeclQInputEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QInputEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QInputEvent

// QFlags<Qt::KeyboardModifier> QInputEvent::modifiers()


static void _init_f_modifiers_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<Qt::KeyboardModifier> > ();
}

static void _call_f_modifiers_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<Qt::KeyboardModifier> > ((QFlags<Qt::KeyboardModifier>)((QInputEvent *)cls)->modifiers ());
}


// void QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> amodifiers)


static void _init_f_setModifiers_3077 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("amodifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setModifiers_3077 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<Qt::KeyboardModifier> arg1 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QInputEvent *)cls)->setModifiers (arg1);
}


namespace gsi
{

static gsi::Methods methods_QInputEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod (":modifiers", "@brief Method QFlags<Qt::KeyboardModifier> QInputEvent::modifiers()\n", true, &_init_f_modifiers_c0, &_call_f_modifiers_c0);
  methods += new qt_gsi::GenericMethod ("setModifiers|modifiers=", "@brief Method void QInputEvent::setModifiers(QFlags<Qt::KeyboardModifier> amodifiers)\n", false, &_init_f_setModifiers_3077, &_call_f_setModifiers_3077);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QInputEvent> decl_QInputEvent (qtdecl_QEvent (), "QtGui", "QInputEvent_Native",
  methods_QInputEvent (),
  "@hide\n@alias QInputEvent");

GSI_QTGUI_PUBLIC gsi::Class<QInputEvent> &qtdecl_QInputEvent () { return decl_QInputEvent; }

}


class QInputEvent_Adaptor : public QInputEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QInputEvent_Adaptor();

  //  [adaptor ctor] QInputEvent::QInputEvent(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers)
  QInputEvent_Adaptor(QEvent::Type type) : QInputEvent(type)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QInputEvent::QInputEvent(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers)
  QInputEvent_Adaptor(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers) : QInputEvent(type, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QInputEvent_Adaptor::~QInputEvent_Adaptor() { }

//  Constructor QInputEvent::QInputEvent(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QInputEvent_Adaptor_4534 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("modifiers", true, "Qt::NoModifier");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_1);
  decl->set_return_new<QInputEvent_Adaptor> ();
}

static void _call_ctor_QInputEvent_Adaptor_4534 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = args.read<const qt_gsi::Converter<QEvent::Type>::target_type & > (heap);
  QFlags<Qt::KeyboardModifier> arg2 = args ? args.read<QFlags<Qt::KeyboardModifier> > (heap) : (QFlags<Qt::KeyboardModifier>)(Qt::NoModifier);
  ret.write<QInputEvent_Adaptor *> (new QInputEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2));
}


namespace gsi
{

gsi::Class<QInputEvent> &qtdecl_QInputEvent ();

static gsi::Methods methods_QInputEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QInputEvent::QInputEvent(QEvent::Type type, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QInputEvent.", &_init_ctor_QInputEvent_Adaptor_4534, &_call_ctor_QInputEvent_Adaptor_4534);
  return methods;
}

gsi::Class<QInputEvent_Adaptor> decl_QInputEvent_Adaptor (qtdecl_QInputEvent (), "QtGui", "QInputEvent",
  methods_QInputEvent_Adaptor (),
  "@qt\n@brief Binding of QInputEvent");

}

