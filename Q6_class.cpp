 
/*6.	Average of Three Numbers 
Write class Average with three integer data members. Include member functions to input numbers and calculate their average*/

#include<iostream>
using namespace std;
class Average{
        private:int  x,y,z;
        public:
        void input(){
             cout<<"entre three numbers";
             cin>>x>>y>> z;
        }
        void show(){
             int Average= (x+y+z)/3;
             cout<<"average of numbers is "<< Average<<endl;
        }
};
int main(){
      Average av1, av2;
      av1.input();
      av2.input();
      av1.show();
      av2.show();
}