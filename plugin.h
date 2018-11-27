#ifndef PLUGIN_H
#define PLUGIN_H

#include "generic_interface.h"

class Plugin : public Generic_Interface
{
public:
    Plugin();
    void Abstract ();
};

#endif // PLUGIN_H
