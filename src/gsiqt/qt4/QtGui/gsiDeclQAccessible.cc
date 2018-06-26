
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
*  @file gsiDeclQAccessible.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessible>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessible

//  Constructor QAccessible::QAccessible()


static void _init_ctor_QAccessible_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QAccessible> ();
}

static void _call_ctor_QAccessible_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessible *> (new QAccessible ());
}


// static void QAccessible::cleanup()


static void _init_f_cleanup_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_cleanup_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  QAccessible::cleanup ();
}


// static bool QAccessible::isActive()


static void _init_f_isActive_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isActive_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)QAccessible::isActive ());
}


// static QAccessibleInterface *QAccessible::queryAccessibleInterface(QObject *)


static void _init_f_queryAccessibleInterface_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_f_queryAccessibleInterface_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)QAccessible::queryAccessibleInterface (arg1));
}


// static void QAccessible::setRootObject(QObject *)


static void _init_f_setRootObject_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setRootObject_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QAccessible::setRootObject (arg1);
}


// static void QAccessible::updateAccessibility(QObject *, int who, QAccessible::Event reason)


static void _init_f_updateAccessibility_4006 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("who");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("reason");
  decl->add_arg<const qt_gsi::Converter<QAccessible::Event>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_updateAccessibility_4006 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  int arg2 = args.read<int > (heap);
  const qt_gsi::Converter<QAccessible::Event>::target_type & arg3 = args.read<const qt_gsi::Converter<QAccessible::Event>::target_type & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QAccessible::updateAccessibility (arg1, arg2, qt_gsi::QtToCppAdaptor<QAccessible::Event>(arg3).cref());
}



namespace gsi
{

static gsi::Methods methods_QAccessible () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessible::QAccessible()\nThis method creates an object of class QAccessible.", &_init_ctor_QAccessible_0, &_call_ctor_QAccessible_0);
  methods += new qt_gsi::GenericStaticMethod ("cleanup", "@brief Static method void QAccessible::cleanup()\nThis method is static and can be called without an instance.", &_init_f_cleanup_0, &_call_f_cleanup_0);
  methods += new qt_gsi::GenericStaticMethod ("isActive?", "@brief Static method bool QAccessible::isActive()\nThis method is static and can be called without an instance.", &_init_f_isActive_0, &_call_f_isActive_0);
  methods += new qt_gsi::GenericStaticMethod ("queryAccessibleInterface", "@brief Static method QAccessibleInterface *QAccessible::queryAccessibleInterface(QObject *)\nThis method is static and can be called without an instance.", &_init_f_queryAccessibleInterface_1302, &_call_f_queryAccessibleInterface_1302);
  methods += new qt_gsi::GenericStaticMethod ("setRootObject", "@brief Static method void QAccessible::setRootObject(QObject *)\nThis method is static and can be called without an instance.", &_init_f_setRootObject_1302, &_call_f_setRootObject_1302);
  methods += new qt_gsi::GenericStaticMethod ("updateAccessibility", "@brief Static method void QAccessible::updateAccessibility(QObject *, int who, QAccessible::Event reason)\nThis method is static and can be called without an instance.", &_init_f_updateAccessibility_4006, &_call_f_updateAccessibility_4006);
  return methods;
}

gsi::Class<QAccessible> decl_QAccessible ("QtGui", "QAccessible",
  methods_QAccessible (),
  "@qt\n@brief Binding of QAccessible");


GSI_QTGUI_PUBLIC gsi::Class<QAccessible> &qtdecl_QAccessible () { return decl_QAccessible; }

}


