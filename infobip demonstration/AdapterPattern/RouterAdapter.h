#ifndef ROUTERADAPTER_H
#define ROUTERADAPTER_H

#include "UserEquipmentAdapter.h"
#include "../polymorphism.h"

class RouterAdapter : public UserEquipmentAdapter {
private:
    Router* router;

public:
    RouterAdapter(Router* router) : router(router) {}

    void displayInfo() const override {
        std::cout << "Adapter used successfully for Router\n";
        router->displayInfo();
    }
};

#endif // ROUTERADAPTER_H


