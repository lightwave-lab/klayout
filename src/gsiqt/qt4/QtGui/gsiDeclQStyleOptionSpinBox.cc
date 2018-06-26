
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
*  @file gsiDeclQStyleOptionSpinBox.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionSpinBox>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionSpinBox

//  Constructor QStyleOptionSpinBox::QStyleOptionSpinBox()


static void _init_ctor_QStyleOptionSpinBox_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionSpinBox> ();
}

static void _call_ctor_QStyleOptionSpinBox_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionSpinBox *> (new QStyleOptionSpinBox ());
}


//  Constructor QStyleOptionSpinBox::QStyleOptionSpinBox(const QStyleOptionSpinBox &other)


static void _init_ctor_QStyleOptionSpinBox_3263 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionSpinBox & > (argspec_0);
  decl->set_return_new<QStyleOptionSpinBox> ();
}

static void _call_ctor_QStyleOptionSpinBox_3263 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionSpinBox &arg1 = args.read<const QStyleOptionSpinBox & > (heap);
  ret.write<QStyleOptionSpinBox *> (new QStyleOptionSpinBox (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionSpinBox () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSpinBox::QStyleOptionSpinBox()\nThis method creates an object of class QStyleOptionSpinBox.", &_init_ctor_QStyleOptionSpinBox_0, &_call_ctor_QStyleOptionSpinBox_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSpinBox::QStyleOptionSpinBox(const QStyleOptionSpinBox &other)\nThis method creates an object of class QStyleOptionSpinBox.", &_init_ctor_QStyleOptionSpinBox_3263, &_call_ctor_QStyleOptionSpinBox_3263);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionSpinBox> decl_QStyleOptionSpinBox (qtdecl_QStyleOptionComplex (), "QtGui", "QStyleOptionSpinBox",
  methods_QStyleOptionSpinBox (),
  "@qt\n@brief Binding of QStyleOptionSpinBox");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionSpinBox> &qtdecl_QStyleOptionSpinBox () { return decl_QStyleOptionSpinBox; }

}

