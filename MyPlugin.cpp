#include "MyPlugin.hpp"

namespace sp {
    class MyPlugin : public IPlugin {
        public:
            std::string name() const;
            std::string description() const;
    };
}

std::string sp::MyPlugin::name() const {
    return "MyPlugin";
}

std::string sp::MyPlugin::description() const {
    return "Hoera! Hij doet het!";
}

sp::IPlugin* create_instance() {
    return new sp::MyPlugin;
}
