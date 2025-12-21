// 3.	Write a program to process a collection of daily high temperatures. Your program should count and print the number of hot days 
// (high temperature 85 or higher), the number of pleasant days (high temperature 60–84),and the number of cold days
//  (high temperatures less than 60). It should also display the category of each temperature. Test your program on the following
//   data: 
// 55 62 68 74 59 45 41 58 60 67 65 78 82 88 91 
// 92 90 93 87 80 78 79 72 68 61 59 
// 4.	Modify your program to display the average temperature (a real number) at the end of the run.               

#include<iostream>
using namespace std;
int main(){
    int cold=0,hot=0,pleasant=0,i,n,sum=0;
    float temp[50],average;
    cout<<"entre number of days to calculate temperature:";
    cin>>n;
    cout<<"entre temperature  of days: ";
    for(i=0;i<n;i++){
        cin>>temp[i];
    }
    for(i=0;i<n;i++){
        sum+=temp[i];
        if(temp[i]>=85){
            hot++;
            cout<<"hot temeprature for:  "<<temp[i]<<endl;
        }
      else if(temp[i]>=60&&temp[i]<=84){
            pleasant++;
            cout<<"pleasant temperature for: "<<temp[i]<<endl;
        }
          else {
            cold++;
            cout<<"cold temperature for: "<< temp[i]<<endl;
        }
        average=(float)sum/n;
    }
    cout<<"number of hot days are: "<<hot<<endl;
    cout<<"number of pleasant days are: "<<pleasant<<endl;
    cout<<"number of cold days are: "<<cold<<endl;
     cout<<"average temperature is : "<<average;
    return 0;
}