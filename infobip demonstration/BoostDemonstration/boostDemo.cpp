#include <boost/optional.hpp>
#include <boost/variant.hpp>
#include <boost/any.hpp>
#include "../polymorphism.h"
#include <iostream>

// Boost.Variant visitor to display info
void displayVariantInfo(const boost::variant<MobilePhone, Router>& variant) {
    struct Visitor : public boost::static_visitor<void> {
        void operator()(const MobilePhone& mobilePhone) const {
            mobilePhone.displayInfo();
        }

        void operator()(const Router& router) const {
            router.displayInfo();
        }
    };

    boost::apply_visitor(Visitor(), variant);
}

// Boost.Any helper function to display info
void displayAnyInfo(const boost::any& any) {
    try {
        if (any.type() == typeid(MobilePhone)) {
            boost::any_cast<MobilePhone>(any).displayInfo();
        } else if (any.type() == typeid(Router)) {
            boost::any_cast<Router>(any).displayInfo();
        } else {
            std::cout << "Unknown type stored in boost::any.\n";
        }
    } catch (const boost::bad_any_cast& e) {
        std::cout << "Bad any cast: " << e.what() << "\n";
    }
}

void runBoostDemonstration() {
    // Using Boost.Optional
    boost::optional<double> optionalInternetAvailable = 5000.0;
    MobilePhone mobilePhone("John's iPhone", PhoneType::iPhone, optionalInternetAvailable ? optionalInternetAvailable.get() : 0, 300);
    Router router("Home Router", 200.0);

    // Using Boost.Variant
    boost::variant<MobilePhone, Router> variantMobilePhone = mobilePhone;
    boost::variant<MobilePhone, Router> variantRouter = router;

    // Using Boost.Any
    boost::any anyMobilePhone = mobilePhone;
    boost::any anyRouter = router;

    // Display information
    std::cout << "Displaying information using Boost.Optional:\n";
    mobilePhone.displayInfo();

    std::cout << "\nDisplaying information using Boost.Variant:\n";
    displayVariantInfo(variantMobilePhone);
    displayVariantInfo(variantRouter);

    std::cout << "\nDisplaying information using Boost.Any:\n";
    displayAnyInfo(anyMobilePhone);
    displayAnyInfo(anyRouter);
}

