#include<iostream>
using namespace std;
float simpleInterest (float p, float r=5.0,float t=2.0){
    float SI;
   SI=(p*r*t)/100;
   return SI;

}
int main(){
     int p,r,t;
     simpleInterest(2.4F,6.3F,2.3F);
     float simple_interest= simpleInterest(2.4F,6.3F,2.3F);
     cout<<" simple interest is "<< simple_interest;
      
}