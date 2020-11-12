#include<iostream>
using namespace std;
class Increment1
{
public: void calculate(int x,int y,int z)
{
cout<<"Values after Increment are \n";
cout<<x+1<<endl;
cout<<y+1<<endl;
cout<<z+1<<endl;

}
};
int main()
{
Increment1 t1;
int num1,num2,num3;
cout<<"Enter three numbers \t"<<endl;
cin>>num1>>num2>>num3;
t1.calculate(num1,num2,num3);

}
