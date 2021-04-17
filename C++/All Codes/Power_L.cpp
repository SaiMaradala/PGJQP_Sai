#include<iostream>
using namespace std;
class Base
{
    int base,exponent,i;
    long power=1;

    public: void calculate()
    {
        cout<<"Enter base\n"<<"Enter Exponent\n";
        cin>>base>>exponent;
        for(i=1;i<=exponent;i++)
        {
            power=power*base;
        }
        cout<<endl<<base<<"^"<<exponent<<":"<<power;
    }
};
int main()
{
    Base b;
    b.calculate();
}
