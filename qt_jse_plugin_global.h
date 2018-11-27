#ifndef QT_JSE_PLUGIN_GLOBAL_H
#define QT_JSE_PLUGIN_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QT_JSE_PLUGIN_LIBRARY)
#  define QT_JSE_PLUGINSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QT_JSE_PLUGINSHARED_EXPORT Q_DECL_IMPORT
#endif

#include "generic_interface.h"

extern "C" QT_JSE_PLUGINSHARED_EXPORT Generic_Interface * CreatePlugin();

#endif // QT_JSE_PLUGIN_GLOBAL_H
