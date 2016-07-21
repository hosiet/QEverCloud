#ifndef QEVERCLOUD_EXPORT_H
#define QEVERCLOUD_EXPORT_H

#include <QtCore/QtGlobal>

#if defined(QEVERCLOUD_SHARED_LIBRARY)
#  if defined(QEVERCLOUD_BUILDING_SHARED_LIBRARY)
#    define QEVERCLOUD_EXPORT Q_DECL_EXPORT
#  else
#    define QEVERCLOUD_EXPORT Q_DECL_IMPORT
#  endif
#else
#  define QEVERCLOUD_EXPORT
#endif

#endif // QEVERCLOUD_EXPORT_H