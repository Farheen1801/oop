/* 4. Temperature .Conversion 
Create a class Temperature to convert Celsius to Fahrenheit and Fahrenheit to Celsius using 
 appropriate formulas and member functions */
#include<iostream>
using namespace std;
 
class Temperature{
   private:
     double c,f;
   public:

   void F_to_C(){
    cout<<"entre temperature in fahrenheit  :";
    cin>> f;
   c =(f-32)*(5.0/9.0);
   cout<<"temperature in celsius :"<<c<<endl;
    }

 void C_to_F(){
  
    cout<<"entre temperature in celsius  :";
    cin>> c;
   f=(9.0/5.0*c)+32;
   cout<<"temperature in fahrenheit :"<<f;
 }
  };
int main(){
    Temperature T1,T2,T3;
    T1.F_to_C();
    T2.C_to_F();
    cout<<endl;
    T3.F_to_C();
    
    }