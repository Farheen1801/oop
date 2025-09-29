#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"entre three sides of triangle: ";
    cin>>a>>b>>c;
    if(a+b>c&&a+c>b&&b+c>a){                                               // one if loop for valid triangle 
        cout<<"It is a valid triangle\n";
    if(a==b&&b==c){
        cout<<"Equilateral triangle\n";
    }
    else if(a==b||a==c||b==c){
        cout<<"Isosceles triangle\n";
    }
    else{
        cout<<"scalene\n";
    }
    if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a){
     cout<<"Right angled triangle";                                         // pythagoras check for right angled triangle
}
else{
    cout<<"Not right angled triangle";
}
}
else{
    cout<<"Invalid result";
}
return 0;
}