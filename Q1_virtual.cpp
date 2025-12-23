// 1.	Shape Area System Using Pure Virtual Function 
// Design an abstract base class Shape with a pure virtual function area(). Derive classes Circle, Rectangle, 
// and Square, each implementing the formula for area. Use base-class pointers to compute and display areas of different shapes
//  selected by the user. 
#include<iostream>
using namespace std;
class shape{
    public:
   virtual void area()=0;

};
class  circle:public shape{
    protected: float r;
    public:
    void area(){
        
        cout<<"enter radius of circle: ";
        cin>>r;
        float area= 3.14*r*r;
        cout<<"circle area: "<<area<<endl;
    }

};
class   rectangle:public shape{
    protected: float  l,b;
    public:
    void area(){
       
        cout<<"enter length and breadth of rectangle: ";
        cin>> l>>b;
        float area= l*b;
        cout<<"Rectangle area: "<<area<<endl;
    }

};
class   square:public shape{
    protected: float a;
    public:
    void area(){
         
        cout<<"enter side of square: ";
        cin>> a;
        float area= a*a;
        cout<<" square area: "<<area<<endl;
    }

};
int main(){
    shape *s;
    circle c;
    rectangle r;
    square sq;
    s=&c;
    s-> area();
    s=&r;
    s-> area();
    s=&sq;
    s-> area();
}
