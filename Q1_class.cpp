// area and perimeter of triangle using classes:
#include<iostream>
using namespace std;
class rectangle{
   private:
    int length,breadth;
   public:
   void value(){
    cout<<"entre length and breadth :";
    cin>>length>>breadth;
    
 }
 int area(){
    int ar=length*breadth;
    cout<<"area is "<<ar<<endl;
 }
 int perimeter(){
    int per=2*(length+breadth);
     cout<<"perimeter  is "<<per;
 }

};
int main(){
    rectangle r1,r2;
    r1.value();
    r1.area();
    r2.value();
    r2.perimeter();

}