#include<iostream>
using namespace std;
class Call
{
    public: void swap(int a,int b)
    {
     int temp;
     temp=a;
     a=b;
     b=temp;
     cout<<"In method a:"<<a<<"\t b="<<b<<endl;
    }
};
int main()
{
    Call c;
    int num1=10,num2=20;
    c.swap(num1,num2);
    cout<<"In main num1:"<<num1<<"\t num2="<<num2;
}
