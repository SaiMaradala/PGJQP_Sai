#include<iostream>
using namespace std;
class Func_c
{
    int num;
    public: int inc(int x,int y)
    {
    return x-y;
    }
};
int main()
{
    Func_c t1;
    int num1,num2;
    cout<<"Enter two numbers \n";
    cin>>num1>>num2;
    cout<<"subtraction is \t"<<t1.inc(num1,num2);
}
