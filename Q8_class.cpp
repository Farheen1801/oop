 /*8.	Marks Percentage Calculator 
Design a class Marks with data members for marks in 5 subjects. Implement functions to calculate and display the total marks,
 percentage, and grade. */
#include<iostream>
using namespace std;
class Marks{
private:
int  m1,m2,m3,m4,m5;
public:
void input(){
    cout<<"enter marks obtained in 5 subjects";
    cin>>m1>>m2>>m3>>m4>>m5;
}
int totalMarks(){
    int total=m1+m2+m3+m4+m5;
    cout<<"total marks is: "<<total<<endl;
    return total;
}
float percentage(){
  float p= (float)totalMarks()/5;
  cout<<"percentage is: "<<p<<"%"<<endl;
  return p;
}
void grade(){
           float p = percentage();
        cout << "Grade: ";
        if (p >= 90)
            cout << "A+" << endl;
        else if (p >= 75)
            cout << "A" << endl;
        else if (p >= 60)
            cout << "B" << endl;
        else if (p >= 50)
            cout << "C" << endl;
        else if (p >= 40)
            cout << "D" << endl;
        else
            cout << "F (Fail)" << endl;
    }
};
int main(){
    Marks M;
    M.input();
    M.grade();   // totalmarks and percentage is called internally
}
