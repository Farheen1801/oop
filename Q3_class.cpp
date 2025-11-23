// simple interest using classes:
#include<iostream>
using namespace std;
 
class Interest{
   private:
    float principal,rate,time;
   public:
   void value(){
    cout<<"entre principal,rate,time :";
    cin>> principal>>rate>>time;
    
 }
 void SI_cal(){
    float SI=(principal*rate*time)/100;
    cout<<"simple interest is "<<SI<<endl;
 }
  };
int main(){
    Interest I1,I2,I3;
    I1.value();
    I1.SI_cal();
    I2.value();
    I2.SI_cal();
    I3.value();
    I3.SI_cal();
    }