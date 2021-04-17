#include<iostream>
using namespace std;
class X
{
  public: static int f;
};
class Y
{
    int num=10;
    public: void display()
    {
        cout<<"Number \t"<<num;
    }
};
int X::f=2;
int main()
{
X x;
cout<<"Static value is \t"<<x.f<<endl;
Y y;
y.display();
}
