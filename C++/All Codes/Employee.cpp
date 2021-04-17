#include<iostream>
using namespace std;
class Employee
{

    float emp_sal;

    public: void accept()
    {
        cout<<"Enter employee id \n"<<endl;
        cin>>emp_id>>emp_no>>emp_name>>emp_sal;

    }
     void display()
    {
            cout<<" Enter id \n"<<emp_id;
            cin>>emp_id;
            cout<<"Enter no \n"<<emp_no;
            cin>>emp_no;
            cout<<"Enter name \n"<<emp_name;
            cin>>emp_name;
            cout<<"Enter salary \n"<<emp_sal;
            cin>>emp_sal;}

};
int main()
{
    Employee E1;
    E1.accept();
    E1.display();
}
