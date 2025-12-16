#include<iostream>
using namespace std;
 void swapValue(int x,int y){
    int temp=x;
    x=y;
    y=temp;
  
 }
 void swapReference(int &x,int&y){
 int temp=x;
    x=y;
    y=temp;
 }
 void swap_Pointer(int *x,int*y){
 int temp=*x;
   * x=*y;
   * y=temp;
 }
int main(){
    int a,b;
    cout<<"entre value of a and b: "<<endl;
    cin>>a>>b;
   cout<<"before swap: "<<a<<" " <<b<<endl;
   swapValue(a,b);
   cout<<"after swap by value : "<<a<<" "<<b<<endl;
   cout<<"before swap: "<<a<<" " <<b<<endl;
  swapReference(a,b);
  cout<<"after swap by reference: "<<a<<" "<<b<<endl;
  cout<<"before swap: "<<a<<" " <<b<<endl;
    swap_Pointer(&a,&b);
   cout<<"after swap by pointer: "<<a<<" "<<b<<endl;
}

