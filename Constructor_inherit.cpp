#include<iostream>
using namespace std;
class Parent
{
    public: Parent()
    {
     cout<<"Parent class Constructor:"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent class Destructor:"<<endl;
    }
};
class Derived : public Parent
{
public: Derived()
{
    cout<<"Derived class Constructor:"<<endl;
}
~Derived()
{
    cout<<"Derived class Destructor:";
}};
int main()
{
    Derived d;

}
