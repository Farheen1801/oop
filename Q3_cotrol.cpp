#include<iostream>
using namespace std;
int main(){
    float a,b,result;
    char o;
    cout<<"entre first number:";
    cin>>a;
     cout<<"entre second number:";
    cin>>b;
     cout<<"entre operator:";
    cin>>o;
   result=(o=='+')?(a+b): 
          (o=='-')?(a-b):
          (o=='*')?(a*b):
          (o=='%')

}