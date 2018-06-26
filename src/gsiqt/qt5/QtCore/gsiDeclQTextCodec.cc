
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
*  @file gsiDeclQTextCodec.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTextCodec>
#include <QTextDecoder>
#include <QTextEncoder>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTextCodec

// QList<QByteArray> QTextCodec::aliases()


static void _init_f_aliases_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_aliases_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QTextCodec *)cls)->aliases ());
}


// bool QTextCodec::canEncode(QChar)


static void _init_f_canEncode_c899 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_canEncode_c899 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type & arg1 = args.read<const qt_gsi::Converter<QChar>::target_type & > (heap);
  ret.write<bool > ((bool)((QTextCodec *)cls)->canEncode (qt_gsi::QtToCppAdaptor<QChar>(arg1).cref()));
}


// bool QTextCodec::canEncode(const QString &)


static void _init_f_canEncode_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_canEncode_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<bool > ((bool)((QTextCodec *)cls)->canEncode (arg1));
}


// QByteArray QTextCodec::fromUnicode(const QString &uc)


static void _init_f_fromUnicode_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("uc");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_fromUnicode_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = args.read<const QString & > (heap);
  ret.write<QByteArray > ((QByteArray)((QTextCodec *)cls)->fromUnicode (arg1));
}


// QTextDecoder *QTextCodec::makeDecoder(QFlags<QTextCodec::ConversionFlag> flags)


static void _init_f_makeDecoder_c3668 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags", true, "QTextCodec::DefaultConversion");
  decl->add_arg<QFlags<QTextCodec::ConversionFlag> > (argspec_0);
  decl->set_return<QTextDecoder * > ();
}

static void _call_f_makeDecoder_c3668 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextCodec::ConversionFlag> arg1 = args ? args.read<QFlags<QTextCodec::ConversionFlag> > (heap) : (QFlags<QTextCodec::ConversionFlag>)(QTextCodec::DefaultConversion);
  ret.write<QTextDecoder * > ((QTextDecoder *)((QTextCodec *)cls)->makeDecoder (arg1));
}


// QTextEncoder *QTextCodec::makeEncoder(QFlags<QTextCodec::ConversionFlag> flags)


static void _init_f_makeEncoder_c3668 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("flags", true, "QTextCodec::DefaultConversion");
  decl->add_arg<QFlags<QTextCodec::ConversionFlag> > (argspec_0);
  decl->set_return<QTextEncoder * > ();
}

static void _call_f_makeEncoder_c3668 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QTextCodec::ConversionFlag> arg1 = args ? args.read<QFlags<QTextCodec::ConversionFlag> > (heap) : (QFlags<QTextCodec::ConversionFlag>)(QTextCodec::DefaultConversion);
  ret.write<QTextEncoder * > ((QTextEncoder *)((QTextCodec *)cls)->makeEncoder (arg1));
}


// int QTextCodec::mibEnum()


static void _init_f_mibEnum_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_mibEnum_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextCodec *)cls)->mibEnum ());
}


// QByteArray QTextCodec::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QTextCodec *)cls)->name ());
}


// QString QTextCodec::toUnicode(const char *chars)


static void _init_f_toUnicode_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("chars");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_toUnicode_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QString > ((QString)((QTextCodec *)cls)->toUnicode (arg1));
}


// QString QTextCodec::toUnicode(const char *in, int length, QTextCodec::ConverterState *state)


static void _init_f_toUnicode_c5465 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("in");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state", true, "0");
  decl->add_arg<QTextCodec::ConverterState * > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_toUnicode_c5465 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  int arg2 = args.read<int > (heap);
  QTextCodec::ConverterState *arg3 = args ? args.read<QTextCodec::ConverterState * > (heap) : (QTextCodec::ConverterState *)(0);
  ret.write<QString > ((QString)((QTextCodec *)cls)->toUnicode (arg1, arg2, arg3));
}


// static QList<QByteArray> QTextCodec::availableCodecs()


