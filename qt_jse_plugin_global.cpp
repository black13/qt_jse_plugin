#include "qt_jse_plugin_global.h"
#include "generic_interface.h"
#include "plugin.h"

extern "C" QT_JSE_PLUGINSHARED_EXPORT Generic_Interface * CreatePlugin()
{
  return new Plugin ();
}
