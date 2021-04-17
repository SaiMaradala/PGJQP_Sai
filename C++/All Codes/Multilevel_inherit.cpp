
#include<iostream>
using namespace std;
class A
{
    int a=10;
    public: void display()
    {
        cout<<"A:"<<a++;
    }
};
class B:public A
{
    public: void display1()
    {
        cout<<"B:";
    }
};
class C:public B
{
    public: void display2()
    {
        cout<<"C:";
    }
};
int main()
{
    C c;
    c.display();
}