static void _init_f_availableCodecs_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_availableCodecs_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTextCodec::availableCodecs ());
}


// static QList<int> QTextCodec::availableMibs()


static void _init_f_availableMibs_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<int> > ();
}

static void _call_f_availableMibs_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<int> > ((QList<int>)QTextCodec::availableMibs ());
}


// static QTextCodec *QTextCodec::codecForHtml(const QByteArray &ba)


static void _init_f_codecForHtml_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ba");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForHtml_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForHtml (arg1));
}


// static QTextCodec *QTextCodec::codecForHtml(const QByteArray &ba, QTextCodec *defaultCodec)


static void _init_f_codecForHtml_3803 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ba");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defaultCodec");
  decl->add_arg<QTextCodec * > (argspec_1);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForHtml_3803 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  QTextCodec *arg2 = args.read<QTextCodec * > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForHtml (arg1, arg2));
}


// static QTextCodec *QTextCodec::codecForLocale()


static void _init_f_codecForLocale_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForLocale_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForLocale ());
}


// static QTextCodec *QTextCodec::codecForMib(int mib)


static void _init_f_codecForMib_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mib");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForMib_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForMib (arg1));
}


// static QTextCodec *QTextCodec::codecForName(const char *name)


static void _init_f_codecForName_1731 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("name");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForName_1731 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForName (arg1));
}


// static QTextCodec *QTextCodec::codecForUtfText(const QByteArray &ba)


static void _init_f_codecForUtfText_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ba");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForUtfText_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForUtfText (arg1));
}


// static QTextCodec *QTextCodec::codecForUtfText(const QByteArray &ba, QTextCodec *defaultCodec)


static void _init_f_codecForUtfText_3803 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ba");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("defaultCodec");
  decl->add_arg<QTextCodec * > (argspec_1);
  decl->set_return<QTextCodec * > ();
}

static void _call_f_codecForUtfText_3803 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  QTextCodec *arg2 = args.read<QTextCodec * > (heap);
  ret.write<QTextCodec * > ((QTextCodec *)QTextCodec::codecForUtfText (arg1, arg2));
}


// static void QTextCodec::setCodecForLocale(QTextCodec *c)


static void _init_f_setCodecForLocale_1602 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<QTextCodec * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCodecForLocale_1602 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTextCodec *arg1 = args.read<QTextCodec * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QTextCodec::setCodecForLocale (arg1);
}


