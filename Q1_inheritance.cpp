 /*1.	Student–Marks (Single Inheritance) 
Create a program using single inheritance where a base class Student stores a student's name and roll number
 and a derived class Marks stores marks of three subjects and calculates the total and percentage, finally displaying 
 the complete academic report. */
 #include<iostream>
 using namespace std;
 class Student{
     private: string name;
             int roll;
     public:
     void getstudent(){
        cout<<"enter name of student: ";
        cin>> name;
        cout<<"enter roll no. of student: ";
        cin>>roll;
              }
     void display(){
       cout<< "name of student is: "<<name<<endl;
       cout<<"roll no. is : "<<roll<<endl;
              }
};
 class Marks:public Student{
          private:
int  m1,m2,m3;
public:
void input(){
    cout<<"enter marks obtained in 3 subjects";
    cin>>m1>>m2>>m3;
}
int totalMarks(){
    int total=m1+m2+m3;
    cout<<"total marks is: "<<total<<endl;
    return total;
}
float percentage(){
  float p= (float)totalMarks()/ 3;
  cout<<"percentage is: "<<p<<"%"<<endl;
  return p;
}
   
 };
 int main(){
    Marks s;
s.getstudent();
s.display();
s.input();
s.totalMarks();
s.percentage();     // marks is called automatically with percentage so no need to call it again 
 }
