// 7.	Constructor Order in Inheritance 
// Write a program with a Base class and a Derived class where each has constructors and destructors printing messages, 
// demonstrating the order of constructor and destructor execution during object creation and destruction. 

#include <iostream>
using namespace std;


class Base {
public:
    Base() {
        cout << "Base class constructor called" << endl;
    }

    ~Base() {
        cout << "Base class destructor called" << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called" << endl;
    }
};

// Main function
int main() {
    cout << "Creating Derived object" << endl;
    Derived obj;
    cout << "End of main function" << endl;
    return 0;
}
