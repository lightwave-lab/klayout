
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
*  @file gsiDeclQIODevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QIODevice>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QIODevice

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QIODevice::staticMetaObject);
}


// bool QIODevice::atEnd()


static void _init_f_atEnd_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_atEnd_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->atEnd ());
}


// qint64 QIODevice::bytesAvailable()


static void _init_f_bytesAvailable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesAvailable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->bytesAvailable ());
}


// qint64 QIODevice::bytesToWrite()


static void _init_f_bytesToWrite_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_bytesToWrite_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->bytesToWrite ());
}


// bool QIODevice::canReadLine()


static void _init_f_canReadLine_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_canReadLine_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->canReadLine ());
}


// void QIODevice::close()


static void _init_f_close_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_close_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIODevice *)cls)->close ();
}


// QString QIODevice::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QIODevice *)cls)->errorString ());
}


// bool QIODevice::isOpen()


static void _init_f_isOpen_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isOpen_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->isOpen ());
}


// bool QIODevice::isReadable()


static void _init_f_isReadable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isReadable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->isReadable ());
}


// bool QIODevice::isSequential()


static void _init_f_isSequential_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSequential_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->isSequential ());
}


// bool QIODevice::isTextModeEnabled()


static void _init_f_isTextModeEnabled_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isTextModeEnabled_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->isTextModeEnabled ());
}


// bool QIODevice::isWritable()


static void _init_f_isWritable_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isWritable_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->isWritable ());
}


// bool QIODevice::open(QFlags<QIODevice::OpenModeFlag> mode)


static void _init_f_open_3242 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mode");
  decl->add_arg<QFlags<QIODevice::OpenModeFlag> > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_open_3242 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QIODevice::OpenModeFlag> arg1 = args.read<QFlags<QIODevice::OpenModeFlag> > (heap);
  ret.write<bool > ((bool)((QIODevice *)cls)->open (arg1));
}


// QFlags<QIODevice::OpenModeFlag> QIODevice::openMode()


static void _init_f_openMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QIODevice::OpenModeFlag> > ();
}

static void _call_f_openMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QIODevice::OpenModeFlag> > ((QFlags<QIODevice::OpenModeFlag>)((QIODevice *)cls)->openMode ());
}


// QByteArray QIODevice::peek(qint64 maxlen)


static void _init_f_peek_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maxlen");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_peek_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  ret.write<QByteArray > ((QByteArray)((QIODevice *)cls)->peek (arg1));
}


// qint64 QIODevice::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->pos ());
}


// bool QIODevice::putChar(char c)


static void _init_f_putChar_850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<char > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_putChar_850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = args.read<char > (heap);
  ret.write<bool > ((bool)((QIODevice *)cls)->putChar (arg1));
}


// QByteArray QIODevice::read(qint64 maxlen)


static void _init_f_read_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maxlen");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_read_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  ret.write<QByteArray > ((QByteArray)((QIODevice *)cls)->read (arg1));
}


// QByteArray QIODevice::readAll()


static void _init_f_readAll_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_readAll_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QIODevice *)cls)->readAll ());
}


// QByteArray QIODevice::readLine(qint64 maxlen)


static void _init_f_readLine_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("maxlen", true, "0");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_readLine_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args ? args.read<qint64 > (heap) : (qint64)(0);
  ret.write<QByteArray > ((QByteArray)((QIODevice *)cls)->readLine (arg1));
}


// bool QIODevice::reset()


static void _init_f_reset_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_reset_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QIODevice *)cls)->reset ());
}


// bool QIODevice::seek(qint64 pos)


static void _init_f_seek_986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pos");
  decl->add_arg<qint64 > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_seek_986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  qint64 arg1 = args.read<qint64 > (heap);
  ret.write<bool > ((bool)((QIODevice *)cls)->seek (arg1));
}


// void QIODevice::setTextModeEnabled(bool enabled)


static void _init_f_setTextModeEnabled_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("enabled");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setTextModeEnabled_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = args.read<bool > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIODevice *)cls)->setTextModeEnabled (arg1);
}


// qint64 QIODevice::size()


static void _init_f_size_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_size_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->size ());
}


// void QIODevice::ungetChar(char c)


static void _init_f_ungetChar_850 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<char > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_ungetChar_850 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  char arg1 = args.read<char > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QIODevice *)cls)->ungetChar (arg1);
}


// bool QIODevice::waitForBytesWritten(int msecs)


static void _init_f_waitForBytesWritten_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForBytesWritten_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QIODevice *)cls)->waitForBytesWritten (arg1));
}