namespace gsi
{

static gsi::Methods methods_QTextCodec () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("aliases", "@brief Method QList<QByteArray> QTextCodec::aliases()\n", true, &_init_f_aliases_c0, &_call_f_aliases_c0);
  methods += new qt_gsi::GenericMethod ("canEncode", "@brief Method bool QTextCodec::canEncode(QChar)\n", true, &_init_f_canEncode_c899, &_call_f_canEncode_c899);
  methods += new qt_gsi::GenericMethod ("canEncode", "@brief Method bool QTextCodec::canEncode(const QString &)\n", true, &_init_f_canEncode_c2025, &_call_f_canEncode_c2025);
  methods += new qt_gsi::GenericMethod ("fromUnicode", "@brief Method QByteArray QTextCodec::fromUnicode(const QString &uc)\n", true, &_init_f_fromUnicode_c2025, &_call_f_fromUnicode_c2025);
  methods += new qt_gsi::GenericMethod ("makeDecoder", "@brief Method QTextDecoder *QTextCodec::makeDecoder(QFlags<QTextCodec::ConversionFlag> flags)\n", true, &_init_f_makeDecoder_c3668, &_call_f_makeDecoder_c3668);
  methods += new qt_gsi::GenericMethod ("makeEncoder", "@brief Method QTextEncoder *QTextCodec::makeEncoder(QFlags<QTextCodec::ConversionFlag> flags)\n", true, &_init_f_makeEncoder_c3668, &_call_f_makeEncoder_c3668);
  methods += new qt_gsi::GenericMethod ("mibEnum", "@brief Method int QTextCodec::mibEnum()\n", true, &_init_f_mibEnum_c0, &_call_f_mibEnum_c0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QByteArray QTextCodec::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("toUnicode", "@brief Method QString QTextCodec::toUnicode(const char *chars)\n", true, &_init_f_toUnicode_c1731, &_call_f_toUnicode_c1731);
  methods += new qt_gsi::GenericMethod ("toUnicode", "@brief Method QString QTextCodec::toUnicode(const char *in, int length, QTextCodec::ConverterState *state)\n", true, &_init_f_toUnicode_c5465, &_call_f_toUnicode_c5465);
  methods += new qt_gsi::GenericStaticMethod ("availableCodecs", "@brief Static method QList<QByteArray> QTextCodec::availableCodecs()\nThis method is static and can be called without an instance.", &_init_f_availableCodecs_0, &_call_f_availableCodecs_0);
  methods += new qt_gsi::GenericStaticMethod ("availableMibs", "@brief Static method QList<int> QTextCodec::availableMibs()\nThis method is static and can be called without an instance.", &_init_f_availableMibs_0, &_call_f_availableMibs_0);
  methods += new qt_gsi::GenericStaticMethod ("codecForHtml", "@brief Static method QTextCodec *QTextCodec::codecForHtml(const QByteArray &ba)\nThis method is static and can be called without an instance.", &_init_f_codecForHtml_2309, &_call_f_codecForHtml_2309);
  methods += new qt_gsi::GenericStaticMethod ("codecForHtml", "@brief Static method QTextCodec *QTextCodec::codecForHtml(const QByteArray &ba, QTextCodec *defaultCodec)\nThis method is static and can be called without an instance.", &_init_f_codecForHtml_3803, &_call_f_codecForHtml_3803);
  methods += new qt_gsi::GenericStaticMethod (":codecForLocale", "@brief Static method QTextCodec *QTextCodec::codecForLocale()\nThis method is static and can be called without an instance.", &_init_f_codecForLocale_0, &_call_f_codecForLocale_0);
  methods += new qt_gsi::GenericStaticMethod ("codecForMib", "@brief Static method QTextCodec *QTextCodec::codecForMib(int mib)\nThis method is static and can be called without an instance.", &_init_f_codecForMib_767, &_call_f_codecForMib_767);
  methods += new qt_gsi::GenericStaticMethod ("codecForName", "@brief Static method QTextCodec *QTextCodec::codecForName(const char *name)\nThis method is static and can be called without an instance.", &_init_f_codecForName_1731, &_call_f_codecForName_1731);
  methods += new qt_gsi::GenericStaticMethod ("codecForUtfText", "@brief Static method QTextCodec *QTextCodec::codecForUtfText(const QByteArray &ba)\nThis method is static and can be called without an instance.", &_init_f_codecForUtfText_2309, &_call_f_codecForUtfText_2309);
  methods += new qt_gsi::GenericStaticMethod ("codecForUtfText", "@brief Static method QTextCodec *QTextCodec::codecForUtfText(const QByteArray &ba, QTextCodec *defaultCodec)\nThis method is static and can be called without an instance.", &_init_f_codecForUtfText_3803, &_call_f_codecForUtfText_3803);
  methods += new qt_gsi::GenericStaticMethod ("setCodecForLocale|codecForLocale=", "@brief Static method void QTextCodec::setCodecForLocale(QTextCodec *c)\nThis method is static and can be called without an instance.", &_init_f_setCodecForLocale_1602, &_call_f_setCodecForLocale_1602);
  return methods;
}

gsi::Class<QTextCodec> decl_QTextCodec ("QtCore", "QTextCodec_Native",
  methods_QTextCodec (),
  "@hide\n@alias QTextCodec");

GSI_QTCORE_PUBLIC gsi::Class<QTextCodec> &qtdecl_QTextCodec () { return decl_QTextCodec; }

}


