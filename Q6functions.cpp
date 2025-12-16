#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
float sum(float x, float y){
    return x+y;
}
string sum(string x, string y){
    return x+y;
}
int main(){
int sum_int;
float sum_f;
string sum_s;
sum_int=sum(2,3);
sum_f=sum(2.0F,3.3F);
sum_s=sum("cse","thirdsem");
cout<<sum_int<<endl<<sum_f<<endl<<sum_s;
}