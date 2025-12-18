#include<iostream>
using namespace std;
void display(int x){
cout<<x<<endl;
}
void display(float x){
cout<<x<<endl;
}
void display(string x){
cout<<x;
}
int main(){
    display(9);
    display(34.5F);
    display("farheen");
}