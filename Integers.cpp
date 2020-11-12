#include<iostream>
using namespace std;
class Integer
{
public: void print(int x,int y,int z)
{
cout<<"Integers are \n";
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;

}
};
int main()
{
Integer t1;
int num1,num2,num3;
cout<<"Enter three numbers \t"<<endl;
cin>>num1>>num2>>num3;
t1.print(num1,num2,num3);

}
