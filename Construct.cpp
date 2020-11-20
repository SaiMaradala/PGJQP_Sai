#include<iostream>
using namespace std;
class Calc
{
public: Calc()
{
cout<<"Constructor without parameter \n";
}

Calc(int a)
{
cout<<a<<endl;
}
Calc(char ch)
{
cout<<"In char "<<ch<<endl;
}
Calc(int a,char ch)
{
cout<<"Int char"<<" "<<a<<" "<<ch<<endl;
}
Calc(char a,int ch)
{
cout<<"char Int"<<" "<<a<<"  "<<ch<<endl;
}};
int main()
{
Calc c1;
Calc c2(10);
Calc c3('t');
Calc c4(20,'e');
Calc c5('s',60);
}
