
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
*  @file gsiDeclQUdpSocket.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QUdpSocket>
#include <QAuthenticator>
#include <QEvent>
#include <QHostAddress>
#include <QMetaMethod>
#include <QNetworkInterface>
#include <QNetworkProxy>
#include <QObject>
#include <QThread>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QUdpSocket

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QUdpSocket::staticMetaObject);
}


//  Constructor QUdpSocket::QUdpSocket(QObject *parent)


static void _init_ctor_QUdpSocket_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "0");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QUdpSocket> ();
}

static void _call_ctor_QUdpSocket_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? args.read<QObject * > (heap) : (QObject *)(0);
  ret.write<QUdpSocket *> (new QUdpSocket (arg1));
}


// bool QUdpSocket::hasPendingDatagrams()


static void _init_f_hasPendingDatagrams_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasPendingDatagrams_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QUdpSocket *)cls)->hasPendingDatagrams ());
}


// bool QUdpSocket::joinMulticastGroup(const QHostAddress &groupAddress)


static void _init_f_joinMulticastGroup_2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("groupAddress");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_joinMulticastGroup_2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<bool > ((bool)((QUdpSocket *)cls)->joinMulticastGroup (arg1));
}


// bool QUdpSocket::joinMulticastGroup(const QHostAddress &groupAddress, const QNetworkInterface &iface)


static void _init_f_joinMulticastGroup_5463 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("groupAddress");
  decl->add_arg<const QHostAddress & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iface");
  decl->add_arg<const QNetworkInterface & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_joinMulticastGroup_5463 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  const QNetworkInterface &arg2 = args.read<const QNetworkInterface & > (heap);
  ret.write<bool > ((bool)((QUdpSocket *)cls)->joinMulticastGroup (arg1, arg2));
}


// bool QUdpSocket::leaveMulticastGroup(const QHostAddress &groupAddress)


static void _init_f_leaveMulticastGroup_2518 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("groupAddress");
  decl->add_arg<const QHostAddress & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_leaveMulticastGroup_2518 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  ret.write<bool > ((bool)((QUdpSocket *)cls)->leaveMulticastGroup (arg1));
}


// bool QUdpSocket::leaveMulticastGroup(const QHostAddress &groupAddress, const QNetworkInterface &iface)


static void _init_f_leaveMulticastGroup_5463 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("groupAddress");
  decl->add_arg<const QHostAddress & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("iface");
  decl->add_arg<const QNetworkInterface & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_leaveMulticastGroup_5463 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QHostAddress &arg1 = args.read<const QHostAddress & > (heap);
  const QNetworkInterface &arg2 = args.read<const QNetworkInterface & > (heap);
  ret.write<bool > ((bool)((QUdpSocket *)cls)->leaveMulticastGroup (arg1, arg2));
}


// QNetworkInterface QUdpSocket::multicastInterface()


static void _init_f_multicastInterface_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QNetworkInterface > ();
}

static void _call_f_multicastInterface_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QNetworkInterface > ((QNetworkInterface)((QUdpSocket *)cls)->multicastInterface ());
}


// qint64 QUdpSocket::pendingDatagramSize()


static void _init_f_pendingDatagramSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qint64 > ();
}

static void _call_f_pendingDatagramSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qint64 > ((qint64)((QUdpSocket *)cls)->pendingDatagramSize ());
}


// void QUdpSocket::setMulticastInterface(const QNetworkInterface &iface)


static void _init_f_setMulticastInterface_3053 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<const QNetworkInterface & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMulticastInterface_3053 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QNetworkInterface &arg1 = args.read<const QNetworkInterface & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QUdpSocket *)cls)->setMulticastInterface (arg1);
}


// qint64 QUdpSocket::writeDatagram(const char *data, qint64 len, const QHostAddress &host, quint16 port)


static void _init_f_writeDatagram_6011 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("data");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len");
  decl->add_arg<qint64 > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("host");
  decl->add_arg<const QHostAddress & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("port");
  decl->add_arg<quint16 > (argspec_3);
  decl->set_return<qint64 > ();
}

static void _call_f_writeDatagram_6011 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = args.read<const char * > (heap);
  qint64 arg2 = args.read<qint64 > (heap);
  const QHostAddress &arg3 = args.read<const QHostAddress & > (heap);
  quint16 arg4 = args.read<quint16 > (heap);
  ret.write<qint64 > ((qint64)((QUdpSocket *)cls)->writeDatagram (arg1, arg2, arg3, arg4));
}


// qint64 QUdpSocket::writeDatagram(const QByteArray &datagram, const QHostAddress &host, quint16 port)


static void _init_f_writeDatagram_5711 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("datagram");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("host");
  decl->add_arg<const QHostAddress & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("port");
  decl->add_arg<quint16 > (argspec_2);
  decl->set_return<qint64 > ();
}

static void _call_f_writeDatagram_5711 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = args.read<const QByteArray & > (heap);
  const QHostAddress &arg2 = args.read<const QHostAddress & > (heap);
  quint16 arg3 = args.read<quint16 > (heap);
  ret.write<qint64 > ((qint64)((QUdpSocket *)cls)->writeDatagram (arg1, arg2, arg3));
}


// static QString QUdpSocket::tr(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QUdpSocket::tr (arg1, arg2, arg3));
}


// static QString QUdpSocket::trUtf8(const char *s, const char *c, int n)


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
  ret.write<QString > ((QString)QUdpSocket::trUtf8 (arg1, arg2, arg3));
}



