#include<iostream>
using namespace std;
int main(){
    float bill,unit;
    cout<<"entre units of electricity: ";
    cin>>unit;
    if(unit<=100){
        bill= unit*1.5;
    }
    else if(unit<=200){
        bill=(2.5*(unit-100))+(1.5*100);
    }
    else {
        bill=(4*(unit-200))+(1.5*100)+(2.5*100);
    }
    if(bill>500){
        bill+=bill*0.1;      // for surchage in existing bill,new if 
    }
cout<<"the total bill is: "<<bill;
return 0;
}