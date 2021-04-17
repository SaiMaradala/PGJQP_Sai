#include<iostream>
using namespace std;
class Scope
{
    public: void check()
    {
        int num=3;
        cout<<num<<endl;
    }
    void check1()
    {
        int num=1;
        cout<<num<<endl;
    }};
int main()
{
    Scope s1;
    s1.check();
    s1.check1();
    }

