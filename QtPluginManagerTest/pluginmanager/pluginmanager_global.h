#ifndef QTPLUGINMANAGER_GLOBAL_H
#define QTPLUGINMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTPLUGINMANAGER_LIBRARY)
#  define QTPLUGINMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTPLUGINMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTPLUGINMANAGER_GLOBAL_H
