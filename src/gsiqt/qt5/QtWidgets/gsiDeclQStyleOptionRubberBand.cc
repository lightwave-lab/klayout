
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
*  @file gsiDeclQStyleOptionRubberBand.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionRubberBand>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtWidgetsCommon.h"
#include "gsiDeclQtWidgetsTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionRubberBand

//  Constructor QStyleOptionRubberBand::QStyleOptionRubberBand()


static void _init_ctor_QStyleOptionRubberBand_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionRubberBand> ();
}

static void _call_ctor_QStyleOptionRubberBand_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionRubberBand *> (new QStyleOptionRubberBand ());
}


//  Constructor QStyleOptionRubberBand::QStyleOptionRubberBand(const QStyleOptionRubberBand &other)


static void _init_ctor_QStyleOptionRubberBand_3539 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionRubberBand & > (argspec_0);
  decl->set_return_new<QStyleOptionRubberBand> ();
}

static void _call_ctor_QStyleOptionRubberBand_3539 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionRubberBand &arg1 = args.read<const QStyleOptionRubberBand & > (heap);
  ret.write<QStyleOptionRubberBand *> (new QStyleOptionRubberBand (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionRubberBand () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionRubberBand::QStyleOptionRubberBand()\nThis method creates an object of class QStyleOptionRubberBand.", &_init_ctor_QStyleOptionRubberBand_0, &_call_ctor_QStyleOptionRubberBand_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionRubberBand::QStyleOptionRubberBand(const QStyleOptionRubberBand &other)\nThis method creates an object of class QStyleOptionRubberBand.", &_init_ctor_QStyleOptionRubberBand_3539, &_call_ctor_QStyleOptionRubberBand_3539);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionRubberBand> decl_QStyleOptionRubberBand (qtdecl_QStyleOption (), "QtWidgets", "QStyleOptionRubberBand",
  methods_QStyleOptionRubberBand (),
  "@qt\n@brief Binding of QStyleOptionRubberBand");


GSI_QTWIDGETS_PUBLIC gsi::Class<QStyleOptionRubberBand> &qtdecl_QStyleOptionRubberBand () { return decl_QStyleOptionRubberBand; }

}

