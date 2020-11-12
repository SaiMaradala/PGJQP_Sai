#include<iostream>
using namespace std;
class Employee
{
    int emp_id;
    int emp_no;
    char emp_name;

    public: void accept(int emp_id,long emp_no,char emp_name)
    {
        cout<<"Enter employee id \n";
        cin>>emp_id;
        cout<<"Enter employee number \n" ;
        cin>>emp_no;
        cout<<"Enter employee name\n";
        cin>>emp_name;

    }
     void display(int emp_id,long emp_no,char emp_name)
    {
            cout<<"Display the details of Employees \n";
    }
};
int main()
{
    int id;
    long no;
char emp_name;
    Employee E1;
    E1.display(96,7896546456);
    E1.accept(45,9638527410);
}
