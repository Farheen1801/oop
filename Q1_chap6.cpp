#include<iostream>
using namespace std;
class Int{
    private:
    int i;
    public:
    Int():i(0){}
    Int(int m):i(m){}
    Int add(Int m){
            Int temp;
            temp.i= m.i+i;
           return temp;
    }
    void display(){
           cout<< i;
    }
};
int main(){
    Int i1,i2,i3;
    i1=Int(18);
    i2=Int(2);
    i3=i1.add(i2);
   i3.display();
}