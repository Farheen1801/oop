/*5.	Volume of Box 
Define a class Box with data members length, width, and height. Write a member function to compute 
and display the volume of the box. */
#include<iostream>
using namespace std;
class Box{
        private:int  length,width,height;
        public:
        void input(){
             cout<<"entre length,breadth and height of box";
             cin>>length>>width>>height;
        }
        void show(){
             int volume=length*width*height;
             cout<<"volume of box is "<<volume<<endl;
        }
};
int main(){
     Box b1,b2;
     b1.input();
     b2.input();
     b1.show();
     b2.show();
}