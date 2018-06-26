
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
*  @file gsiDeclQDragEnterEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragEnterEvent>
#include <QMimeData>
#include <QPoint>
#include <QRect>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragEnterEvent

namespace gsi
{

static gsi::Methods methods_QDragEnterEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QDragMoveEvent> &qtdecl_QDragMoveEvent ();

gsi::Class<QDragEnterEvent> decl_QDragEnterEvent (qtdecl_QDragMoveEvent (), "QtGui", "QDragEnterEvent_Native",
  methods_QDragEnterEvent (),
  "@hide\n@alias QDragEnterEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDragEnterEvent> &qtdecl_QDragEnterEvent () { return decl_QDragEnterEvent; }

}


class QDragEnterEvent_Adaptor : public QDragEnterEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragEnterEvent_Adaptor();

  //  [adaptor ctor] QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
  QDragEnterEvent_Adaptor(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) : QDragEnterEvent(pos, actions, data, buttons, modifiers)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QByteArray QDragEnterEvent::encodedData(const char *)
  QByteArray cbs_encodedData_c1731_0(const char *arg1) const
  {
    return QDragEnterEvent::encodedData(arg1);
  }

  virtual QByteArray encodedData(const char *arg1) const
  {
    if (cb_encodedData_c1731_0.can_issue()) {
      return cb_encodedData_c1731_0.issue<QDragEnterEvent_Adaptor, QByteArray, const char *>(&QDragEnterEvent_Adaptor::cbs_encodedData_c1731_0, arg1);
    } else {
      return QDragEnterEvent::encodedData(arg1);
    }
  }

  //  [adaptor impl] const char *QDragEnterEvent::format(int n)
  const char * cbs_format_c767_1(int n) const
  {
    return QDragEnterEvent::format(n);
  }

  virtual const char * format(int n) const
  {
    if (cb_format_c767_1.can_issue()) {
      return cb_format_c767_1.issue<QDragEnterEvent_Adaptor, const char *, int>(&QDragEnterEvent_Adaptor::cbs_format_c767_1, n);
    } else {
      return QDragEnterEvent::format(n);
    }
  }

  //  [adaptor impl] bool QDragEnterEvent::provides(const char *)
  bool cbs_provides_c1731_0(const char *arg1) const
  {
    return QDragEnterEvent::provides(arg1);
  }

  virtual bool provides(const char *arg1) const
  {
    if (cb_provides_c1731_0.can_issue()) {
      return cb_provides_c1731_0.issue<QDragEnterEvent_Adaptor, bool, const char *>(&QDragEnterEvent_Adaptor::cbs_provides_c1731_0, arg1);
    } else {
      return QDragEnterEvent::provides(arg1);
    }
  }

  gsi::Callback cb_encodedData_c1731_0;
  gsi::Callback cb_format_c767_1;
  gsi::Callback cb_provides_c1731_0;
};

QDragEnterEvent_Adaptor::~QDragEnterEvent_Adaptor() { }

//  Constructor QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers) (adaptor class)

static void _init_ctor_QDragEnterEvent_Adaptor_11787 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<const QPoint & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("actions");
  decl->add_arg<QFlags<Qt::DropAction> > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("data");
  decl->add_arg<const QMimeData * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("buttons");
  decl->add_arg<QFlags<Qt::MouseButton> > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("modifiers");
  decl->add_arg<QFlags<Qt::KeyboardModifier> > (argspec_4);
  decl->set_return_new<QDragEnterEvent_Adaptor> ();
}

static void _call_ctor_QDragEnterEvent_Adaptor_11787 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPoint &arg1 = args.read<const QPoint & > (heap);
  QFlags<Qt::DropAction> arg2 = args.read<QFlags<Qt::DropAction> > (heap);
  const QMimeData *arg3 = args.read<const QMimeData * > (heap);
  QFlags<Qt::MouseButton> arg4 = args.read<QFlags<Qt::MouseButton> > (heap);
  QFlags<Qt::KeyboardModifier> arg5 = args.read<QFlags<Qt::KeyboardModifier> > (heap);
  ret.write<QDragEnterEvent_Adaptor *> (new QDragEnterEvent_Adaptor (arg1, arg2, arg3, arg4, arg5));
}


// QByteArray QDragEnterEvent::encodedData(const char *)

static void _init_cbs_encodedData_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_encodedData_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QByteArray > ((QByteArray)((QDragEnterEvent_Adaptor *)cls)->cbs_encodedData_c1731_0 (arg1));
}

static void _set_callback_cbs_encodedData_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDragEnterEvent_Adaptor *)cls)->cb_encodedData_c1731_0 = cb;
}


// const char *QDragEnterEvent::format(int n)

static void _init_cbs_format_c767_1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("n");
  decl->add_arg<int > (argspec_0);
  decl->set_return<const char * > ();
}

static void _call_cbs_format_c767_1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<const char * > ((const char *)((QDragEnterEvent_Adaptor *)cls)->cbs_format_c767_1 (arg1));
}

static void _set_callback_cbs_format_c767_1 (void *cls, const gsi::Callback &cb)
{
  ((QDragEnterEvent_Adaptor *)cls)->cb_format_c767_1 = cb;
}


// bool QDragEnterEvent::provides(const char *)

static void _init_cbs_provides_c1731_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_provides_c1731_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<bool > ((bool)((QDragEnterEvent_Adaptor *)cls)->cbs_provides_c1731_0 (arg1));
}

static void _set_callback_cbs_provides_c1731_0 (void *cls, const gsi::Callback &cb)
{
  ((QDragEnterEvent_Adaptor *)cls)->cb_provides_c1731_0 = cb;
}


namespace gsi
{

gsi::Class<QDragEnterEvent> &qtdecl_QDragEnterEvent ();

static gsi::Methods methods_QDragEnterEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragEnterEvent::QDragEnterEvent(const QPoint &pos, QFlags<Qt::DropAction> actions, const QMimeData *data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)\nThis method creates an object of class QDragEnterEvent.", &_init_ctor_QDragEnterEvent_Adaptor_11787, &_call_ctor_QDragEnterEvent_Adaptor_11787);
  methods += new qt_gsi::GenericMethod ("encodedData", "@hide", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("encodedData", "@brief Virtual method QByteArray QDragEnterEvent::encodedData(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_encodedData_c1731_0, &_call_cbs_encodedData_c1731_0, &_set_callback_cbs_encodedData_c1731_0);
  methods += new qt_gsi::GenericMethod ("format", "@hide", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("format", "@brief Virtual method const char *QDragEnterEvent::format(int n)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_format_c767_1, &_call_cbs_format_c767_1, &_set_callback_cbs_format_c767_1);
  methods += new qt_gsi::GenericMethod ("provides", "@hide", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0);
  methods += new qt_gsi::GenericMethod ("provides", "@brief Virtual method bool QDragEnterEvent::provides(const char *)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_provides_c1731_0, &_call_cbs_provides_c1731_0, &_set_callback_cbs_provides_c1731_0);
  return methods;
}

gsi::Class<QDragEnterEvent_Adaptor> decl_QDragEnterEvent_Adaptor (qtdecl_QDragEnterEvent (), "QtGui", "QDragEnterEvent",
  methods_QDragEnterEvent_Adaptor (),
  "@qt\n@brief Binding of QDragEnterEvent");

}

