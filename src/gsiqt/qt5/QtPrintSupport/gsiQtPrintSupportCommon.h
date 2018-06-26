/**
 *  Common header for Qt binding definition library
 *
 *  DO NOT EDIT THIS FILE. 
 *  This file has been created automatically
 */

#include "tlDefs.h"

#define FORCE_LINK_GSI_QTPRINTSUPPORT void force_link_gsiQtPrintSupport_f () { extern int force_link_gsiQtPrintSupport; force_link_gsiQtPrintSupport = 0; }

#if !defined(HDR_gsiQtPrintSupportCommon_h)
# define HDR_gsiQtPrintSupportCommon_h

# ifdef MAKE_GSI_QTPRINTSUPPORT_LIBRARY
#   define GSI_QTPRINTSUPPORT_PUBLIC           DEF_INSIDE_PUBLIC
#   define GSI_QTPRINTSUPPORT_PUBLIC_TEMPLATE  DEF_INSIDE_PUBLIC_TEMPLATE
#   define GSI_QTPRINTSUPPORT_LOCAL            DEF_INSIDE_LOCAL
# else
#   define GSI_QTPRINTSUPPORT_PUBLIC           DEF_OUTSIDE_PUBLIC
#   define GSI_QTPRINTSUPPORT_PUBLIC_TEMPLATE  DEF_OUTSIDE_PUBLIC_TEMPLATE
#   define GSI_QTPRINTSUPPORT_LOCAL            DEF_OUTSIDE_LOCAL
# endif

#endif
