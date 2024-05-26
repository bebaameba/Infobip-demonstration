/*

INFOBIP SIMPLE DEMONSTRATION

The only purpose of this project is to shortly demonstrate to the Infobip team familiarity with the more advanced c++ features and conventions. 
My knowledge goes further but I decided this should be enough since there will be a testing part of the interview. 

______________________________________________________________________________________

In this project I have covered the following 
- polymorphism 
- rule of five (for constructors and destructors)
- design patterns 
    - creational patterns
        - abstract factory pattern 
        - builder pattern 
    - behavioral pattern 
        - command pattern 
    - structural pattern
        - adapter pattern 
- use of different libraries
    - boost (variant, optional...)
    - memory (smart pointers)
- recursion
    - this was a project i did for a course at unviersity

SOME of the other elements I didnt include but am well versed in
- client - server relationship
- memory allocation
    - dynamic and static
    - multidimensional arrays
- different structures
    - vectors, queue, stacks
    - unions
    - maps, pair, set
    - ...
- std library
    - lambdas
    - std::function
- methods
    - operator and function overloading
    - friend functions
    - static members
    - virual and pure virtual functions
______________________________________________________________________________________

RUNNING THE CODE 
1. navigate to the folder 'infobip demonstration'

2. linking from terminal: 
g++ -o program main.cpp MobilePhone.cpp Router.cpp UserEquipment.cpp  BoostDemonstration/boostDemo.cpp SmartPointers/SmartPointersDemo.cpp -lboost_system -lboost_filesystem

3. starting the program 
./program

RUNNING THE RECURSION 
1. navigate to the folder 'infobip demonstration'

2. g++ -o program2 recursion.cpp
3. ./program2

4. enter first the targeted sum, then how many numbers you want to be available for addition and then the numbers you want to test the program for.
For example if you want to test if 5 can be written as a sum of 1, 2 and 3 then you would first enter 5 (the sum)
then the number of numbers you are testing the program for which is 3 and then the actual numbers themselves: 1, 2 and 3. 
