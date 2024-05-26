#ifndef CONCRETEUSEREQUIPMENTFACTORY_H
#define CONCRETEUSEREQUIPMENTFACTORY_H

#include "UserEquipmentFactory.h"

class ConcreteUserEquipmentFactory : public UserEquipmentFactory {
public:
    UserEquipment* createMobilePhone(const std::string& deviceName, PhoneType type, double mbInternet, int minutes) const override {
        UserEquipment* phone = new MobilePhone(deviceName, type, mbInternet, minutes);
        std::cout << "Abstract factory pattern was successful for MobilePhone\n";
        return phone;
    }

    UserEquipment* createRouter(const std::string& deviceName, double mbUsed) const override {
        UserEquipment* router = new Router(deviceName, mbUsed);
        std::cout << "Abstract factory pattern was successful for Router\n";
        return router;
    }
};

#endif // CONCRETEUSEREQUIPMENTFACTORY_H

