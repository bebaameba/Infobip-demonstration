#include "polymorphism.h"

// UserEquipment constructor
UserEquipment::UserEquipment(const std::string& deviceName) : name(deviceName) {
    std::cout << "UserEquipment constructed\n";
}

// UserEquipment copy constructor
UserEquipment::UserEquipment(const UserEquipment& other) : name(other.name) {
    std::cout << "UserEquipment copy constructed\n";
}

// UserEquipment move constructor
UserEquipment::UserEquipment(UserEquipment&& other) noexcept : name(std::move(other.name)) {
    std::cout << "UserEquipment move constructed\n";
}

// UserEquipment copy assignment operator
UserEquipment& UserEquipment::operator=(const UserEquipment& other) {
    if (this != &other) {
        name = other.name;
        std::cout << "UserEquipment copy assigned\n";
    }
    return *this;
}

// UserEquipment move assignment operator
UserEquipment& UserEquipment::operator=(UserEquipment&& other) noexcept {
    if (this != &other) {
        name = std::move(other.name);
        std::cout << "UserEquipment move assigned\n";
    }
    return *this;
}

// UserEquipment destructor
UserEquipment::~UserEquipment() {
    std::cout << "UserEquipment destructed\n";
}

// Protected getter for name
std::string UserEquipment::getName() const {
    return name;
}


