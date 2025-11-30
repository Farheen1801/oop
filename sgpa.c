#include<stdio.h>
int main(){
    float marks[20],sgpa,per[20];
    int m, n,i,c[20],grade[20],totalc=0,sum=0;
    printf("entre number of subjects:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
     printf("marks of scored in subject %d:",i+1);
     scanf("%f",&marks[i]);
    printf("entre total marks of sunject:");
    scanf("%d",&m);
     per[i]=(marks[i]/m)*100;
        if(per[i]>=90){
           grade[i]=10;
        }
        else if(80<=per[i]&&per[i]<90){
            grade[i]=9;
        }
        else if(70<=per[i]&& per[i]<80){
            grade[i]=8;
        }
        else if(60<=per[i]&&per[i]<70){
            grade[i]=7;
        }
        else if(50<=per[i]&&per[i]<60){
            grade[i]=6;
        }
        else if(45<=per[i]&&per[i]<50){
            grade[i]=5;
        }
        else if(40<=per[i]&&per[i]<45){
            grade[i]=4;
        }
        else{
            grade[i]=0;
        }
        printf("grade of subject is %d:\n",grade[i]);
        printf("credits of subject %d:",i+1);
        scanf("%d",&c[i]);
            totalc+=c[i];
       sum+=c[i]*grade[i];
    }
     
sgpa=(float)sum/totalc;
printf("sgpa is %.2f",sgpa);
}