class QTextCodec_Adaptor : public QTextCodec, public qt_gsi::QtObjectBase
{
public:

  virtual ~QTextCodec_Adaptor();

  //  [adaptor ctor] QTextCodec::QTextCodec()
  QTextCodec_Adaptor() : QTextCodec()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QList<QByteArray> QTextCodec::aliases()
  QList<QByteArray> cbs_aliases_c0_0() const
  {
    return QTextCodec::aliases();
  }

  virtual QList<QByteArray> aliases() const
  {
    if (cb_aliases_c0_0.can_issue()) {
      return cb_aliases_c0_0.issue<QTextCodec_Adaptor, QList<QByteArray> >(&QTextCodec_Adaptor::cbs_aliases_c0_0);
    } else {
      return QTextCodec::aliases();
    }
  }

  //  [adaptor impl] int QTextCodec::mibEnum()
  int cbs_mibEnum_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("mibEnum");
  }

  virtual int mibEnum() const
  {
    if (cb_mibEnum_c0_0.can_issue()) {
      return cb_mibEnum_c0_0.issue<QTextCodec_Adaptor, int>(&QTextCodec_Adaptor::cbs_mibEnum_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("mibEnum");
    }
  }

  //  [adaptor impl] QByteArray QTextCodec::name()
  QByteArray cbs_name_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("name");
  }

  virtual QByteArray name() const
  {
    if (cb_name_c0_0.can_issue()) {
      return cb_name_c0_0.issue<QTextCodec_Adaptor, QByteArray>(&QTextCodec_Adaptor::cbs_name_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("name");
    }
  }

  //  [adaptor impl] QByteArray QTextCodec::convertFromUnicode(const QChar *in, int length, QTextCodec::ConverterState *state)
  QByteArray cbs_convertFromUnicode_c5514_0(const qt_gsi::Converter<QChar>::target_type * in, int length, QTextCodec::ConverterState *state) const
  {
    __SUPPRESS_UNUSED_WARNING (in);
    __SUPPRESS_UNUSED_WARNING (length);
    __SUPPRESS_UNUSED_WARNING (state);
    throw qt_gsi::AbstractMethodCalledException("convertFromUnicode");
  }

  virtual QByteArray convertFromUnicode(const QChar *in, int length, QTextCodec::ConverterState *state) const
  {
    if (cb_convertFromUnicode_c5514_0.can_issue()) {
      return cb_convertFromUnicode_c5514_0.issue<QTextCodec_Adaptor, QByteArray, const qt_gsi::Converter<QChar>::target_type *, int, QTextCodec::ConverterState *>(&QTextCodec_Adaptor::cbs_convertFromUnicode_c5514_0, qt_gsi::CppToQtAdaptor<QChar>(*in), length, state);
    } else {
      throw qt_gsi::AbstractMethodCalledException("convertFromUnicode");
    }
  }

  //  [adaptor impl] QString QTextCodec::convertToUnicode(const char *in, int length, QTextCodec::ConverterState *state)
  QString cbs_convertToUnicode_c5465_0(const char *in, int length, QTextCodec::ConverterState *state) const
  {
    __SUPPRESS_UNUSED_WARNING (in);
    __SUPPRESS_UNUSED_WARNING (length);
    __SUPPRESS_UNUSED_WARNING (state);
    throw qt_gsi::AbstractMethodCalledException("convertToUnicode");
  }

  virtual QString convertToUnicode(const char *in, int length, QTextCodec::ConverterState *state) const
  {
    if (cb_convertToUnicode_c5465_0.can_issue()) {
      return cb_convertToUnicode_c5465_0.issue<QTextCodec_Adaptor, QString, const char *, int, QTextCodec::ConverterState *>(&QTextCodec_Adaptor::cbs_convertToUnicode_c5465_0, in, length, state);
    } else {
      throw qt_gsi::AbstractMethodCalledException("convertToUnicode");
    }
  }

  gsi::Callback cb_aliases_c0_0;
  gsi::Callback cb_mibEnum_c0_0;
  gsi::Callback cb_name_c0_0;
  gsi::Callback cb_convertFromUnicode_c5514_0;
  gsi::Callback cb_convertToUnicode_c5465_0;
};

