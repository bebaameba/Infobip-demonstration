#include "BuilderPattern/MobilePhoneBuilder.h"
#include "BuilderPattern/RouterBuilder.h"
#include "AbstractFactoryPattern/ConcreteUserEquipmentFactory.h"
#include "AdapterPattern/MobilePhoneAdapter.h"
#include "AdapterPattern/RouterAdapter.h"
#include "BoostDemonstration/boostDemo.h"

int main() {
    // Using Builder Pattern
    MobilePhoneBuilder mobilePhoneBuilder;
    mobilePhoneBuilder.buildName("John's Phone");
    mobilePhoneBuilder.buildPhoneType(PhoneType::iPhone);
    mobilePhoneBuilder.buildInternet(5000.0);
    mobilePhoneBuilder.buildMinutes(300);
    UserEquipment* mobilePhone = mobilePhoneBuilder.getResult();

    std::cout << "Builder was successful for MobilePhone\n";
    mobilePhone->displayInfo();
    std::cout << std::endl; // Print newline

    RouterBuilder routerBuilder;
    routerBuilder.buildName("Home Router");
    routerBuilder.buildMbUsed(200.0);
    UserEquipment* router = routerBuilder.getResult();

    std::cout << "Builder was successful for Router\n";
    router->displayInfo();
    std::cout << std::endl; // Print newline

    delete mobilePhone;
    delete router;

    // Using Abstract Factory Pattern
    ConcreteUserEquipmentFactory factory;

    UserEquipment* phone = factory.createMobilePhone("Alice's Phone", PhoneType::Android, 8000.0, 500);
    UserEquipment* homeRouter = factory.createRouter("Office Router", 500.0);

    // Using Adapters to interact with the objects
    UserEquipmentAdapter* phoneAdapter = new MobilePhoneAdapter(static_cast<MobilePhone*>(phone));
    UserEquipmentAdapter* routerAdapter = new RouterAdapter(static_cast<Router*>(homeRouter));

    // Displaying information using the adapters
    phoneAdapter->displayInfo();
    std::cout << std::endl;

    routerAdapter->displayInfo();
    std::cout << std::endl;

    // Clean up
    delete phoneAdapter;
    delete routerAdapter;
    delete phone;
    delete homeRouter;

    // boost demo 
    runBoostDemonstration();

    std::cout << std::endl;

    return 0;
}




