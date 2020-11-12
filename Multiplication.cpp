#include<iostream>
using namespace std;
class Multiplication
{
public: void calculate(int a,int b,float c,float d,int e,float f)
{
cout<<"Multilply of Two Numbers of Interger type are \n";
cout<<a*b<<endl;
cout<<"Multiply of Two Numbers of float type are \n";
cout<<c*d<<endl;
cout<<"Multiply of Two Numbers of one int and one float types are \n";
cout<<e*f<<endl;
}
};
int main()
{
    cout<<"Program Starts"<<endl;
Multiplication m1;
int num1,num2,num3;
float f1,f2,f3;
cout<<"Enter Two numbers of Interger type \t"<<endl;
cin>>num1>>num2;
cout<<"Enter Two numbers of float type \t"<<endl;
cin>>f1>>f2;
cout<<"Enter Two numbers of one int and one float type \t"<<endl;
cin>>num3>>f3;
m1.calculate(num1,num2,f1,f2,num3,f3);
cout<<"Program ends here"<<endl;
}
