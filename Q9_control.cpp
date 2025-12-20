// Assignment 9: Palindrome Number Checker 
// Write a program to check if a number is a palindrome. 
// •	Use a while loop to reverse the digits of the number. 
// •	Extend the program to print all palindrome numbers within a given range. 
#include<iostream>
using namespace std;
int main(){
    int num,original,reverse=0,digit;
    int start,end;
    cout<<"enter the number: ";
    cin>>num;
    original=num;
    while(num>0){
          digit=num%10;
          reverse=reverse*10+digit;
          num= num/10;
    }
    if(original==reverse)
    cout<<"number is palindrome";
    else
    cout<<" number not palindrome";

    cout << "Enter range (start and end): ";
    cin >> start >> end;

    cout << "Palindrome numbers in the range are: ";

    for (int i = start; i <= end; i++) {
        int temp = i;
        reverse = 0;

        while (temp > 0) {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        if (i == reverse)
            cout << i << " ";
    }

    return 0;
}