
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
*  @file gsiDeclQSslError.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSslError>
#include <QSslCertificate>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include "gsiDeclQtNetworkTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSslError

//  Constructor QSslError::QSslError()


static void _init_ctor_QSslError_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSslError> ();
}

static void _call_ctor_QSslError_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslError *> (new QSslError ());
}


//  Constructor QSslError::QSslError(QSslError::SslError error)


static void _init_ctor_QSslError_2289 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("error");
  decl->add_arg<const qt_gsi::Converter<QSslError::SslError>::target_type & > (argspec_0);
  decl->set_return_new<QSslError> ();
}

static void _call_ctor_QSslError_2289 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSslError::SslError>::target_type & arg1 = args.read<const qt_gsi::Converter<QSslError::SslError>::target_type & > (heap);
  ret.write<QSslError *> (new QSslError (qt_gsi::QtToCppAdaptor<QSslError::SslError>(arg1).cref()));
}


//  Constructor QSslError::QSslError(QSslError::SslError error, const QSslCertificate &certificate)


static void _init_ctor_QSslError_5004 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("error");
  decl->add_arg<const qt_gsi::Converter<QSslError::SslError>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("certificate");
  decl->add_arg<const QSslCertificate & > (argspec_1);
  decl->set_return_new<QSslError> ();
}

static void _call_ctor_QSslError_5004 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QSslError::SslError>::target_type & arg1 = args.read<const qt_gsi::Converter<QSslError::SslError>::target_type & > (heap);
  const QSslCertificate &arg2 = args.read<const QSslCertificate & > (heap);
  ret.write<QSslError *> (new QSslError (qt_gsi::QtToCppAdaptor<QSslError::SslError>(arg1).cref(), arg2));
}


//  Constructor QSslError::QSslError(const QSslError &other)


static void _init_ctor_QSslError_2222 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslError & > (argspec_0);
  decl->set_return_new<QSslError> ();
}

static void _call_ctor_QSslError_2222 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslError &arg1 = args.read<const QSslError & > (heap);
  ret.write<QSslError *> (new QSslError (arg1));
}


// QSslCertificate QSslError::certificate()


static void _init_f_certificate_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSslCertificate > ();
}

static void _call_f_certificate_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSslCertificate > ((QSslCertificate)((QSslError *)cls)->certificate ());
}


// QSslError::SslError QSslError::error()


static void _init_f_error_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QSslError::SslError>::target_type > ();
}

static void _call_f_error_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QSslError::SslError>::target_type > ((qt_gsi::Converter<QSslError::SslError>::target_type)qt_gsi::CppToQtAdaptor<QSslError::SslError>(((QSslError *)cls)->error ()));
}


// QString QSslError::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QSslError *)cls)->errorString ());
}


// bool QSslError::operator!=(const QSslError &other)


static void _init_f_operator_excl__eq__c2222 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslError & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2222 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslError &arg1 = args.read<const QSslError & > (heap);
  ret.write<bool > ((bool)((QSslError *)cls)->operator!= (arg1));
}


// QSslError &QSslError::operator=(const QSslError &other)


static void _init_f_operator_eq__2222 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslError & > (argspec_0);
  decl->set_return<QSslError & > ();
}

static void _call_f_operator_eq__2222 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslError &arg1 = args.read<const QSslError & > (heap);
  ret.write<QSslError & > ((QSslError &)((QSslError *)cls)->operator= (arg1));
}


// bool QSslError::operator==(const QSslError &other)


static void _init_f_operator_eq__eq__c2222 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QSslError & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2222 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSslError &arg1 = args.read<const QSslError & > (heap);
  ret.write<bool > ((bool)((QSslError *)cls)->operator== (arg1));
}


// void QSslError::swap(QSslError &other)


static void _init_f_swap_1527 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QSslError & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1527 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QSslError &arg1 = args.read<QSslError & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSslError *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QSslError () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslError::QSslError()\nThis method creates an object of class QSslError.", &_init_ctor_QSslError_0, &_call_ctor_QSslError_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslError::QSslError(QSslError::SslError error)\nThis method creates an object of class QSslError.", &_init_ctor_QSslError_2289, &_call_ctor_QSslError_2289);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslError::QSslError(QSslError::SslError error, const QSslCertificate &certificate)\nThis method creates an object of class QSslError.", &_init_ctor_QSslError_5004, &_call_ctor_QSslError_5004);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSslError::QSslError(const QSslError &other)\nThis method creates an object of class QSslError.", &_init_ctor_QSslError_2222, &_call_ctor_QSslError_2222);
  methods += new qt_gsi::GenericMethod ("certificate", "@brief Method QSslCertificate QSslError::certificate()\n", true, &_init_f_certificate_c0, &_call_f_certificate_c0);
  methods += new qt_gsi::GenericMethod ("error", "@brief Method QSslError::SslError QSslError::error()\n", true, &_init_f_error_c0, &_call_f_error_c0);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QSslError::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QSslError::operator!=(const QSslError &other)\n", true, &_init_f_operator_excl__eq__c2222, &_call_f_operator_excl__eq__c2222);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QSslError &QSslError::operator=(const QSslError &other)\n", false, &_init_f_operator_eq__2222, &_call_f_operator_eq__2222);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QSslError::operator==(const QSslError &other)\n", true, &_init_f_operator_eq__eq__c2222, &_call_f_operator_eq__eq__c2222);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QSslError::swap(QSslError &other)\n", false, &_init_f_swap_1527, &_call_f_swap_1527);
  return methods;
}

