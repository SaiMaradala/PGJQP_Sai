#include<iostream>
using namespace std;
class Employee
{
    void accept1();
    char name[15];
    int id;
    float emp_sal;
    public: void accept()
    {
        cout<<"Employee Details:"<<endl;
        cout<<"Name of the Employee:\t";
        cin>>name;
        cout<<"Employee Id:\t";
        cin>>id;
        cout<<"Employee Salary:\t";
        cin>>emp_sal;
        }
       void display()
       {
        cout<<"Name of the Employee:\t"<<name;
        cout<<endl<<"Employee Id:\t"<<id;
        cout<<endl<<"Employee Salary:\t"<<emp_sal;
      }
};

class Programmer:public Employee
{
    float bonus;
    float emp_sal;
    public: void accept1()
    {
     cout<<"Enter bonus :"<<endl;
     cin>>bonus;
    }
    void display1()
    {

        cout<<"Salary along with bonus:\t"<<emp_sal<<endl;
    }
    };
    class Hr:public Employee
    {
        public: void accept2()
        {
        cout<<"Hr Manages the Employes:";
    }};
int main()
{
    Employee E;
    E.accept();
    E.display();
    Programmer p;
    p.accept1();
    p.display1();
    Hr h;
    h.accept2();
}
