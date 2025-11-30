// count number of objects using static variable
#include<iostream>
using namespace std;
class objects{
    private:
    static int count;
    int n;
    public:
    objects(){
        count++;
        n=count;
    }
    void show(){
        cout<<"I am object number: "<<n<<endl;
    }
   static int getcount(){
        return count;
    }
};
int objects::count=0;
int main(){
    objects a,b,c;
    a.show();
    b.show();
    c.show();
    cout<<objects::getcount();
}