//  Implementation of the enum wrapper class for QAccessible::Event
namespace qt_gsi
{

static gsi::Enum<QAccessible::Event> decl_QAccessible_Event_Enum ("QtGui", "QAccessible_Event",
    gsi::enum_const ("SoundPlayed", QAccessible::SoundPlayed, "@brief Enum constant QAccessible::SoundPlayed") +
    gsi::enum_const ("Alert", QAccessible::Alert, "@brief Enum constant QAccessible::Alert") +
    gsi::enum_const ("ForegroundChanged", QAccessible::ForegroundChanged, "@brief Enum constant QAccessible::ForegroundChanged") +
    gsi::enum_const ("MenuStart", QAccessible::MenuStart, "@brief Enum constant QAccessible::MenuStart") +
    gsi::enum_const ("MenuEnd", QAccessible::MenuEnd, "@brief Enum constant QAccessible::MenuEnd") +
    gsi::enum_const ("PopupMenuStart", QAccessible::PopupMenuStart, "@brief Enum constant QAccessible::PopupMenuStart") +
    gsi::enum_const ("PopupMenuEnd", QAccessible::PopupMenuEnd, "@brief Enum constant QAccessible::PopupMenuEnd") +
    gsi::enum_const ("ContextHelpStart", QAccessible::ContextHelpStart, "@brief Enum constant QAccessible::ContextHelpStart") +
    gsi::enum_const ("ContextHelpEnd", QAccessible::ContextHelpEnd, "@brief Enum constant QAccessible::ContextHelpEnd") +
    gsi::enum_const ("DragDropStart", QAccessible::DragDropStart, "@brief Enum constant QAccessible::DragDropStart") +
    gsi::enum_const ("DragDropEnd", QAccessible::DragDropEnd, "@brief Enum constant QAccessible::DragDropEnd") +
    gsi::enum_const ("DialogStart", QAccessible::DialogStart, "@brief Enum constant QAccessible::DialogStart") +
    gsi::enum_const ("DialogEnd", QAccessible::DialogEnd, "@brief Enum constant QAccessible::DialogEnd") +
    gsi::enum_const ("ScrollingStart", QAccessible::ScrollingStart, "@brief Enum constant QAccessible::ScrollingStart") +
    gsi::enum_const ("ScrollingEnd", QAccessible::ScrollingEnd, "@brief Enum constant QAccessible::ScrollingEnd") +
    gsi::enum_const ("MenuCommand", QAccessible::MenuCommand, "@brief Enum constant QAccessible::MenuCommand") +
    gsi::enum_const ("ObjectCreated", QAccessible::ObjectCreated, "@brief Enum constant QAccessible::ObjectCreated") +
    gsi::enum_const ("ObjectDestroyed", QAccessible::ObjectDestroyed, "@brief Enum constant QAccessible::ObjectDestroyed") +
    gsi::enum_const ("ObjectShow", QAccessible::ObjectShow, "@brief Enum constant QAccessible::ObjectShow") +
    gsi::enum_const ("ObjectHide", QAccessible::ObjectHide, "@brief Enum constant QAccessible::ObjectHide") +
    gsi::enum_const ("ObjectReorder", QAccessible::ObjectReorder, "@brief Enum constant QAccessible::ObjectReorder") +
    gsi::enum_const ("Focus", QAccessible::Focus, "@brief Enum constant QAccessible::Focus") +
    gsi::enum_const ("Selection", QAccessible::Selection, "@brief Enum constant QAccessible::Selection") +
    gsi::enum_const ("SelectionAdd", QAccessible::SelectionAdd, "@brief Enum constant QAccessible::SelectionAdd") +
    gsi::enum_const ("SelectionRemove", QAccessible::SelectionRemove, "@brief Enum constant QAccessible::SelectionRemove") +
    gsi::enum_const ("SelectionWithin", QAccessible::SelectionWithin, "@brief Enum constant QAccessible::SelectionWithin") +
    gsi::enum_const ("StateChanged", QAccessible::StateChanged, "@brief Enum constant QAccessible::StateChanged") +
    gsi::enum_const ("LocationChanged", QAccessible::LocationChanged, "@brief Enum constant QAccessible::LocationChanged") +
    gsi::enum_const ("NameChanged", QAccessible::NameChanged, "@brief Enum constant QAccessible::NameChanged") +
    gsi::enum_const ("DescriptionChanged", QAccessible::DescriptionChanged, "@brief Enum constant QAccessible::DescriptionChanged") +
    gsi::enum_const ("ValueChanged", QAccessible::ValueChanged, "@brief Enum constant QAccessible::ValueChanged") +
    gsi::enum_const ("ParentChanged", QAccessible::ParentChanged, "@brief Enum constant QAccessible::ParentChanged") +
    gsi::enum_const ("HelpChanged", QAccessible::HelpChanged, "@brief Enum constant QAccessible::HelpChanged") +
    gsi::enum_const ("DefaultActionChanged", QAccessible::DefaultActionChanged, "@brief Enum constant QAccessible::DefaultActionChanged") +
    gsi::enum_const ("AcceleratorChanged", QAccessible::AcceleratorChanged, "@brief Enum constant QAccessible::AcceleratorChanged"),
  "@qt\n@brief This class represents the QAccessible::Event enum");

static gsi::QFlagsClass<QAccessible::Event > decl_QAccessible_Event_Enums ("QtGui", "QAccessible_QFlags_Event",
  "@qt\n@brief This class represents the QFlags<QAccessible::Event> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_Event_Enum_in_parent (decl_QAccessible_Event_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_Event_Enum_as_child (decl_QAccessible_Event_Enum, "Event");
static gsi::ClassExt<QAccessible> decl_QAccessible_Event_Enums_as_child (decl_QAccessible_Event_Enums, "QFlags_Event");

}


//  Implementation of the enum wrapper class for QAccessible::Method
namespace qt_gsi
{

static gsi::Enum<QAccessible::Method> decl_QAccessible_Method_Enum ("QtGui", "QAccessible_Method",
    gsi::enum_const ("ListSupportedMethods", QAccessible::ListSupportedMethods, "@brief Enum constant QAccessible::ListSupportedMethods") +
    gsi::enum_const ("SetCursorPosition", QAccessible::SetCursorPosition, "@brief Enum constant QAccessible::SetCursorPosition") +
    gsi::enum_const ("GetCursorPosition", QAccessible::GetCursorPosition, "@brief Enum constant QAccessible::GetCursorPosition") +
    gsi::enum_const ("ForegroundColor", QAccessible::ForegroundColor, "@brief Enum constant QAccessible::ForegroundColor") +
    gsi::enum_const ("BackgroundColor", QAccessible::BackgroundColor, "@brief Enum constant QAccessible::BackgroundColor"),
  "@qt\n@brief This class represents the QAccessible::Method enum");

static gsi::QFlagsClass<QAccessible::Method > decl_QAccessible_Method_Enums ("QtGui", "QAccessible_QFlags_Method",
  "@qt\n@brief This class represents the QFlags<QAccessible::Method> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_Method_Enum_in_parent (decl_QAccessible_Method_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_Method_Enum_as_child (decl_QAccessible_Method_Enum, "Method");
static gsi::ClassExt<QAccessible> decl_QAccessible_Method_Enums_as_child (decl_QAccessible_Method_Enums, "QFlags_Method");

}


//  Implementation of the enum wrapper class for QAccessible::RelationFlag
namespace qt_gsi
{

static gsi::Enum<QAccessible::RelationFlag> decl_QAccessible_RelationFlag_Enum ("QtGui", "QAccessible_RelationFlag",
    gsi::enum_const ("Unrelated", QAccessible::Unrelated, "@brief Enum constant QAccessible::Unrelated") +
    gsi::enum_const ("Self", QAccessible::Self, "@brief Enum constant QAccessible::Self") +
    gsi::enum_const ("Ancestor", QAccessible::Ancestor, "@brief Enum constant QAccessible::Ancestor") +
    gsi::enum_const ("Child", QAccessible::Child, "@brief Enum constant QAccessible::Child") +
    gsi::enum_const ("Descendent", QAccessible::Descendent, "@brief Enum constant QAccessible::Descendent") +
    gsi::enum_const ("Sibling", QAccessible::Sibling, "@brief Enum constant QAccessible::Sibling") +
    gsi::enum_const ("HierarchyMask", QAccessible::HierarchyMask, "@brief Enum constant QAccessible::HierarchyMask") +
    gsi::enum_const ("Up", QAccessible::Up, "@brief Enum constant QAccessible::Up") +
    gsi::enum_const ("Down", QAccessible::Down, "@brief Enum constant QAccessible::Down") +
    gsi::enum_const ("Left", QAccessible::Left, "@brief Enum constant QAccessible::Left") +
    gsi::enum_const ("Right", QAccessible::Right, "@brief Enum constant QAccessible::Right") +
    gsi::enum_const ("Covers", QAccessible::Covers, "@brief Enum constant QAccessible::Covers") +
    gsi::enum_const ("Covered", QAccessible::Covered, "@brief Enum constant QAccessible::Covered") +
    gsi::enum_const ("GeometryMask", QAccessible::GeometryMask, "@brief Enum constant QAccessible::GeometryMask") +
    gsi::enum_const ("FocusChild", QAccessible::FocusChild, "@brief Enum constant QAccessible::FocusChild") +
    gsi::enum_const ("Label", QAccessible::Label, "@brief Enum constant QAccessible::Label") +
    gsi::enum_const ("Labelled", QAccessible::Labelled, "@brief Enum constant QAccessible::Labelled") +
    gsi::enum_const ("Controller", QAccessible::Controller, "@brief Enum constant QAccessible::Controller") +
    gsi::enum_const ("Controlled", QAccessible::Controlled, "@brief Enum constant QAccessible::Controlled") +
    gsi::enum_const ("LogicalMask", QAccessible::LogicalMask, "@brief Enum constant QAccessible::LogicalMask"),
  "@qt\n@brief This class represents the QAccessible::RelationFlag enum");

static gsi::QFlagsClass<QAccessible::RelationFlag > decl_QAccessible_RelationFlag_Enums ("QtGui", "QAccessible_QFlags_RelationFlag",
  "@qt\n@brief This class represents the QFlags<QAccessible::RelationFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_RelationFlag_Enum_in_parent (decl_QAccessible_RelationFlag_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_RelationFlag_Enum_as_child (decl_QAccessible_RelationFlag_Enum, "RelationFlag");
static gsi::ClassExt<QAccessible> decl_QAccessible_RelationFlag_Enums_as_child (decl_QAccessible_RelationFlag_Enums, "QFlags_RelationFlag");

}


//  Implementation of the enum wrapper class for QAccessible::Role
namespace qt_gsi
{

static gsi::Enum<QAccessible::Role> decl_QAccessible_Role_Enum ("QtGui", "QAccessible_Role",
    gsi::enum_const ("NoRole", QAccessible::NoRole, "@brief Enum constant QAccessible::NoRole") +
    gsi::enum_const ("TitleBar", QAccessible::TitleBar, "@brief Enum constant QAccessible::TitleBar") +
    gsi::enum_const ("MenuBar", QAccessible::MenuBar, "@brief Enum constant QAccessible::MenuBar") +
    gsi::enum_const ("ScrollBar", QAccessible::ScrollBar, "@brief Enum constant QAccessible::ScrollBar") +
    gsi::enum_const ("Grip", QAccessible::Grip, "@brief Enum constant QAccessible::Grip") +
    gsi::enum_const ("Sound", QAccessible::Sound, "@brief Enum constant QAccessible::Sound") +
    gsi::enum_const ("Cursor", QAccessible::Cursor, "@brief Enum constant QAccessible::Cursor") +
    gsi::enum_const ("Caret", QAccessible::Caret, "@brief Enum constant QAccessible::Caret") +
    gsi::enum_const ("AlertMessage", QAccessible::AlertMessage, "@brief Enum constant QAccessible::AlertMessage") +
    gsi::enum_const ("Window", QAccessible::Window, "@brief Enum constant QAccessible::Window") +
    gsi::enum_const ("Client", QAccessible::Client, "@brief Enum constant QAccessible::Client") +
    gsi::enum_const ("PopupMenu", QAccessible::PopupMenu, "@brief Enum constant QAccessible::PopupMenu") +
    gsi::enum_const ("MenuItem", QAccessible::MenuItem, "@brief Enum constant QAccessible::MenuItem") +
    gsi::enum_const ("ToolTip", QAccessible::ToolTip, "@brief Enum constant QAccessible::ToolTip") +
    gsi::enum_const ("Application", QAccessible::Application, "@brief Enum constant QAccessible::Application") +
    gsi::enum_const ("Document", QAccessible::Document, "@brief Enum constant QAccessible::Document") +
    gsi::enum_const ("Pane", QAccessible::Pane, "@brief Enum constant QAccessible::Pane") +
    gsi::enum_const ("Chart", QAccessible::Chart, "@brief Enum constant QAccessible::Chart") +
    gsi::enum_const ("Dialog", QAccessible::Dialog, "@brief Enum constant QAccessible::Dialog") +
    gsi::enum_const ("Border", QAccessible::Border, "@brief Enum constant QAccessible::Border") +
    gsi::enum_const ("Grouping", QAccessible::Grouping, "@brief Enum constant QAccessible::Grouping") +
    gsi::enum_const ("Separator", QAccessible::Separator, "@brief Enum constant QAccessible::Separator") +
    gsi::enum_const ("ToolBar", QAccessible::ToolBar, "@brief Enum constant QAccessible::ToolBar") +
    gsi::enum_const ("StatusBar", QAccessible::StatusBar, "@brief Enum constant QAccessible::StatusBar") +
    gsi::enum_const ("Table", QAccessible::Table, "@brief Enum constant QAccessible::Table") +
    gsi::enum_const ("ColumnHeader", QAccessible::ColumnHeader, "@brief Enum constant QAccessible::ColumnHeader") +
    gsi::enum_const ("RowHeader", QAccessible::RowHeader, "@brief Enum constant QAccessible::RowHeader") +
    gsi::enum_const ("Column", QAccessible::Column, "@brief Enum constant QAccessible::Column") +
    gsi::enum_const ("Row", QAccessible::Row, "@brief Enum constant QAccessible::Row") +
    gsi::enum_const ("Cell", QAccessible::Cell, "@brief Enum constant QAccessible::Cell") +
    gsi::enum_const ("Link", QAccessible::Link, "@brief Enum constant QAccessible::Link") +
    gsi::enum_const ("HelpBalloon", QAccessible::HelpBalloon, "@brief Enum constant QAccessible::HelpBalloon") +
    gsi::enum_const ("Assistant", QAccessible::Assistant, "@brief Enum constant QAccessible::Assistant") +
    gsi::enum_const ("List", QAccessible::List, "@brief Enum constant QAccessible::List") +
    gsi::enum_const ("ListItem", QAccessible::ListItem, "@brief Enum constant QAccessible::ListItem") +
    gsi::enum_const ("Tree", QAccessible::Tree, "@brief Enum constant QAccessible::Tree") +
    gsi::enum_const ("TreeItem", QAccessible::TreeItem, "@brief Enum constant QAccessible::TreeItem") +
    gsi::enum_const ("PageTab", QAccessible::PageTab, "@brief Enum constant QAccessible::PageTab") +
    gsi::enum_const ("PropertyPage", QAccessible::PropertyPage, "@brief Enum constant QAccessible::PropertyPage") +
    gsi::enum_const ("Indicator", QAccessible::Indicator, "@brief Enum constant QAccessible::Indicator") +
    gsi::enum_const ("Graphic", QAccessible::Graphic, "@brief Enum constant QAccessible::Graphic") +
    gsi::enum_const ("StaticText", QAccessible::StaticText, "@brief Enum constant QAccessible::StaticText") +
    gsi::enum_const ("EditableText", QAccessible::EditableText, "@brief Enum constant QAccessible::EditableText") +
    gsi::enum_const ("PushButton", QAccessible::PushButton, "@brief Enum constant QAccessible::PushButton") +
    gsi::enum_const ("CheckBox", QAccessible::CheckBox, "@brief Enum constant QAccessible::CheckBox") +
    gsi::enum_const ("RadioButton", QAccessible::RadioButton, "@brief Enum constant QAccessible::RadioButton") +
    gsi::enum_const ("ComboBox", QAccessible::ComboBox, "@brief Enum constant QAccessible::ComboBox") +
    gsi::enum_const ("ProgressBar", QAccessible::ProgressBar, "@brief Enum constant QAccessible::ProgressBar") +
    gsi::enum_const ("Dial", QAccessible::Dial, "@brief Enum constant QAccessible::Dial") +
    gsi::enum_const ("HotkeyField", QAccessible::HotkeyField, "@brief Enum constant QAccessible::HotkeyField") +
    gsi::enum_const ("Slider", QAccessible::Slider, "@brief Enum constant QAccessible::Slider") +
    gsi::enum_const ("SpinBox", QAccessible::SpinBox, "@brief Enum constant QAccessible::SpinBox") +
    gsi::enum_const ("Canvas", QAccessible::Canvas, "@brief Enum constant QAccessible::Canvas") +
    gsi::enum_const ("Animation", QAccessible::Animation, "@brief Enum constant QAccessible::Animation") +
    gsi::enum_const ("Equation", QAccessible::Equation, "@brief Enum constant QAccessible::Equation") +
    gsi::enum_const ("ButtonDropDown", QAccessible::ButtonDropDown, "@brief Enum constant QAccessible::ButtonDropDown") +
    gsi::enum_const ("ButtonMenu", QAccessible::ButtonMenu, "@brief Enum constant QAccessible::ButtonMenu") +
    gsi::enum_const ("ButtonDropGrid", QAccessible::ButtonDropGrid, "@brief Enum constant QAccessible::ButtonDropGrid") +
    gsi::enum_const ("Whitespace", QAccessible::Whitespace, "@brief Enum constant QAccessible::Whitespace") +
    gsi::enum_const ("PageTabList", QAccessible::PageTabList, "@brief Enum constant QAccessible::PageTabList") +
    gsi::enum_const ("Clock", QAccessible::Clock, "@brief Enum constant QAccessible::Clock") +
    gsi::enum_const ("Splitter", QAccessible::Splitter, "@brief Enum constant QAccessible::Splitter") +
    gsi::enum_const ("LayeredPane", QAccessible::LayeredPane, "@brief Enum constant QAccessible::LayeredPane") +
    gsi::enum_const ("UserRole", QAccessible::UserRole, "@brief Enum constant QAccessible::UserRole"),
  "@qt\n@brief This class represents the QAccessible::Role enum");

static gsi::QFlagsClass<QAccessible::Role > decl_QAccessible_Role_Enums ("QtGui", "QAccessible_QFlags_Role",
  "@qt\n@brief This class represents the QFlags<QAccessible::Role> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_Role_Enum_in_parent (decl_QAccessible_Role_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_Role_Enum_as_child (decl_QAccessible_Role_Enum, "Role");
static gsi::ClassExt<QAccessible> decl_QAccessible_Role_Enums_as_child (decl_QAccessible_Role_Enums, "QFlags_Role");

}


//  Implementation of the enum wrapper class for QAccessible::StateFlag
namespace qt_gsi
{

static gsi::Enum<QAccessible::StateFlag> decl_QAccessible_StateFlag_Enum ("QtGui", "QAccessible_StateFlag",
    gsi::enum_const ("Normal", QAccessible::Normal, "@brief Enum constant QAccessible::Normal") +
    gsi::enum_const ("Unavailable", QAccessible::Unavailable, "@brief Enum constant QAccessible::Unavailable") +
    gsi::enum_const ("Selected", QAccessible::Selected, "@brief Enum constant QAccessible::Selected") +
    gsi::enum_const ("Focused", QAccessible::Focused, "@brief Enum constant QAccessible::Focused") +
    gsi::enum_const ("Pressed", QAccessible::Pressed, "@brief Enum constant QAccessible::Pressed") +
    gsi::enum_const ("Checked", QAccessible::Checked, "@brief Enum constant QAccessible::Checked") +
    gsi::enum_const ("Mixed", QAccessible::Mixed, "@brief Enum constant QAccessible::Mixed") +
    gsi::enum_const ("ReadOnly", QAccessible::ReadOnly, "@brief Enum constant QAccessible::ReadOnly") +
    gsi::enum_const ("HotTracked", QAccessible::HotTracked, "@brief Enum constant QAccessible::HotTracked") +
    gsi::enum_const ("DefaultButton", QAccessible::DefaultButton, "@brief Enum constant QAccessible::DefaultButton") +
    gsi::enum_const ("Expanded", QAccessible::Expanded, "@brief Enum constant QAccessible::Expanded") +
    gsi::enum_const ("Collapsed", QAccessible::Collapsed, "@brief Enum constant QAccessible::Collapsed") +
    gsi::enum_const ("Busy", QAccessible::Busy, "@brief Enum constant QAccessible::Busy") +
    gsi::enum_const ("Marqueed", QAccessible::Marqueed, "@brief Enum constant QAccessible::Marqueed") +
    gsi::enum_const ("Animated", QAccessible::Animated, "@brief Enum constant QAccessible::Animated") +
    gsi::enum_const ("Invisible", QAccessible::Invisible, "@brief Enum constant QAccessible::Invisible") +
    gsi::enum_const ("Offscreen", QAccessible::Offscreen, "@brief Enum constant QAccessible::Offscreen") +
    gsi::enum_const ("Sizeable", QAccessible::Sizeable, "@brief Enum constant QAccessible::Sizeable") +
    gsi::enum_const ("Movable", QAccessible::Movable, "@brief Enum constant QAccessible::Movable") +
    gsi::enum_const ("SelfVoicing", QAccessible::SelfVoicing, "@brief Enum constant QAccessible::SelfVoicing") +
    gsi::enum_const ("Focusable", QAccessible::Focusable, "@brief Enum constant QAccessible::Focusable") +
    gsi::enum_const ("Selectable", QAccessible::Selectable, "@brief Enum constant QAccessible::Selectable") +
    gsi::enum_const ("Linked", QAccessible::Linked, "@brief Enum constant QAccessible::Linked") +
    gsi::enum_const ("Traversed", QAccessible::Traversed, "@brief Enum constant QAccessible::Traversed") +
    gsi::enum_const ("MultiSelectable", QAccessible::MultiSelectable, "@brief Enum constant QAccessible::MultiSelectable") +
    gsi::enum_const ("ExtSelectable", QAccessible::ExtSelectable, "@brief Enum constant QAccessible::ExtSelectable") +
    gsi::enum_const ("Protected", QAccessible::Protected, "@brief Enum constant QAccessible::Protected") +
    gsi::enum_const ("HasPopup", QAccessible::HasPopup, "@brief Enum constant QAccessible::HasPopup") +
    gsi::enum_const ("Modal", QAccessible::Modal, "@brief Enum constant QAccessible::Modal") +
    gsi::enum_const ("HasInvokeExtension", QAccessible::HasInvokeExtension, "@brief Enum constant QAccessible::HasInvokeExtension"),
  "@qt\n@brief This class represents the QAccessible::StateFlag enum");

static gsi::QFlagsClass<QAccessible::StateFlag > decl_QAccessible_StateFlag_Enums ("QtGui", "QAccessible_QFlags_StateFlag",
  "@qt\n@brief This class represents the QFlags<QAccessible::StateFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_StateFlag_Enum_in_parent (decl_QAccessible_StateFlag_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_StateFlag_Enum_as_child (decl_QAccessible_StateFlag_Enum, "StateFlag");
static gsi::ClassExt<QAccessible> decl_QAccessible_StateFlag_Enums_as_child (decl_QAccessible_StateFlag_Enums, "QFlags_StateFlag");

}


//  Implementation of the enum wrapper class for QAccessible::Text
namespace qt_gsi
{

static gsi::Enum<QAccessible::Text> decl_QAccessible_Text_Enum ("QtGui", "QAccessible_Text",
    gsi::enum_const ("Name", QAccessible::Name, "@brief Enum constant QAccessible::Name") +
    gsi::enum_const ("Description", QAccessible::Description, "@brief Enum constant QAccessible::Description") +
    gsi::enum_const ("Value", QAccessible::Value, "@brief Enum constant QAccessible::Value") +
    gsi::enum_const ("Help", QAccessible::Help, "@brief Enum constant QAccessible::Help") +
    gsi::enum_const ("Accelerator", QAccessible::Accelerator, "@brief Enum constant QAccessible::Accelerator") +
    gsi::enum_const ("UserText", QAccessible::UserText, "@brief Enum constant QAccessible::UserText"),
  "@qt\n@brief This class represents the QAccessible::Text enum");

static gsi::QFlagsClass<QAccessible::Text > decl_QAccessible_Text_Enums ("QtGui", "QAccessible_QFlags_Text",
  "@qt\n@brief This class represents the QFlags<QAccessible::Text> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QAccessible> inject_QAccessible_Text_Enum_in_parent (decl_QAccessible_Text_Enum.defs ());
static gsi::ClassExt<QAccessible> decl_QAccessible_Text_Enum_as_child (decl_QAccessible_Text_Enum, "Text");
static gsi::ClassExt<QAccessible> decl_QAccessible_Text_Enums_as_child (decl_QAccessible_Text_Enums, "QFlags_Text");

}

