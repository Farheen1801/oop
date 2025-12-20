// Assignment 12: Sum of Digits 
// Write a program that computes the sum of the digits of an integer. 
// •	Use a while loop to extract and sum the digits. 
// •	Extend it to find the product of digits as well. 
#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;      // Extract last digit
        sum = sum + digit;     
        product = product * digit; 
        num = num / 10;        // Remove last digit
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product << endl;

    return 0;
}
