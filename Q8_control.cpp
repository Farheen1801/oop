// Assignment 8: Multi-Level Discount System 
// Develop a program that calculates the total price after applying a discount based on purchase value: 
// •	Purchases below Rs 100: no discount 
// •	Rs100-Rs 500: 10% discount 
// •	Rs 500-Rs 1000: 15% discount 
// •	Above Rs 1000: 20% discount 
// •	Use nested conditional operators for the discount logic. 
#include <iostream>
using namespace std;

int main() {
    double amount, discount, finalAmount;

    cout << "Enter purchase amount (Rs): ";
    cin >> amount;


    discount = (amount < 100) ? 0 :
               (amount >= 100 && amount <= 500) ? 0.10 :
               (amount > 500 && amount <= 1000) ? 0.15 :
               0.20;

    finalAmount = amount - (amount * discount);

    cout << "Purchase Amount: Rs " << amount << endl;
    cout << "Discount Applied: " << discount * 100 << "%" << endl;
    cout << "Final Amount to Pay: Rs " << finalAmount << endl;

    return 0;
}