QTextCodec_Adaptor::~QTextCodec_Adaptor() { }

//  Constructor QTextCodec::QTextCodec() (adaptor class)

static void _init_ctor_QTextCodec_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTextCodec_Adaptor> ();
}

static void _call_ctor_QTextCodec_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTextCodec_Adaptor *> (new QTextCodec_Adaptor ());
}


// QList<QByteArray> QTextCodec::aliases()

static void _init_cbs_aliases_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_cbs_aliases_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)((QTextCodec_Adaptor *)cls)->cbs_aliases_c0_0 ());
}

static void _set_callback_cbs_aliases_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextCodec_Adaptor *)cls)->cb_aliases_c0_0 = cb;
}


// QByteArray QTextCodec::convertFromUnicode(const QChar *in, int length, QTextCodec::ConverterState *state)

static void _init_cbs_convertFromUnicode_c5514_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("in");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<QTextCodec::ConverterState * > (argspec_2);
  decl->set_return<QByteArray > ();
}

static void _call_cbs_convertFromUnicode_c5514_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type * arg1 = args.read<const qt_gsi::Converter<QChar>::target_type * > (heap);
  int arg2 = args.read<int > (heap);
  QTextCodec::ConverterState *arg3 = args.read<QTextCodec::ConverterState * > (heap);
  ret.write<QByteArray > ((QByteArray)((QTextCodec_Adaptor *)cls)->cbs_convertFromUnicode_c5514_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_convertFromUnicode_c5514_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextCodec_Adaptor *)cls)->cb_convertFromUnicode_c5514_0 = cb;
}


// QString QTextCodec::convertToUnicode(const char *in, int length, QTextCodec::ConverterState *state)

static void _init_cbs_convertToUnicode_c5465_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("in");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("length");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("state");
  decl->add_arg<QTextCodec::ConverterState * > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_cbs_convertToUnicode_c5465_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  int arg2 = args.read<int > (heap);
  QTextCodec::ConverterState *arg3 = args.read<QTextCodec::ConverterState * > (heap);
  ret.write<QString > ((QString)((QTextCodec_Adaptor *)cls)->cbs_convertToUnicode_c5465_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_convertToUnicode_c5465_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextCodec_Adaptor *)cls)->cb_convertToUnicode_c5465_0 = cb;
}


// int QTextCodec::mibEnum()

static void _init_cbs_mibEnum_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_cbs_mibEnum_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QTextCodec_Adaptor *)cls)->cbs_mibEnum_c0_0 ());
}

static void _set_callback_cbs_mibEnum_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextCodec_Adaptor *)cls)->cb_mibEnum_c0_0 = cb;
}


// QByteArray QTextCodec::name()

static void _init_cbs_name_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_cbs_name_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QTextCodec_Adaptor *)cls)->cbs_name_c0_0 ());
}

static void _set_callback_cbs_name_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QTextCodec_Adaptor *)cls)->cb_name_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QTextCodec> &qtdecl_QTextCodec ();

