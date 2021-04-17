
#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,num3,num4,num5,avg;
    public: void check()
    {
        cout<<"Enter 5 numbers\n";
        cin>>num1>>num2>>num3>>num4>>num5;
        avg=(num1+num2+num3+num4+num5)/5;
        cout<<"Average is \n"<<avg<<endl;
     if(avg>=10)
     {
         cout<<"Average is Greater than 10\n";
     }
     else{
        cout<<"Average Not greater than 10\n";
     }
    }
};
int main()
{
    Greater g1;
    g1.check();
}
