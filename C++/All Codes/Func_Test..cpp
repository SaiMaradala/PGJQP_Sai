#include<iostream>
using namespace std;
class Func_Test
{
int num;
public: int inc()
{
cout<<"Enter a Number \t";
cin>>num;
int b=num+1;
return b;
}};
int main()
{
    Func_Test F1;
    int j=F1.inc();
    cout<<"Updated Number \t"<<j;
}