namespace gsi
{

static gsi::Methods methods_QUdpSocket () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QUdpSocket::QUdpSocket(QObject *parent)\nThis method creates an object of class QUdpSocket.", &_init_ctor_QUdpSocket_1302, &_call_ctor_QUdpSocket_1302);
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("hasPendingDatagrams", "@brief Method bool QUdpSocket::hasPendingDatagrams()\n", true, &_init_f_hasPendingDatagrams_c0, &_call_f_hasPendingDatagrams_c0);
  methods += new qt_gsi::GenericMethod ("joinMulticastGroup", "@brief Method bool QUdpSocket::joinMulticastGroup(const QHostAddress &groupAddress)\n", false, &_init_f_joinMulticastGroup_2518, &_call_f_joinMulticastGroup_2518);
  methods += new qt_gsi::GenericMethod ("joinMulticastGroup", "@brief Method bool QUdpSocket::joinMulticastGroup(const QHostAddress &groupAddress, const QNetworkInterface &iface)\n", false, &_init_f_joinMulticastGroup_5463, &_call_f_joinMulticastGroup_5463);
  methods += new qt_gsi::GenericMethod ("leaveMulticastGroup", "@brief Method bool QUdpSocket::leaveMulticastGroup(const QHostAddress &groupAddress)\n", false, &_init_f_leaveMulticastGroup_2518, &_call_f_leaveMulticastGroup_2518);
  methods += new qt_gsi::GenericMethod ("leaveMulticastGroup", "@brief Method bool QUdpSocket::leaveMulticastGroup(const QHostAddress &groupAddress, const QNetworkInterface &iface)\n", false, &_init_f_leaveMulticastGroup_5463, &_call_f_leaveMulticastGroup_5463);
  methods += new qt_gsi::GenericMethod (":multicastInterface", "@brief Method QNetworkInterface QUdpSocket::multicastInterface()\n", true, &_init_f_multicastInterface_c0, &_call_f_multicastInterface_c0);
  methods += new qt_gsi::GenericMethod ("pendingDatagramSize", "@brief Method qint64 QUdpSocket::pendingDatagramSize()\n", true, &_init_f_pendingDatagramSize_c0, &_call_f_pendingDatagramSize_c0);
  methods += new qt_gsi::GenericMethod ("setMulticastInterface|multicastInterface=", "@brief Method void QUdpSocket::setMulticastInterface(const QNetworkInterface &iface)\n", false, &_init_f_setMulticastInterface_3053, &_call_f_setMulticastInterface_3053);
  methods += new qt_gsi::GenericMethod ("writeDatagram", "@brief Method qint64 QUdpSocket::writeDatagram(const char *data, qint64 len, const QHostAddress &host, quint16 port)\n", false, &_init_f_writeDatagram_6011, &_call_f_writeDatagram_6011);
  methods += new qt_gsi::GenericMethod ("writeDatagram", "@brief Method qint64 QUdpSocket::writeDatagram(const QByteArray &datagram, const QHostAddress &host, quint16 port)\n", false, &_init_f_writeDatagram_5711, &_call_f_writeDatagram_5711);
  methods += gsi::qt_signal ("aboutToClose()", "aboutToClose", "@brief Signal declaration for QUdpSocket::aboutToClose()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<qint64 > ("bytesWritten(qint64)", "bytesWritten", gsi::arg("bytes"), "@brief Signal declaration for QUdpSocket::bytesWritten(qint64 bytes)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("connected()", "connected", "@brief Signal declaration for QUdpSocket::connected()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QUdpSocket::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("disconnected()", "disconnected", "@brief Signal declaration for QUdpSocket::disconnected()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QAbstractSocket::SocketError>::target_type & > ("error(QAbstractSocket::SocketError)", "error_sig", gsi::arg("arg1"), "@brief Signal declaration for QUdpSocket::error(QAbstractSocket::SocketError)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("hostFound()", "hostFound", "@brief Signal declaration for QUdpSocket::hostFound()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QNetworkProxy &, QAuthenticator * > ("proxyAuthenticationRequired(const QNetworkProxy &, QAuthenticator *)", "proxyAuthenticationRequired", gsi::arg("proxy"), gsi::arg("authenticator"), "@brief Signal declaration for QUdpSocket::proxyAuthenticationRequired(const QNetworkProxy &proxy, QAuthenticator *authenticator)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readChannelFinished()", "readChannelFinished", "@brief Signal declaration for QUdpSocket::readChannelFinished()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal ("readyRead()", "readyRead", "@brief Signal declaration for QUdpSocket::readyRead()\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const qt_gsi::Converter<QAbstractSocket::SocketState>::target_type & > ("stateChanged(QAbstractSocket::SocketState)", "stateChanged", gsi::arg("arg1"), "@brief Signal declaration for QUdpSocket::stateChanged(QAbstractSocket::SocketState)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QUdpSocket::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QUdpSocket::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QAbstractSocket> &qtdecl_QAbstractSocket ();

qt_gsi::QtNativeClass<QUdpSocket> decl_QUdpSocket (qtdecl_QAbstractSocket (), "QtMultimedia", "QUdpSocket",
  methods_QUdpSocket (),
  "@qt\n@brief Binding of QUdpSocket");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QUdpSocket> &qtdecl_QUdpSocket () { return decl_QUdpSocket; }

}

