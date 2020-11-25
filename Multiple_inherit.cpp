#include<iostream>
using namespace std;
class A
{
    public: void display()
    {
    cout<<"Parent Class A:"<<endl;
    }
};
class B
{
    public: void display1()
    {
        cout<<"Parent Class B:"<<endl;
    }
};
class C:public A,public B
{
    public: void display2()
    {
        cout<<"Child Class C:"<<endl;
    }
};
int main()
{
    C c;
    c.A::display();
    c.B::display1();
    c.display2();
}
