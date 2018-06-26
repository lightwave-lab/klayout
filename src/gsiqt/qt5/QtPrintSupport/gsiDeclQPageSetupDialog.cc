
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
*  @file gsiDeclQPageSetupDialog.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPageSetupDialog>
#include <QObject>
#include <QPrinter>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtPrintSupportCommon.h"
#include "gsiDeclQtPrintSupportTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPageSetupDialog

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPageSetupDialog::staticMetaObject);
}


// void QPageSetupDialog::done(int result)


static void _init_f_done_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("result");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_done_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->done (arg1);
}


// int QPageSetupDialog::exec()


static void _init_f_exec_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_exec_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPageSetupDialog *)cls)->exec ());
}


// void QPageSetupDialog::open()


static void _init_f_open_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_open_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->open ();
}


// void QPageSetupDialog::open(QObject *receiver, const char *member)


static void _init_f_open_2925 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("receiver");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("member");
  decl->add_arg<const char * > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_open_2925 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  const char *arg2 = args.read<const char * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog *)cls)->open (arg1, arg2);
}


// QPrinter *QPageSetupDialog::printer()


static void _init_f_printer_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QPrinter * > ();
}

static void _call_f_printer_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPrinter * > ((QPrinter *)((QPageSetupDialog *)cls)->printer ());
}


// static QString QPageSetupDialog::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QPageSetupDialog::tr (arg1, arg2, arg3));
}


// static QString QPageSetupDialog::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  const char *arg2 = args ? args.read<const char * > (heap) : (const char *)(__null);
  int arg3 = args ? args.read<int > (heap) : (int)(-1);
  ret.write<QString > ((QString)QPageSetupDialog::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPageSetupDialog () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("done", "@brief Method void QPageSetupDialog::done(int result)\n", false, &_init_f_done_767, &_call_f_done_767);
  methods += new qt_gsi::GenericMethod ("exec", "@brief Method int QPageSetupDialog::exec()\n", false, &_init_f_exec_0, &_call_f_exec_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method void QPageSetupDialog::open()\n", false, &_init_f_open_0, &_call_f_open_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method void QPageSetupDialog::open(QObject *receiver, const char *member)\n", false, &_init_f_open_2925, &_call_f_open_2925);
  methods += new qt_gsi::GenericMethod ("printer", "@brief Method QPrinter *QPageSetupDialog::printer()\n", false, &_init_f_printer_0, &_call_f_printer_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPageSetupDialog::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QPageSetupDialog::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QPageSetupDialog> decl_QPageSetupDialog ("QtPrintSupport", "QPageSetupDialog_Native",
  methods_QPageSetupDialog (),
  "@hide\n@alias QPageSetupDialog");

GSI_QTPRINTSUPPORT_PUBLIC gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog () { return decl_QPageSetupDialog; }

}


class QPageSetupDialog_Adaptor : public QPageSetupDialog, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPageSetupDialog_Adaptor();

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)
  QPageSetupDialog_Adaptor(QPrinter *printer) : QPageSetupDialog(printer)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)
  QPageSetupDialog_Adaptor(QPrinter *printer, QWidget *parent) : QPageSetupDialog(printer, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QWidget *parent)
  QPageSetupDialog_Adaptor() : QPageSetupDialog()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPageSetupDialog::QPageSetupDialog(QWidget *parent)
  QPageSetupDialog_Adaptor(QWidget *parent) : QPageSetupDialog(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] void QPageSetupDialog::open()
  void cbs_open_0_0()
  {
    QPageSetupDialog::open();
  }

  virtual void open()
  {
    if (cb_open_0_0.can_issue()) {
      cb_open_0_0.issue<QPageSetupDialog_Adaptor>(&QPageSetupDialog_Adaptor::cbs_open_0_0);
    } else {
      QPageSetupDialog::open();
    }
  }

  gsi::Callback cb_open_0_0;
};

QPageSetupDialog_Adaptor::~QPageSetupDialog_Adaptor() { }

//  Constructor QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent) (adaptor class)

static void _init_ctor_QPageSetupDialog_Adaptor_2650 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("printer");
  decl->add_arg<QPrinter * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "0");
  decl->add_arg<QWidget * > (argspec_1);
  decl->set_return_new<QPageSetupDialog_Adaptor> ();
}

static void _call_ctor_QPageSetupDialog_Adaptor_2650 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPrinter *arg1 = args.read<QPrinter * > (heap);
  QWidget *arg2 = args ? args.read<QWidget * > (heap) : (QWidget *)(0);
  ret.write<QPageSetupDialog_Adaptor *> (new QPageSetupDialog_Adaptor (arg1, arg2));
}


//  Constructor QPageSetupDialog::QPageSetupDialog(QWidget *parent) (adaptor class)

static void _init_ctor_QPageSetupDialog_Adaptor_1315 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QWidget * > (argspec_0);
  decl->set_return_new<QPageSetupDialog_Adaptor> ();
}

static void _call_ctor_QPageSetupDialog_Adaptor_1315 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QWidget *arg1 = args ? args.read<QWidget * > (heap) : (QWidget *)(0);
  ret.write<QPageSetupDialog_Adaptor *> (new QPageSetupDialog_Adaptor (arg1));
}


// void QPageSetupDialog::open()

static void _init_cbs_open_0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_cbs_open_0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPageSetupDialog_Adaptor *)cls)->cbs_open_0_0 ();
}

static void _set_callback_cbs_open_0_0 (void *cls, const gsi::Callback &cb)
{
  ((QPageSetupDialog_Adaptor *)cls)->cb_open_0_0 = cb;
}


namespace gsi
{

gsi::Class<QPageSetupDialog> &qtdecl_QPageSetupDialog ();

static gsi::Methods methods_QPageSetupDialog_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageSetupDialog::QPageSetupDialog(QPrinter *printer, QWidget *parent)\nThis method creates an object of class QPageSetupDialog.", &_init_ctor_QPageSetupDialog_Adaptor_2650, &_call_ctor_QPageSetupDialog_Adaptor_2650);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPageSetupDialog::QPageSetupDialog(QWidget *parent)\nThis method creates an object of class QPageSetupDialog.", &_init_ctor_QPageSetupDialog_Adaptor_1315, &_call_ctor_QPageSetupDialog_Adaptor_1315);
  methods += new qt_gsi::GenericMethod ("open", "@hide", false, &_init_cbs_open_0_0, &_call_cbs_open_0_0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Virtual method void QPageSetupDialog::open()\nThis method can be reimplemented in a derived class.", false, &_init_cbs_open_0_0, &_call_cbs_open_0_0, &_set_callback_cbs_open_0_0);
  return methods;
}

gsi::Class<QPageSetupDialog_Adaptor> decl_QPageSetupDialog_Adaptor (qtdecl_QPageSetupDialog (), "QtPrintSupport", "QPageSetupDialog",
  methods_QPageSetupDialog_Adaptor (),
  "@qt\n@brief Binding of QPageSetupDialog");

}

