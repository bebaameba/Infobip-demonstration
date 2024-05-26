#ifndef POLYMORPHISM_H
#define POLYMORPHISM_H

#include <string>
#include <iostream>

// Enum for PhoneType
enum class PhoneType {
    iPhone,
    Android
};

// Base class
class UserEquipment {
private:
    std::string name;

public:
    UserEquipment(const std::string& deviceName);
    UserEquipment(const UserEquipment& other); // Copy constructor
    UserEquipment(UserEquipment&& other) noexcept; // Move constructor
    UserEquipment& operator=(const UserEquipment& other); // Copy assignment operator
    UserEquipment& operator=(UserEquipment&& other) noexcept; // Move assignment operator
    virtual ~UserEquipment();

    virtual void displayInfo() const = 0;
    

protected:
    std::string getName() const;
};

// Subclass 1: MobilePhone
class MobilePhone : public UserEquipment {
private:
    PhoneType phoneType;
    double mbOfInternetAvailable;
    int minutesAvailable;

public:
    MobilePhone(const std::string& deviceName, PhoneType type, double mbInternet, int minutes);
    MobilePhone(const MobilePhone& other); // Copy constructor
    MobilePhone(MobilePhone&& other) noexcept; // Move constructor
    MobilePhone& operator=(const MobilePhone& other); // Copy assignment operator
    MobilePhone& operator=(MobilePhone&& other) noexcept; // Move assignment operator
    ~MobilePhone();

    void displayInfo() const override;
};

// Subclass 2: Router
class Router : public UserEquipment {
private:
    double mbOfInternetUsed;

public:
    Router(const std::string& deviceName, double mbUsed);
    Router(const Router& other); // Copy constructor
    Router(Router&& other) noexcept; // Move constructor
    Router& operator=(const Router& other); // Copy assignment operator
    Router& operator=(Router&& other) noexcept; // Move assignment operator
    ~Router();

    void displayInfo() const override;
};

#endif // POLYMORPHISM_H

