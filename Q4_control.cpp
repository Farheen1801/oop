// Assignment 4: Advanced Leap Year Checker 
// Write a program that checks if a given year is a leap year. • 	Use nested if-else for the logic: 
// 	o 	A year is a leap year if it is divisible by 4 but not by 100, unless divisible by 400. 
// 	• 	Add logic to print the next 5 leap years if the input year is not a leap year. 

 #include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    bool isLeap = false;

    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) 
                isLeap = true;
             else 
                isLeap = false;
            
        } 
        else 
            isLeap = true;
        
    } 
    else {
        isLeap = false;
    }

    
    if (isLeap) {
        cout << year << " is a Leap Year." << endl;
    } else {
        cout << year << " is NOT a Leap Year." << endl;

        cout << "Next 5 Leap Years are: ";
        int count = 0;
        int nextYear = year + 1;

        while (count < 5) {
            if ((nextYear % 4 == 0 && nextYear % 100 != 0) || (nextYear % 400 == 0)) {
                cout << nextYear << " ";
                count++;
            }
            nextYear++;
        }
    }

    return 0;
}

