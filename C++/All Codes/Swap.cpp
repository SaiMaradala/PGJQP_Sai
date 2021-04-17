#include<iostream>
using namespace std;
class Swap
{
    int num1,num2,num3;
    public: void check()
    {
        cout<<"Enter two numbers \n";
        cin>>num1>>num2;

                num3=num1;
                num1=num2;
                num2=num3;
        cout<<"After swap \n"<<"num1 is \t"<<num1<<" \n num2 is \t"<<num2;
    }
};
int main()
{
    Swap s1;
    s1.check();
}