gsi::Class<QSslError> decl_QSslError ("QtNetwork", "QSslError",
  methods_QSslError (),
  "@qt\n@brief Binding of QSslError");


GSI_QTNETWORK_PUBLIC gsi::Class<QSslError> &qtdecl_QSslError () { return decl_QSslError; }

}


//  Implementation of the enum wrapper class for QSslError::SslError
namespace qt_gsi
{

static gsi::Enum<QSslError::SslError> decl_QSslError_SslError_Enum ("QtNetwork", "QSslError_SslError",
    gsi::enum_const ("NoError", QSslError::NoError, "@brief Enum constant QSslError::NoError") +
    gsi::enum_const ("UnableToGetIssuerCertificate", QSslError::UnableToGetIssuerCertificate, "@brief Enum constant QSslError::UnableToGetIssuerCertificate") +
    gsi::enum_const ("UnableToDecryptCertificateSignature", QSslError::UnableToDecryptCertificateSignature, "@brief Enum constant QSslError::UnableToDecryptCertificateSignature") +
    gsi::enum_const ("UnableToDecodeIssuerPublicKey", QSslError::UnableToDecodeIssuerPublicKey, "@brief Enum constant QSslError::UnableToDecodeIssuerPublicKey") +
    gsi::enum_const ("CertificateSignatureFailed", QSslError::CertificateSignatureFailed, "@brief Enum constant QSslError::CertificateSignatureFailed") +
    gsi::enum_const ("CertificateNotYetValid", QSslError::CertificateNotYetValid, "@brief Enum constant QSslError::CertificateNotYetValid") +
    gsi::enum_const ("CertificateExpired", QSslError::CertificateExpired, "@brief Enum constant QSslError::CertificateExpired") +
    gsi::enum_const ("InvalidNotBeforeField", QSslError::InvalidNotBeforeField, "@brief Enum constant QSslError::InvalidNotBeforeField") +
    gsi::enum_const ("InvalidNotAfterField", QSslError::InvalidNotAfterField, "@brief Enum constant QSslError::InvalidNotAfterField") +
    gsi::enum_const ("SelfSignedCertificate", QSslError::SelfSignedCertificate, "@brief Enum constant QSslError::SelfSignedCertificate") +
    gsi::enum_const ("SelfSignedCertificateInChain", QSslError::SelfSignedCertificateInChain, "@brief Enum constant QSslError::SelfSignedCertificateInChain") +
    gsi::enum_const ("UnableToGetLocalIssuerCertificate", QSslError::UnableToGetLocalIssuerCertificate, "@brief Enum constant QSslError::UnableToGetLocalIssuerCertificate") +
    gsi::enum_const ("UnableToVerifyFirstCertificate", QSslError::UnableToVerifyFirstCertificate, "@brief Enum constant QSslError::UnableToVerifyFirstCertificate") +
    gsi::enum_const ("CertificateRevoked", QSslError::CertificateRevoked, "@brief Enum constant QSslError::CertificateRevoked") +
    gsi::enum_const ("InvalidCaCertificate", QSslError::InvalidCaCertificate, "@brief Enum constant QSslError::InvalidCaCertificate") +
    gsi::enum_const ("PathLengthExceeded", QSslError::PathLengthExceeded, "@brief Enum constant QSslError::PathLengthExceeded") +
    gsi::enum_const ("InvalidPurpose", QSslError::InvalidPurpose, "@brief Enum constant QSslError::InvalidPurpose") +
    gsi::enum_const ("CertificateUntrusted", QSslError::CertificateUntrusted, "@brief Enum constant QSslError::CertificateUntrusted") +
    gsi::enum_const ("CertificateRejected", QSslError::CertificateRejected, "@brief Enum constant QSslError::CertificateRejected") +
    gsi::enum_const ("SubjectIssuerMismatch", QSslError::SubjectIssuerMismatch, "@brief Enum constant QSslError::SubjectIssuerMismatch") +
    gsi::enum_const ("AuthorityIssuerSerialNumberMismatch", QSslError::AuthorityIssuerSerialNumberMismatch, "@brief Enum constant QSslError::AuthorityIssuerSerialNumberMismatch") +
    gsi::enum_const ("NoPeerCertificate", QSslError::NoPeerCertificate, "@brief Enum constant QSslError::NoPeerCertificate") +
    gsi::enum_const ("HostNameMismatch", QSslError::HostNameMismatch, "@brief Enum constant QSslError::HostNameMismatch") +
    gsi::enum_const ("NoSslSupport", QSslError::NoSslSupport, "@brief Enum constant QSslError::NoSslSupport") +
    gsi::enum_const ("CertificateBlacklisted", QSslError::CertificateBlacklisted, "@brief Enum constant QSslError::CertificateBlacklisted") +
    gsi::enum_const ("UnspecifiedError", QSslError::UnspecifiedError, "@brief Enum constant QSslError::UnspecifiedError"),
  "@qt\n@brief This class represents the QSslError::SslError enum");

static gsi::QFlagsClass<QSslError::SslError > decl_QSslError_SslError_Enums ("QtNetwork", "QSslError_QFlags_SslError",
  "@qt\n@brief This class represents the QFlags<QSslError::SslError> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QSslError> inject_QSslError_SslError_Enum_in_parent (decl_QSslError_SslError_Enum.defs ());
static gsi::ClassExt<QSslError> decl_QSslError_SslError_Enum_as_child (decl_QSslError_SslError_Enum, "SslError");
static gsi::ClassExt<QSslError> decl_QSslError_SslError_Enums_as_child (decl_QSslError_SslError_Enums, "QFlags_SslError");

}