static gsi::Methods methods_QTextCodec_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTextCodec::QTextCodec()\nThis method creates an object of class QTextCodec.", &_init_ctor_QTextCodec_Adaptor_0, &_call_ctor_QTextCodec_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("aliases", "@hide", true, &_init_cbs_aliases_c0_0, &_call_cbs_aliases_c0_0);
  methods += new qt_gsi::GenericMethod ("aliases", "@brief Virtual method QList<QByteArray> QTextCodec::aliases()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_aliases_c0_0, &_call_cbs_aliases_c0_0, &_set_callback_cbs_aliases_c0_0);
  methods += new qt_gsi::GenericMethod ("*convertFromUnicode", "@hide", true, &_init_cbs_convertFromUnicode_c5514_0, &_call_cbs_convertFromUnicode_c5514_0);
  methods += new qt_gsi::GenericMethod ("*convertFromUnicode", "@brief Virtual method QByteArray QTextCodec::convertFromUnicode(const QChar *in, int length, QTextCodec::ConverterState *state)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_convertFromUnicode_c5514_0, &_call_cbs_convertFromUnicode_c5514_0, &_set_callback_cbs_convertFromUnicode_c5514_0);
  methods += new qt_gsi::GenericMethod ("*convertToUnicode", "@hide", true, &_init_cbs_convertToUnicode_c5465_0, &_call_cbs_convertToUnicode_c5465_0);
  methods += new qt_gsi::GenericMethod ("*convertToUnicode", "@brief Virtual method QString QTextCodec::convertToUnicode(const char *in, int length, QTextCodec::ConverterState *state)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_convertToUnicode_c5465_0, &_call_cbs_convertToUnicode_c5465_0, &_set_callback_cbs_convertToUnicode_c5465_0);
  methods += new qt_gsi::GenericMethod ("mibEnum", "@hide", true, &_init_cbs_mibEnum_c0_0, &_call_cbs_mibEnum_c0_0);
  methods += new qt_gsi::GenericMethod ("mibEnum", "@brief Virtual method int QTextCodec::mibEnum()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_mibEnum_c0_0, &_call_cbs_mibEnum_c0_0, &_set_callback_cbs_mibEnum_c0_0);
  methods += new qt_gsi::GenericMethod ("name", "@hide", true, &_init_cbs_name_c0_0, &_call_cbs_name_c0_0);
  methods += new qt_gsi::GenericMethod ("name", "@brief Virtual method QByteArray QTextCodec::name()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_name_c0_0, &_call_cbs_name_c0_0, &_set_callback_cbs_name_c0_0);
  return methods;
}

gsi::Class<QTextCodec_Adaptor> decl_QTextCodec_Adaptor (qtdecl_QTextCodec (), "QtCore", "QTextCodec",
  methods_QTextCodec_Adaptor (),
  "@qt\n@brief Binding of QTextCodec");

}


//  Implementation of the enum wrapper class for QTextCodec::ConversionFlag
namespace qt_gsi
{

static gsi::Enum<QTextCodec::ConversionFlag> decl_QTextCodec_ConversionFlag_Enum ("QtCore", "QTextCodec_ConversionFlag",
    gsi::enum_const ("DefaultConversion", QTextCodec::DefaultConversion, "@brief Enum constant QTextCodec::DefaultConversion") +
    gsi::enum_const ("ConvertInvalidToNull", QTextCodec::ConvertInvalidToNull, "@brief Enum constant QTextCodec::ConvertInvalidToNull") +
    gsi::enum_const ("IgnoreHeader", QTextCodec::IgnoreHeader, "@brief Enum constant QTextCodec::IgnoreHeader") +
    gsi::enum_const ("FreeFunction", QTextCodec::FreeFunction, "@brief Enum constant QTextCodec::FreeFunction"),
  "@qt\n@brief This class represents the QTextCodec::ConversionFlag enum");

static gsi::QFlagsClass<QTextCodec::ConversionFlag > decl_QTextCodec_ConversionFlag_Enums ("QtCore", "QTextCodec_QFlags_ConversionFlag",
  "@qt\n@brief This class represents the QFlags<QTextCodec::ConversionFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTextCodec> inject_QTextCodec_ConversionFlag_Enum_in_parent (decl_QTextCodec_ConversionFlag_Enum.defs ());
static gsi::ClassExt<QTextCodec> decl_QTextCodec_ConversionFlag_Enum_as_child (decl_QTextCodec_ConversionFlag_Enum, "ConversionFlag");
static gsi::ClassExt<QTextCodec> decl_QTextCodec_ConversionFlag_Enums_as_child (decl_QTextCodec_ConversionFlag_Enums, "QFlags_ConversionFlag");

}

