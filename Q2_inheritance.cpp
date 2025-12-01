  /*2.	Employee–Salary Slip (Single Inheritance) 
Design a system where an Employee class holds basic employee details and a derived class Salary computes allowances,
 deductions, and net salary, producing a formatted salary slip using inherited data. */
 #include<iostream>
 using namespace std;
 class Employee{
      private: string name,dept;
             int  id;
             double basic_salary;
     public:
     void getemployee(){
        cout<<"enter name of  employee: ";
        cin>> name;
        cout<<"enter id of  employee: ";
        cin>> id;
        cout<<"enter  department of  employee: ";
        cin>>  dept;
        cout<<"enter basic salary of  employee: ";
        cin>> basic_salary;
               }
     double salary(){                 // to get salary in salary class 
                return basic_salary;
               }
     void display(){
       cout<< "name of  employee is: "<<name<<endl;
       cout<<"employee id is : "<< id<<endl;
       cout<<"employee  department is : "<<  dept<<endl;
       cout<<"employee  basic salary is : "<<  basic_salary<<endl;
              }
 };
 class Salary:public Employee{
    private:
         double hra,da,ta,pf,tax;     //hra,da,ta are allowances(added to basic salary)pf,tax deductions(subtracted basic)
    public:
       double allowances(){
           double a;
           hra= 0.2* salary();
           da = 0.1* salary();
           ta = 0.05* salary();
           a=hra+da+ta;
           cout<<"HOUSE RENT ALLOWANCE(hra):"<<hra<<endl<<"DEARNESS ALLOWANCE(da)"<<da<<endl<<"TRAVEL ALLOWANCE(ta)"<<ta<<endl;
           cout<<"TOTAL ALLOWANCE:"<<a<<endl;
           return a;
           }
       double  deductions(){
           double  d;
            pf= 0.12* salary();
            tax = 0.08* salary();
            d= pf +tax;
            cout<<"PROVIDENT FUND(pf):"<<hra<<endl<<"tax:    "<<tax<<endl;
           cout<<"TOTAL DEDUCTIONS:"<< d<<endl;
            return d;
      }
       void netSalary(){
            double net_salary;
            net_salary=allowances()+salary()-deductions();
            cout<<"NET SALARY:       "<<net_salary;
       }
 };
 int main(){
    Salary emp1;
    emp1.getemployee();
    cout<<"_____SALARY SLIP_____"<<endl;
    emp1.display();
    emp1.netSalary();     // netSalary calls alllowances and deductions itself
 }
