#include <iostream>
using namespace std;
class Average
{
    public: void find(int a,int b,int c,int d,int e)
    {
     cout<<"Display the Message"<<endl;
    }
};

int main()
{
    Average a1;
int n1,n2,n3,n4,n5,avg;
cout<<"Enter 5 numbers"<<endl;
cin>>n1>>n2>>n3>>n4>>n5;
a1.find(n1,n2,n3,n4,n5);
avg=(n1+n2+n3+n4+n5)/5;

cout<<"Average is:"<<avg<<endl;
}