// bool QIODevice::waitForReadyRead(int msecs)


static void _init_f_waitForReadyRead_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("msecs");
  decl->add_arg<int > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_waitForReadyRead_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = args.read<int > (heap);
  ret.write<bool > ((bool)((QIODevice *)cls)->waitForReadyRead (arg1));
}


// qint64 QIODevice::write(const char *data, qint64 len)


static void _init_f_write_2609 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<qint64 > (argspec_1);
  decl->set_return<qint64 > ();
}

static void _call_f_write_2609 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  qint64 arg2 = args.read<qint64 > (heap);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->write (arg1, arg2));
}


// qint64 QIODevice::write(const QByteArray &data)


static void _init_f_write_2309 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<qint64 > ();
}

static void _call_f_write_2309 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  ret.write<qint64 > ((qint64)((QIODevice *)cls)->write (arg1));
}


// static QString QIODevice::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QIODevice::tr (arg1, arg2, arg3));
}


// static QString QIODevice::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QIODevice::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QIODevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("atEnd", "@brief Method bool QIODevice::atEnd()\n", true, &_init_f_atEnd_c0, &_call_f_atEnd_c0);
  methods += new qt_gsi::GenericMethod ("bytesAvailable", "@brief Method qint64 QIODevice::bytesAvailable()\n", true, &_init_f_bytesAvailable_c0, &_call_f_bytesAvailable_c0);
  methods += new qt_gsi::GenericMethod ("bytesToWrite", "@brief Method qint64 QIODevice::bytesToWrite()\n", true, &_init_f_bytesToWrite_c0, &_call_f_bytesToWrite_c0);
  methods += new qt_gsi::GenericMethod ("canReadLine", "@brief Method bool QIODevice::canReadLine()\n", true, &_init_f_canReadLine_c0, &_call_f_canReadLine_c0);
  methods += new qt_gsi::GenericMethod ("close", "@brief Method void QIODevice::close()\n", false, &_init_f_close_0, &_call_f_close_0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QIODevice::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("isOpen?", "@brief Method bool QIODevice::isOpen()\n", true, &_init_f_isOpen_c0, &_call_f_isOpen_c0);
  methods += new qt_gsi::GenericMethod ("isReadable?", "@brief Method bool QIODevice::isReadable()\n", true, &_init_f_isReadable_c0, &_call_f_isReadable_c0);
  methods += new qt_gsi::GenericMethod ("isSequential?", "@brief Method bool QIODevice::isSequential()\n", true, &_init_f_isSequential_c0, &_call_f_isSequential_c0);
  methods += new qt_gsi::GenericMethod ("isTextModeEnabled?|:textModeEnabled", "@brief Method bool QIODevice::isTextModeEnabled()\n", true, &_init_f_isTextModeEnabled_c0, &_call_f_isTextModeEnabled_c0);
  methods += new qt_gsi::GenericMethod ("isWritable?", "@brief Method bool QIODevice::isWritable()\n", true, &_init_f_isWritable_c0, &_call_f_isWritable_c0);
  methods += new qt_gsi::GenericMethod ("open", "@brief Method bool QIODevice::open(QFlags<QIODevice::OpenModeFlag> mode)\n", false, &_init_f_open_3242, &_call_f_open_3242);
  methods += new qt_gsi::GenericMethod ("openMode", "@brief Method QFlags<QIODevice::OpenModeFlag> QIODevice::openMode()\n", true, &_init_f_openMode_c0, &_call_f_openMode_c0);
  methods += new qt_gsi::GenericMethod ("peek", "@brief Method QByteArray QIODevice::peek(qint64 maxlen)\n", false, &_init_f_peek_986, &_call_f_peek_986);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method qint64 QIODevice::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  methods += new qt_gsi::GenericMethod ("putChar", "@brief Method bool QIODevice::putChar(char c)\n", false, &_init_f_putChar_850, &_call_f_putChar_850);
  methods += new qt_gsi::GenericMethod ("read", "@brief Method QByteArray QIODevice::read(qint64 maxlen)\n", false, &_init_f_read_986, &_call_f_read_986);
  methods += new qt_gsi::GenericMethod ("readAll", "@brief Method QByteArray QIODevice::readAll()\n", false, &_init_f_readAll_0, &_call_f_readAll_0);
  methods += new qt_gsi::GenericMethod ("readLine", "@brief Method QByteArray QIODevice::readLine(qint64 maxlen)\n", false, &_init_f_readLine_986, &_call_f_readLine_986);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method bool QIODevice::reset()\n", false, &_init_f_reset_0, &_call_f_reset_0);
  methods += new qt_gsi::GenericMethod ("seek", "@brief Method bool QIODevice::seek(qint64 pos)\n", false, &_init_f_seek_986, &_call_f_seek_986);
  methods += new qt_gsi::GenericMethod ("setTextModeEnabled|textModeEnabled=", "@brief Method void QIODevice::setTextModeEnabled(bool enabled)\n", false, &_init_f_setTextModeEnabled_864, &_call_f_setTextModeEnabled_864);
  methods += new qt_gsi::GenericMethod ("size", "@brief Method qint64 QIODevice::size()\n", true, &_init_f_size_c0, &_call_f_size_c0);
  methods += new qt_gsi::GenericMethod ("ungetChar", "@brief Method void QIODevice::ungetChar(char c)\n", false, &_init_f_ungetChar_850, &_call_f_ungetChar_850);
  methods += new qt_gsi::GenericMethod ("waitForBytesWritten", "@brief Method bool QIODevice::waitForBytesWritten(int msecs)\n", false, &_init_f_waitForBytesWritten_767, &_call_f_waitForBytesWritten_767);
  methods += new qt_gsi::GenericMethod ("waitForReadyRead", "@brief Method bool QIODevice::waitForReadyRead(int msecs)\n", false, &_init_f_waitForReadyRead_767, &_call_f_waitForReadyRead_767);
  methods += new qt_gsi::GenericMethod ("write", "@brief Method qint64 QIODevice::write(const char *data, qint64 len)\n", false, &_init_f_write_2609, &_call_f_write_2609);
  methods += new qt_gsi::GenericMethod ("write", "@brief Method qint64 QIODevice::write(const QByteArray &data)\n", false, &_init_f_write_2309, &_call_f_write_2309);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QIODevice::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QIODevice::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QIODevice::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QIODevice::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QIODevice::readyRead()\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QIODevice::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QIODevice::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QIODevice> decl_QIODevice (qtdecl_QObject (), "QtCore", "QIODevice",
  methods_QIODevice (),
  "@qt\n@brief Binding of QIODevice");


GSI_QTCORE_PUBLIC gsi::Class<QIODevice> &qtdecl_QIODevice () { return decl_QIODevice; }

}


