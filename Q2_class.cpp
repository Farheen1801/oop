// area and circumference of circle using classes:
#include<iostream>
using namespace std;
#define pi 3.14F
class circle{
   private:
    float radius;
   public:
   void value(){
    cout<<"entre radius :";
    cin>>radius;
    
 }
 void area(){
    float ar=pi*radius*radius;
    cout<<"area is "<<ar<<endl;
 }
 void circumference(){
    float per=2*pi*radius ;
     cout<<"perimeter  is "<<per;
 }

};
int main(){
    circle c1,c2;
    c1.value();
    c1.area();
    c2.value();
    c2.circumference();

}