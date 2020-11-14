#include<iostream>
using namespace std;
class Encapsulation_Abs
{
    int num;
    public: void display()
    {
        cout<<"welcome \n";
        calculate();
    }
    void accept()
    {
        cout<<"Hi \n";
    };
private: void calculate()
{
    int num1,num2,num3;
    cin>>num1>>num2;
    num3=num1*num2;
    cout<<"Number is \n"<<num3<<endl;
}};
int main()
{
    Encapsulation_Abs e1;
    e1.display();
    e1.accept();
}

