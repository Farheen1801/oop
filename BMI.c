// BMI CALCULATION FOR HEALTH ANALYSIS:
#include<stdio.h>
int main(){
    float weight,height,bmi;
    printf("ENTRE WEIGHT IN KG:");
    scanf("%f",&weight);
    printf("ENTRE HEIGHT IN METRES:");
    scanf("%f",&height);
        bmi=weight/(height*height);
    printf("YOUR BMI IS %.2f\n",bmi);
if(bmi<18.5){
        printf("CATEGORY:UNDERWEIGHT");
    }
   else if(18.5<=bmi<25.0){
        printf("CATEGORY:NORMAL WEIGHT");
    }
   else if(25<=bmi<30.0){
        printf("CATEGORY:OVERWEIGHT");
    }
    else{
        printf("CATEGORY:OBESE");
    }
    return 0;
}
