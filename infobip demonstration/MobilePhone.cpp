#include "polymorphism.h"

// MobilePhone constructor
MobilePhone::MobilePhone(const std::string& deviceName, PhoneType type, double mbInternet, int minutes)
    : UserEquipment(deviceName), phoneType(type), mbOfInternetAvailable(mbInternet), minutesAvailable(minutes) {
    std::cout << "MobilePhone constructed\n";
}

// MobilePhone copy constructor
MobilePhone::MobilePhone(const MobilePhone& other)
    : UserEquipment(other), phoneType(other.phoneType), mbOfInternetAvailable(other.mbOfInternetAvailable), minutesAvailable(other.minutesAvailable) {
    std::cout << "MobilePhone copy constructor used successfully\n";
}

// MobilePhone move constructor
MobilePhone::MobilePhone(MobilePhone&& other) noexcept
    : UserEquipment(std::move(other)), phoneType(other.phoneType), mbOfInternetAvailable(other.mbOfInternetAvailable), minutesAvailable(other.minutesAvailable) {
    other.mbOfInternetAvailable = 0;
    other.minutesAvailable = 0;
    std::cout << "MobilePhone move constructor used successfully\n";
}

// MobilePhone copy assignment operator
MobilePhone& MobilePhone::operator=(const MobilePhone& other) {
    if (this != &other) {
        UserEquipment::operator=(other);
        phoneType = other.phoneType;
        mbOfInternetAvailable = other.mbOfInternetAvailable;
        minutesAvailable = other.minutesAvailable;
        std::cout << "MobilePhone copy assigned\n";
    }
    return *this;
}

// MobilePhone move assignment operator
MobilePhone& MobilePhone::operator=(MobilePhone&& other) noexcept {
    if (this != &other) {
        UserEquipment::operator=(std::move(other));
        phoneType = other.phoneType;
        mbOfInternetAvailable = other.mbOfInternetAvailable;
        minutesAvailable = other.minutesAvailable;
        other.mbOfInternetAvailable = 0;
        other.minutesAvailable = 0;
        std::cout << "MobilePhone move assigned\n";
    }
    return *this;
}

// MobilePhone destructor
MobilePhone::~MobilePhone() {
    std::cout << "MobilePhone destructed\n";
}

// MobilePhone displayInfo
void MobilePhone::displayInfo() const {
    std::string typeStr = (phoneType == PhoneType::iPhone) ? "iPhone" : "Android";
    std::cout << "MobilePhone: " << getName() << "\n"
              << "Type: " << typeStr << "\n"
              << "Internet Available: " << mbOfInternetAvailable << " MB\n"
              << "Minutes Available: " << minutesAvailable << "\n";
}

