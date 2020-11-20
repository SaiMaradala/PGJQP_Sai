#include<iostream>
using namespace std;
class Func_Overloading
{
public: void sum(int a)
{
cout<<a<<endl;
}
void sum(int a,int b)
{
cout<<a+b<<endl;
}
void sum(double a,double b)
{
cout<<a+b<<endl;
}
};
int main()
{
Func_Overloading fo;
fo.sum(20);
fo.sum(20,52);
fo.sum(2.2,3.3);
}
