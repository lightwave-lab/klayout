
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
*  @file generated/gsiDeclQtXmlTypeTraits.h
*  @brief Type traits for the Qt binding classes
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#ifndef _HDR_gsiDeclQtXmlTypeTraits
#define _HDR_gsiDeclQtXmlTypeTraits

#include "gsiTypes.h"


class QDataStream;
namespace tl {
template <> struct type_traits<QDataStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QDataStream_Adaptor;
namespace tl {
template <> struct type_traits<QDataStream_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QDomAttr;
namespace tl {
template <> struct type_traits<QDomAttr> : public type_traits<void> {
};
}

class QDomCDATASection;
namespace tl {
template <> struct type_traits<QDomCDATASection> : public type_traits<void> {
};
}

class QDomCharacterData;
namespace tl {
template <> struct type_traits<QDomCharacterData> : public type_traits<void> {
};
}

class QDomComment;
namespace tl {
template <> struct type_traits<QDomComment> : public type_traits<void> {
};
}

class QDomDocument;
namespace tl {
template <> struct type_traits<QDomDocument> : public type_traits<void> {
};
}

class QDomDocumentFragment;
namespace tl {
template <> struct type_traits<QDomDocumentFragment> : public type_traits<void> {
};
}

class QDomDocumentType;
namespace tl {
template <> struct type_traits<QDomDocumentType> : public type_traits<void> {
};
}

class QDomElement;
namespace tl {
template <> struct type_traits<QDomElement> : public type_traits<void> {
};
}

class QDomEntity;
namespace tl {
template <> struct type_traits<QDomEntity> : public type_traits<void> {
};
}

class QDomEntityReference;
namespace tl {
template <> struct type_traits<QDomEntityReference> : public type_traits<void> {
};
}

class QDomImplementation;
namespace tl {
template <> struct type_traits<QDomImplementation> : public type_traits<void> {
};
}

class QDomNamedNodeMap;
namespace tl {
template <> struct type_traits<QDomNamedNodeMap> : public type_traits<void> {
};
}

class QDomNode;
namespace tl {
template <> struct type_traits<QDomNode> : public type_traits<void> {
};
}

class QDomNodeList;
namespace tl {
template <> struct type_traits<QDomNodeList> : public type_traits<void> {
};
}

class QDomNotation;
namespace tl {
template <> struct type_traits<QDomNotation> : public type_traits<void> {
};
}

class QDomProcessingInstruction;
namespace tl {
template <> struct type_traits<QDomProcessingInstruction> : public type_traits<void> {
};
}

class QDomText;
namespace tl {
template <> struct type_traits<QDomText> : public type_traits<void> {
};
}

class QFile;
namespace tl {
template <> struct type_traits<QFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QIODevice;
namespace tl {
template <> struct type_traits<QIODevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QLocale;
namespace tl {
template <> struct type_traits<QLocale> : public type_traits<void> {
};
}

struct QMetaObject;
namespace tl {
template <> struct type_traits<QMetaObject> : public type_traits<void> {
};
}

class QObject;
namespace tl {
template <> struct type_traits<QObject> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QObject_Adaptor;
namespace tl {
template <> struct type_traits<QObject_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QRegExp;
namespace tl {
template <> struct type_traits<QRegExp> : public type_traits<void> {
};
}

class QStringMatcher;
namespace tl {
template <> struct type_traits<QStringMatcher> : public type_traits<void> {
};
}

class QSysInfo;
namespace tl {
template <> struct type_traits<QSysInfo> : public type_traits<void> {
};
}

class QSystemLocale;
namespace tl {
template <> struct type_traits<QSystemLocale> : public type_traits<void> {
};
}

class QSystemLocale_Adaptor;
namespace tl {
template <> struct type_traits<QSystemLocale_Adaptor> : public type_traits<void> {
};
}

class QTextStream;
namespace tl {
template <> struct type_traits<QTextStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QTextStream_Adaptor;
namespace tl {
template <> struct type_traits<QTextStream_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlAttributes;
namespace tl {
template <> struct type_traits<QXmlAttributes> : public type_traits<void> {
};
}

class QXmlAttributes_Adaptor;
namespace tl {
template <> struct type_traits<QXmlAttributes_Adaptor> : public type_traits<void> {
};
}

class QXmlContentHandler;
namespace tl {
template <> struct type_traits<QXmlContentHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlContentHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlContentHandler_Adaptor> : public type_traits<void> {
};
}

class QXmlDTDHandler;
namespace tl {
template <> struct type_traits<QXmlDTDHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlDTDHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlDTDHandler_Adaptor> : public type_traits<void> {
};
}

class QXmlDeclHandler;
namespace tl {
template <> struct type_traits<QXmlDeclHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlDeclHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlDeclHandler_Adaptor> : public type_traits<void> {
};
}

class QXmlDefaultHandler;
namespace tl {
template <> struct type_traits<QXmlDefaultHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlDefaultHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlDefaultHandler_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlEntityResolver;
namespace tl {
template <> struct type_traits<QXmlEntityResolver> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlErrorHandler;
namespace tl {
template <> struct type_traits<QXmlErrorHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlErrorHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlErrorHandler_Adaptor> : public type_traits<void> {
};
}

class QXmlInputSource;
namespace tl {
template <> struct type_traits<QXmlInputSource> : public type_traits<void> {
};
}

class QXmlInputSource_Adaptor;
namespace tl {
template <> struct type_traits<QXmlInputSource_Adaptor> : public type_traits<void> {
};
}

class QXmlLexicalHandler;
namespace tl {
template <> struct type_traits<QXmlLexicalHandler> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlLexicalHandler_Adaptor;
namespace tl {
template <> struct type_traits<QXmlLexicalHandler_Adaptor> : public type_traits<void> {
};
}

class QXmlLocator;
namespace tl {
template <> struct type_traits<QXmlLocator> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlLocator_Adaptor;
namespace tl {
template <> struct type_traits<QXmlLocator_Adaptor> : public type_traits<void> {
};
}

class QXmlNamespaceSupport;
namespace tl {
template <> struct type_traits<QXmlNamespaceSupport> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlParseException;
namespace tl {
template <> struct type_traits<QXmlParseException> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlReader;
namespace tl {
template <> struct type_traits<QXmlReader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QXmlReader_Adaptor;
namespace tl {
template <> struct type_traits<QXmlReader_Adaptor> : public type_traits<void> {
};
}

class QXmlSimpleReader;
namespace tl {
template <> struct type_traits<QXmlSimpleReader> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QXmlSimpleReader_Adaptor;
namespace tl {
template <> struct type_traits<QXmlSimpleReader_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class Qt_Namespace;
namespace tl {
template <> struct type_traits<Qt_Namespace> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}


#endif
