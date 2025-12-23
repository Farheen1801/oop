// Electricity Bill Calculator (Copy Constructor) 
// Create a class Bill with units consumed. 
// Use a parameterized constructor to initialize units. Use a copy constructor to copy bill data. 
// Charge per unit = ₹5. 
// Calculate total bill and display for both original and copied objects. 
#include <iostream>
using namespace std;

class Bill {
    int units;

public:
    
    Bill(int u) :units(u){
        
    }

    
    Bill( Bill &b) {
        units = b.units;
    }

    
    void display() {
        int total = units * 5;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill Amount: Rs " << total << endl;
    }
};

int main() {
    Bill b1(120);   

    Bill b2 = b1;   

    cout << "Original Bill:" << endl;
    b1.display();

    cout << "\nCopied Bill:" << endl;
    b2.display();

    return 0;
}

