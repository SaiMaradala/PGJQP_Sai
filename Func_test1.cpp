#include<iostream>
using namespace std;
class Func_test1
{
    public: void inc(int a)
    {
    cout<<"After adding by 1 is \t";
    int b=a+1;
    cout<<b;
    }
};
int main()
{
    int num;
    Func_test1 f1;
    cout<<"Number is  \n";
    cin>>num;
    f1.inc(num);
}
