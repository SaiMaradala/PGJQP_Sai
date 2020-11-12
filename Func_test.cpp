#include<iostream>
using namespace std;
class Func_test
{
    int num;
    public: void inc()
    {
        cout<<"Enter a Number";
        cin>>num;
        cout<<"Result is:"<<num+1;
    }
};
int main()
{

    Func_test f1;

    f1.inc();
}
