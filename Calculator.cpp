#include<iostream>
using namespace std;
class Calculator
{
    int num1,num2,sum,sub;
    public:void add()
    {
        cout<<"Enter 2 Numbers \n";
        cin>>num1>>num2;
        sum=num1+num2;
        cout<<"Sum is \n"<<sum<<endl;
    }
    public:void minus()
    {
        cout<<"Enter 2 Numbers \n";
        cin>>num1>>num2;
        sub=num1-num2;
        cout<<"Subtraction is \n"<<sub;
    }
};
int main()
{
    Calculator c1;
    c1.add();
    c1.minus();
}