//  Implementation of the enum wrapper class for QIODevice::OpenModeFlag
namespace qt_gsi
{

static gsi::Enum<QIODevice::OpenModeFlag> decl_QIODevice_OpenModeFlag_Enum ("QtCore", "QIODevice_OpenModeFlag",
    gsi::enum_const ("NotOpen", QIODevice::NotOpen, "@brief Enum constant QIODevice::NotOpen") +
    gsi::enum_const ("ReadOnly", QIODevice::ReadOnly, "@brief Enum constant QIODevice::ReadOnly") +
    gsi::enum_const ("WriteOnly", QIODevice::WriteOnly, "@brief Enum constant QIODevice::WriteOnly") +
    gsi::enum_const ("ReadWrite", QIODevice::ReadWrite, "@brief Enum constant QIODevice::ReadWrite") +
    gsi::enum_const ("Append", QIODevice::Append, "@brief Enum constant QIODevice::Append") +
    gsi::enum_const ("Truncate", QIODevice::Truncate, "@brief Enum constant QIODevice::Truncate") +
    gsi::enum_const ("Text", QIODevice::Text, "@brief Enum constant QIODevice::Text") +
    gsi::enum_const ("Unbuffered", QIODevice::Unbuffered, "@brief Enum constant QIODevice::Unbuffered"),
  "@qt\n@brief This class represents the QIODevice::OpenModeFlag enum");

static gsi::QFlagsClass<QIODevice::OpenModeFlag > decl_QIODevice_OpenModeFlag_Enums ("QtCore", "QIODevice_QFlags_OpenModeFlag",
  "@qt\n@brief This class represents the QFlags<QIODevice::OpenModeFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QIODevice> inject_QIODevice_OpenModeFlag_Enum_in_parent (decl_QIODevice_OpenModeFlag_Enum.defs ());
static gsi::ClassExt<QIODevice> decl_QIODevice_OpenModeFlag_Enum_as_child (decl_QIODevice_OpenModeFlag_Enum, "OpenModeFlag");
static gsi::ClassExt<QIODevice> decl_QIODevice_OpenModeFlag_Enums_as_child (decl_QIODevice_OpenModeFlag_Enums, "QFlags_OpenModeFlag");

}

