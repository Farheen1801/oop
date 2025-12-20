// Assignment 10: Banking System with Menu 
// Write a program to simulate a simple banking system with the following menu options: 
// 1.	Deposit 
// 2.	Withdraw 
// 3.	Balance Inquiry 
// 4.	Exit 
// •	Use a switch statement to implement the menu. 
// •	Implement input validation and ensure no withdrawal exceeds the account balance. 
#include <iostream>
using namespace std;

int main() {
    int choice;
    double balance = 0.0, amount;

    do {
        cout << "    BANKING MENU ";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Deposit
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited successfully.";
                } else {
                    cout << "Invalid deposit amount.";
                }
                break;

            case 2: // Withdraw
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid withdrawal amount.";
                } else if (amount > balance) {
                    cout << "Insufficient balance.";
                } else {
                    balance -= amount;
                    cout << "Please collect your cash.";
                }
                break;

            case 3: // Balance Inquiry
                cout << "Current balance: Rs " << balance;
                break;

            case 4: // Exit
                cout << "Thank you for using the banking system.";
                break;

            default:
                cout << "Invalid choice. Please select 1 to 4.";
        }

    } while (choice != 4);

    return 0;
}
