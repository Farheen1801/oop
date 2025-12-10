/*3.	Person–Student–Result (Multilevel Inheritance) 
Develop a multilevel inheritance program where Person contains personal information, Student extends it with academic details,
 and Result further adds marks of multiple subjects to generate and display a full performance summary. */
  #include<iostream>
 using namespace std;
 class Person{
     protected: string name,address,school;
             int  phone_number;
     public:
     void  getPerson(){
        cout<<"enter name: ";
        cin>> name;
        cout<<"enter address : ";
        cin>> address;
        cout<<"enter school : ";
        cin>> school;
        cout<<"enter phone number : ";
        cin>> phone_number;
              }
     void display(){
       cout<< "name is: "<<name<<endl;
       cout<< "address is: "<< address<<endl;
       cout<< "school is: "<< school<<endl;
       cout<< "phone number is: "<<phone_number<<endl;
              }
};
 
 class Student:public Person{
      protected: int roll,r_num;
             string dept;
     public:
     void getstudent(){
        cout<<"enter department of student: ";
        cin>> dept;
        cout<<"enter roll no. of student: ";
        cin>>roll;
         cout<<"enter registration no. of student: ";
        cin>> r_num;
              }
     void display(){
       cout<< "Department of student is: "<<dept<<endl;
       cout<<"Roll No. is : "<<roll<<endl;
       cout<< "Registration NO. is: "<<r_num<<endl;
          }
};
class Result:public Student{
     protected:
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
  return p;
  
}
void display(){
     Person::display();
     cout<<"percentage is: "<<percentage();
}

};
int main(){
  Result r;
  r.getPerson();
  r.getstudent();
  r.input();
  r.display();
}
