#ifndef MOBILEPHONEBUILDER_H
#define MOBILEPHONEBUILDER_H

#include "UserEquipmentBuilder.h"

class MobilePhoneBuilder : public UserEquipmentBuilder {
private:
    std::string name;
    PhoneType phoneType;
    double mbInternet;
    int minutes;

public:
    void buildName(const std::string& name) override {
        this->name = name;
    }

    void buildPhoneType(PhoneType type) override {
        phoneType = type;
    }

    void buildInternet(double mbInternet) override {
        this->mbInternet = mbInternet;
    }

    void buildMinutes(int minutes) override {
        this->minutes = minutes;
    }

    UserEquipment* getResult() const override {
        std::cout << "Builder was successful for MobilePhone\n";
        return new MobilePhone(name, phoneType, mbInternet, minutes);
    }
};

#endif // MOBILEPHONEBUILDER_H

