// grading system of student;
#include<iostream>
using namespace std;
int main(){
    int i,n,failcount=0;
    float f, marks[5],percentage,total=0.0;
    char grade;
     cout<<"entre failing marks";
     cin>>f;
    cout<<"entre marks of 5 subjects: ";
   
    for(i=0;i<5;i++){
        cin>>marks[i];
        total+=marks[i];
        if(marks[i]<f){
            failcount++;
        }
    }
    if(failcount>1){
        cout<<"repeat year"<<endl;
    }
percentage=(total/500)*100;
if(percentage<=100&&percentage>=90){
        grade='A';
        cout<<"Distinction";
    }
        else if(percentage<90&&percentage>=70){
            grade='B';
            cout<<"First distinction";
        }
            else if (percentage<70&&percentage>=60){
             grade='C';
             cout<<"Second distinction";
            }
            else if (percentage<60&&percentage>=40){
                  grade='D';
                  cout<<"Pass";
            }
            else{
                grade='F';
            cout<<"Fail";
            }
            cout<<"percentage is "<<percentage<<endl;
            cout<<"grade is "<<grade<<endl;
            return 0;
}