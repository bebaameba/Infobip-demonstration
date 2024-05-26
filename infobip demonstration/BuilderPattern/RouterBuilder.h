#ifndef ROUTERBUILDER_H
#define ROUTERBUILDER_H

#include "UserEquipmentBuilder.h"

class RouterBuilder : public UserEquipmentBuilder {
private:
    std::string name;
    double mbUsed;

public:
    void buildName(const std::string& name) override {
        this->name = name;
    }

    void buildPhoneType(PhoneType type) override {
        // Not applicable for routers
    }

    void buildInternet(double mbInternet) override {
        // Not applicable for routers
    }

    void buildMinutes(int minutes) override {
        // Not applicable for routers
    }

    UserEquipment* getResult() const override {
        std::cout << std::endl << "Builder was successful for Router\n";
        return new Router(name, mbUsed);
    }

    void buildMbUsed(double mbUsed) {
        this->mbUsed = mbUsed;
    }
};

#endif // ROUTERBUILDER_H


