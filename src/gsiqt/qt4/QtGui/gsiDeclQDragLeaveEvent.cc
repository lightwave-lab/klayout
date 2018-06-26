
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
*  @file gsiDeclQDragLeaveEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDragLeaveEvent>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDragLeaveEvent

namespace gsi
{

static gsi::Methods methods_QDragLeaveEvent () {
  gsi::Methods methods;
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QDragLeaveEvent> decl_QDragLeaveEvent (qtdecl_QEvent (), "QtGui", "QDragLeaveEvent_Native",
  methods_QDragLeaveEvent (),
  "@hide\n@alias QDragLeaveEvent");

GSI_QTGUI_PUBLIC gsi::Class<QDragLeaveEvent> &qtdecl_QDragLeaveEvent () { return decl_QDragLeaveEvent; }

}


class QDragLeaveEvent_Adaptor : public QDragLeaveEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDragLeaveEvent_Adaptor();

  //  [adaptor ctor] QDragLeaveEvent::QDragLeaveEvent()
  QDragLeaveEvent_Adaptor() : QDragLeaveEvent()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QDragLeaveEvent_Adaptor::~QDragLeaveEvent_Adaptor() { }

//  Constructor QDragLeaveEvent::QDragLeaveEvent() (adaptor class)

static void _init_ctor_QDragLeaveEvent_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDragLeaveEvent_Adaptor> ();
}

static void _call_ctor_QDragLeaveEvent_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDragLeaveEvent_Adaptor *> (new QDragLeaveEvent_Adaptor ());
}


namespace gsi
{

gsi::Class<QDragLeaveEvent> &qtdecl_QDragLeaveEvent ();

static gsi::Methods methods_QDragLeaveEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDragLeaveEvent::QDragLeaveEvent()\nThis method creates an object of class QDragLeaveEvent.", &_init_ctor_QDragLeaveEvent_Adaptor_0, &_call_ctor_QDragLeaveEvent_Adaptor_0);
  return methods;
}

gsi::Class<QDragLeaveEvent_Adaptor> decl_QDragLeaveEvent_Adaptor (qtdecl_QDragLeaveEvent (), "QtGui", "QDragLeaveEvent",
  methods_QDragLeaveEvent_Adaptor (),
  "@qt\n@brief Binding of QDragLeaveEvent");

}

