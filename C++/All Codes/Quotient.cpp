#include<iostream>
using namespace std;
class Quotient
{
public: void print(int x,int y)
{
cout<<"Quotient is \n" <<"Remainde is \n";
cout<<x/y<<endl;

}
};
int main()
{
    int divisor,dividend,quotient,remainder;
Quotient q1;

cout<<"Enter divisor<<dividend<<quotient<<remainder \t"<<endl;
cin>>divisor>>dividend>>quotient>>remainder;
q1.print(quotient,remainder);

}
