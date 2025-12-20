// Assignment 11: Number Pyramid 
// Create a program that generates a number pyramid like this: 
//     1   
//    121   
//   12321   
//  1234321   
// •	Use nested for loops to generate the pattern. 
// •	Allow the user to input the number of rows. 
#include<iostream>
using namespace std;
int main(){
    int i,j,space,rows,num;
    cout<<"enter number of rows";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(space=1;space<=rows-i;space++){
            cout<<" ";
        }
        for(num=1;num<=i;num++){
            cout<<num;
        }
        for(num=i-1;num>=1;num--){
            cout<<num;
        }
        cout<< endl;
    }
    

}