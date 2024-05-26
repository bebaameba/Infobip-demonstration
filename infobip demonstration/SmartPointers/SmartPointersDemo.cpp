#include <memory>
#include "../polymorphism.h"
#include "SmartPointersDemo.h"

// Function to demonstrate usage of smart pointers
void demonstrateSmartPointers() {
    // Using std::shared_ptr for shared ownership
    std::shared_ptr<UserEquipment> mobilePhoneSharedPtr = std::make_shared<MobilePhone>("John's iPhone", PhoneType::iPhone, 5000.0, 300);
    std::shared_ptr<UserEquipment> routerSharedPtr = std::make_shared<Router>("Home Router", 200.0);
    std::cout << std::endl << "Shared pointer used successfully.\n";

    // Using std::weak_ptr for weak references
    std::weak_ptr<UserEquipment> weakRouterPtr = routerSharedPtr;
    std::cout << std::endl << "Weak pointer used successfully.\n";

    // Using std::unique_ptr for unique ownership
    std::unique_ptr<UserEquipment> uniqueMobilePhonePtr = std::make_unique<MobilePhone>("Alice's Android", PhoneType::Android, 3000.0, 500);
    std::cout << std::endl << "Unique pointer used successfully.\n";

    // Accessing object members through smart pointers
    mobilePhoneSharedPtr->displayInfo();
    routerSharedPtr->displayInfo();

    // Check if weak pointer is expired before accessing
    if (!weakRouterPtr.expired()) {
        std::shared_ptr<UserEquipment> sharedRouterPtr = weakRouterPtr.lock();
        sharedRouterPtr->displayInfo();
    } else {
        std::cout << "Weak pointer is expired.\n";
    }

    // uniqueMobilePhonePtr is automatically deallocated when it goes out of scope
}

