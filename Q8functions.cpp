// 8.	Write a function void findMinMax(int *arr, int n, int &min, int &max) that uses pointers and references to find the minimum
//  and maximum elements in an array. The main function should pass the array and display the results. 
#include<iostream>
using namespace std;
void findMinMax(int *arr,int n,int &min, int &max){
      int i;
    for(i=1;i<n;i++){
            if(*(arr+i)<min)
            min=*(arr+i);
         }

    for(i=1;i<n;i++){
            if(*(arr+i)>max)
            max=*(arr+i);
         }
}
int main(){
    int n,i;
    int arr[10];
    cout << "enter number of elements:";
    cin>>n;
    for(i=0;i<n;i++){
    cout << "enter elements:";
    cin>>arr[i];
    }
    int min=arr[0];
    int max= arr[0];
    findMinMax(arr,n,min,max);
    cout<<"Minimum is: " <<min<<endl;
    cout<<"Maximum is: " <<max;
}