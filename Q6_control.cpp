// Assignment 6: Quadratic Equation Solver 
// Write a program to solve a quadratic equation (ax^2 + bx + c = 0).
// • 	Use nested if-else to classify the roots as real and  distinct, real and equal, or imaginary. 
// 	• 	Use conditional operators to check if the coefficients are valid (non-zero a). 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, d, r1, r2, realPart, imagPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    
    if (a == 0) {
        cout << "Invalid equation! 'a' cannot be zero." << endl;
    }
    else {
        d = b * b - 4 * a * c;

        
        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            cout << "Roots are real and distinct." << endl;
            cout << "Root 1 = " << r1 << endl;
            cout << "Root 2 = " << r2 << endl;
        }
        else if (d == 0) {
            r1 = -b / (2 * a);
            cout << "Roots are real and equal." << endl;
            cout << "Root = " << r1 << endl;
        }
        else {
            
            realPart = -b / (2 * a);
            imagPart = sqrt(-d) / (2 * a);

    cout << "Roots are imaginary." << endl;
    cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
    cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;

        }
    

    return 0;
}
