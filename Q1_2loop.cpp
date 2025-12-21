// 1.	Write a program that will find the smallest, largest, and average values in a collection of N numbers. Get the value of N 
// before scanning each value in the collection of N numbers. 
// 2.	Modify your program to compute and display both the range of values in the data collection and the standard deviation of 
// the data collection. To compute the standard deviation, accumulate the sum of the squares of the data values ( sum_squares ) in
//  the main loop. After loop exit, use the formula  

#include<iostream>
#include<cmath>
using namespace std;
int main(){
int num[30],i,n,sum=0,range,sq_sum=0;
float average,std_deviation;
cout<<"entre number of elements:";
cin>>n;
cout<<"entre elements:";

for(i=0;i<n;i++){
        cin>>num[i];
    }
int max=num[0],min=num[0];
    for(i=0;i<n;i++){
    if(num[i]>max){
               max=num[i];
    }
    if(num[i]<min){
            min=num[i];     
    }
    sum+=num[i];
    sq_sum+=num[i]*num[i];
 }
average=(float)sum/n;
range=max-min;
std_deviation=sqrt((sq_sum/n)-(average*average));
cout<<"largest of number is:"<<max<<endl;
cout<<"smallest of number is:"<<min<<endl;
cout<<"avearge is: "<<average<<endl;
cout<<"range is: "<<range<<endl;
cout<<"standard deviation is: "<<std_deviation;
return 0;
}