#include<iostream>
using namespace std;
class Func_Test2
{
    int num;
    public: int inc(int x,int y)
    {
    return x+y;
    }
};
int main()
{
    Func_Test2 t1;
    int num1,num2;
    cout<<"Enter two numbers \n";
    cin>>num1>>num2;
    cout<<"Addition is \t"<<t1.inc(num1,num2);
}
