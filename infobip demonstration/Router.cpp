#include "polymorphism.h"

// Router constructor
Router::Router(const std::string& deviceName, double mbUsed)
    : UserEquipment(deviceName), mbOfInternetUsed(mbUsed) {
    std::cout << "Router constructed\n";
}

// Router copy constructor
Router::Router(const Router& other)
    : UserEquipment(other), mbOfInternetUsed(other.mbOfInternetUsed) {
    std::cout << "Router copy constructed\n";
}

// Router move constructor
Router::Router(Router&& other) noexcept
    : UserEquipment(std::move(other)), mbOfInternetUsed(other.mbOfInternetUsed) {
    other.mbOfInternetUsed = 0;
    std::cout << "Router move constructed\n";
}

// Router copy assignment operator
Router& Router::operator=(const Router& other) {
    if (this != &other) {
        UserEquipment::operator=(other);
        mbOfInternetUsed = other.mbOfInternetUsed;
        std::cout << "Router copy assigned\n";
    }
    return *this;
}

// Router move assignment operator
Router& Router::operator=(Router&& other) noexcept {
    if (this != &other) {
        UserEquipment::operator=(std::move(other));
        mbOfInternetUsed = other.mbOfInternetUsed;
        other.mbOfInternetUsed = 0;
        std::cout << "Router move assigned\n";
    }
    return *this;
}

// Router destructor
Router::~Router() {
    std::cout << "Router destructed\n";
}

// Router displayInfo
void Router::displayInfo() const {
    std::cout << "Router: " << getName() << "\n"
              << "Internet Used: " << mbOfInternetUsed << " MB\n";
}

