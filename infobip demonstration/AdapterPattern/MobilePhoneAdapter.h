#ifndef MOBILEPHONEADAPTER_H
#define MOBILEPHONEADAPTER_H

#include "UserEquipmentAdapter.h"
#include "../polymorphism.h"

class MobilePhoneAdapter : public UserEquipmentAdapter {
private:
    MobilePhone* mobilePhone;

public:
    MobilePhoneAdapter(MobilePhone* phone) : mobilePhone(phone) {}

    void displayInfo() const override {
        std::cout << "Adapter used successfully for MobilePhone\n";
        mobilePhone->displayInfo();
    }
};

#endif // MOBILEPHONEADAPTER_H


