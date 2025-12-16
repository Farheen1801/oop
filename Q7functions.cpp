#include<iostream>

using namespace std;
# define PI 3.14
float area(float r){
    return PI*r*r;
}
float area(float length, float breadth ){
    return length*breadth;
}
float area( float base, float alt){
    return (base*alt)/2;
}
int main(){
float ar1=area(3.0F);
float ar2=area(2.0F,3.3F);
float ar3=area(4.32F,4.67F);
 
}