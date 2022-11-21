#ifndef MYPLUGIN_H_
#define MYPLUGIN_H_

#include "IPlugin.hpp"

extern "C" {
    __declspec(dllexport) sp::IPlugin* create_instance();
}

#endif // MYPLUGIN_H_
