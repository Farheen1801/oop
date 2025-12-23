// 7. Compound Interest Using Constructor with Default Arguments 
// Create a class CompoundInterest with principal, rate, time, and number of times interest is compounded. 
// Use a constructor with default value n = 1. 
 
#include <iostream>
#include <cmath>
using namespace std;

class CompoundInterest {
    double principal;
    double rate;
    double time;
    int n;  

public:
    
    CompoundInterest(double p, double r, double t )
        : principal(p), rate(r), time(t), n(1) {}

    void calculate() {
    
        double amount = principal * pow((1 + rate / (100 * n)), n * time);
        double ci = amount - principal;

        cout << "Principal = Rs " << principal << endl;
        cout << "Total Amount (A) = Rs " << amount << endl;
        cout << "Compound Interest (CI) = Rs " << ci << endl;
    }
};

int main() {
    
    CompoundInterest c1(10000, 5, 2);
    c1.calculate();

    cout << endl;

    return 0;
}


