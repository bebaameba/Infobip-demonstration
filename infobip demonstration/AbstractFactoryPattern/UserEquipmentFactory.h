#ifndef USEREQUIPMENTFACTORY_H
#define USEREQUIPMENTFACTORY_H

#include "../polymorphism.h"

class UserEquipmentFactory {
public:
    virtual UserEquipment* createMobilePhone(const std::string& deviceName, PhoneType type, double mbInternet, int minutes) const = 0;
    virtual UserEquipment* createRouter(const std::string& deviceName, double mbUsed) const = 0;
    virtual ~UserEquipmentFactory() {}
};

#endif // USEREQUIPMENTFACTORY_H

