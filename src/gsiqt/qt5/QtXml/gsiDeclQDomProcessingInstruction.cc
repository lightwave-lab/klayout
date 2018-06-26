
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
*  @file gsiDeclQDomProcessingInstruction.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDomProcessingInstruction>
#include <QDomAttr>
#include <QDomCDATASection>
#include <QDomCharacterData>
#include <QDomComment>
#include <QDomDocument>
#include <QDomDocumentFragment>
#include <QDomDocumentType>
#include <QDomElement>
#include <QDomEntity>
#include <QDomEntityReference>
#include <QDomNamedNodeMap>
#include <QDomNode>
#include <QDomNodeList>
#include <QDomNotation>
#include <QDomText>
#include <QTextStream>
#include "gsiQt.h"
#include "gsiQtXmlCommon.h"
#include "gsiDeclQtXmlTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDomProcessingInstruction

//  Constructor QDomProcessingInstruction::QDomProcessingInstruction()


static void _init_ctor_QDomProcessingInstruction_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QDomProcessingInstruction> ();
}

static void _call_ctor_QDomProcessingInstruction_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDomProcessingInstruction *> (new QDomProcessingInstruction ());
}


//  Constructor QDomProcessingInstruction::QDomProcessingInstruction(const QDomProcessingInstruction &x)


static void _init_ctor_QDomProcessingInstruction_3921 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("x");
  decl->add_arg<const QDomProcessingInstruction & > (argspec_0);
  decl->set_return_new<QDomProcessingInstruction> ();
}

static void _call_ctor_QDomProcessingInstruction_3921 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomProcessingInstruction &arg1 = args.read<const QDomProcessingInstruction & > (heap);
  ret.write<QDomProcessingInstruction *> (new QDomProcessingInstruction (arg1));
}


// QString QDomProcessingInstruction::data()


static void _init_f_data_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_data_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomProcessingInstruction *)cls)->data ());
}


// QDomNode::NodeType QDomProcessingInstruction::nodeType()


static void _init_f_nodeType_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDomNode::NodeType>::target_type > ();
}

static void _call_f_nodeType_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDomNode::NodeType>::target_type > ((qt_gsi::Converter<QDomNode::NodeType>::target_type)qt_gsi::CppToQtAdaptor<QDomNode::NodeType>(((QDomProcessingInstruction *)cls)->nodeType ()));
}


// QDomProcessingInstruction &QDomProcessingInstruction::operator=(const QDomProcessingInstruction &)


static void _init_f_operator_eq__3921 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QDomProcessingInstruction & > (argspec_0);
  decl->set_return<QDomProcessingInstruction & > ();
}

static void _call_f_operator_eq__3921 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDomProcessingInstruction &arg1 = args.read<const QDomProcessingInstruction & > (heap);
  ret.write<QDomProcessingInstruction & > ((QDomProcessingInstruction &)((QDomProcessingInstruction *)cls)->operator= (arg1));
}


// void QDomProcessingInstruction::setData(const QString &d)


static void _init_f_setData_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("d");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setData_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDomProcessingInstruction *)cls)->setData (arg1);
}


// QString QDomProcessingInstruction::target()


static void _init_f_target_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_target_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDomProcessingInstruction *)cls)->target ());
}



namespace gsi
{

static gsi::Methods methods_QDomProcessingInstruction () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomProcessingInstruction::QDomProcessingInstruction()\nThis method creates an object of class QDomProcessingInstruction.", &_init_ctor_QDomProcessingInstruction_0, &_call_ctor_QDomProcessingInstruction_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDomProcessingInstruction::QDomProcessingInstruction(const QDomProcessingInstruction &x)\nThis method creates an object of class QDomProcessingInstruction.", &_init_ctor_QDomProcessingInstruction_3921, &_call_ctor_QDomProcessingInstruction_3921);
  methods += new qt_gsi::GenericMethod (":data", "@brief Method QString QDomProcessingInstruction::data()\n", true, &_init_f_data_c0, &_call_f_data_c0);
  methods += new qt_gsi::GenericMethod ("nodeType", "@brief Method QDomNode::NodeType QDomProcessingInstruction::nodeType()\n", true, &_init_f_nodeType_c0, &_call_f_nodeType_c0);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QDomProcessingInstruction &QDomProcessingInstruction::operator=(const QDomProcessingInstruction &)\n", false, &_init_f_operator_eq__3921, &_call_f_operator_eq__3921);
  methods += new qt_gsi::GenericMethod ("setData|data=", "@brief Method void QDomProcessingInstruction::setData(const QString &d)\n", false, &_init_f_setData_2025, &_call_f_setData_2025);
  methods += new qt_gsi::GenericMethod ("target", "@brief Method QString QDomProcessingInstruction::target()\n", true, &_init_f_target_c0, &_call_f_target_c0);
  return methods;
}

gsi::Class<QDomNode> &qtdecl_QDomNode ();

gsi::Class<QDomProcessingInstruction> decl_QDomProcessingInstruction (qtdecl_QDomNode (), "QtXml", "QDomProcessingInstruction",
  methods_QDomProcessingInstruction (),
  "@qt\n@brief Binding of QDomProcessingInstruction");


GSI_QTXML_PUBLIC gsi::Class<QDomProcessingInstruction> &qtdecl_QDomProcessingInstruction () { return decl_QDomProcessingInstruction; }

}

