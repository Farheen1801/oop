// Assignment 1: Complex Number Comparison 
// Write a program that accepts two complex numbers (real and imaginary parts) and compares them.
//  • Use if-else to determine which complex number has a higher magnitude. 
// 	• 	Print "Equal" if they have the same magnitude. 

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float r1,r2,i1,i2,mag1,mag2;
    cout<<" entre Real part and imaginary of first no.:";
    cin>>r1>>i1;
     cout<<"entre real and Imaginary part of second no.:";
    cin>>r2>>i2;
     mag1=sqrt(r1*r1+i1*i1);
     mag2=sqrt(r2*r2+i2*i2);
     cout<<"magnitude of first number is:" <<mag1<<endl;
     cout<<"magnitude of second number is "<<mag2<<endl;
if(mag1>mag2){
    cout<<"first number is greater";
}
else if(mag2>mag1){
    cout<<"second number is greater ";
}
else {
    cout<<"numbers are equal";
}
return 0;
}