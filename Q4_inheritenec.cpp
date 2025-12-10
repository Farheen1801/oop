// 4.	Shape Hierarchy (Hierarchical Inheritance) 
// Implement a base class Shape and derive Circle, Rectangle, and Triangle classes that each compute their area 
// independently using overridden functions, demonstrating hierarchical inheritance. 

#include<iostream>
using namespace std;
class shape{
    public:
    void area(){
        cout<<"Area of shape: "<<endl;
    }

};
class  circle:public shape{
    protected: float r;
    public:
    void area(){
        shape::area();
        cout<<"enter radius of circle";
        cin>>r;
        float area= 3.14*r*r;
        cout<<"circle area: "<<area<<endl;
    }

};
class   rectangle:public shape{
    protected: float  l,b;
    public:
    void area(){
        shape::area();
        cout<<"enter length and breadth";
        cin>> l>>b;
        float area= l*b;
        cout<<"Rectangle area: "<<area<<endl;
    }

};
class   triangle:public shape{
    protected: float b,h;
    public:
    void area(){
        shape::area();
        cout<<"enter breadth and height of triangle";
        cin>> b>>h;
        float area= (b*h)/2;
        cout<<" Triangle area: "<<area<<endl;
    }

};
int main(){
       circle c;
       triangle t;
       rectangle r;
       c.area();
       t.area();
       r.area();
}
