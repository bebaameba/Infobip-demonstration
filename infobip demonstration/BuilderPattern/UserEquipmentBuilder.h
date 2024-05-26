#ifndef USEREQUIPMENTBUILDER_H
#define USEREQUIPMENTBUILDER_H

#include "../polymorphism.h"

class UserEquipmentBuilder {
public:
    virtual void buildName(const std::string& name) = 0;
    virtual void buildPhoneType(PhoneType type) = 0;
    virtual void buildInternet(double mbInternet) = 0;
    virtual void buildMinutes(int minutes) = 0;
    virtual UserEquipment* getResult() const = 0;
    virtual ~UserEquipmentBuilder() {}
};

#endif // USEREQUIPMENTBUILDER_H

