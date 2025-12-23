// 2.	Employee Salary Processing Using Virtual Function Override 
// Create a base class Employee with a virtual function calculateSalary(). Derive classes FullTimeEmployee, PartTimeEmployee, and 
// **Intern`, each having a different salary formula. Use runtime polymorphism to process and print salaries for multiple employees. 
#include<iostream>
using namespace std;
class  employee{
    public:
   virtual void  calculateSalary()=0;

};
class FullTimeEmployee:public employee{
    protected:
        int days;
        int salary;
       double rate;
    public:
    void  calculateSalary(){
         cout<<"enter of number of days employee worked: "<<endl;
        cin>> days;
        cout<<"enter rate per  day of half time employee: "<<endl;
        cin>> rate;
        salary=rate* days;
       cout<<"salary of full time employee per month is: "<<salary<<endl;
    }

};
class PartTimeEmployee:public employee{
    protected: int hours;
          double rate,salary;
    public:
    void  calculateSalary(){
        cout<<"enter of number of hours employee worked: "<<endl;
        cin>>hours;
        cout<<"enter rate per hour of half time employee: "<<endl;
        cin>> rate;
        salary=rate*hours;
        cout<<"salary of half time employee for one project is: "<<salary<<endl;
    }

};
class Intern:public employee{
   protected: 
          double stipend;
    public:
    void  calculateSalary(){
        cout<<"enter fixed stipend for internship: "<<endl;
        cin>> stipend;
        cout<<"salary of half time employee for one project is: "<< stipend;
    }

};
int main(){
    employee* e;
    FullTimeEmployee fe;
    PartTimeEmployee pe;
    Intern i;
    e=&fe;
    e->calculateSalary();
    e=&pe;
    e->calculateSalary();
    e=&i;
    e->calculateSalary();
}