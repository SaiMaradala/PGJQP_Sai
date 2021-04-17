
#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,sum,mul;
    public: void check()
    {
        cout<<"Enter 2 numbers\n";
        cin>>num1>>num2;
        sum=(num1+num2);
        mul=(num1*num2);
        cout<<"Sum  is \n"<<sum<<endl;
        cout<<"Multiplication is\n"<<mul<<endl;

     if(mul>=sum)
     {
         cout<<" Multiplication is Greater \n";
     }
     else{
        cout<<"Addition is greater \n";
     }
    }
};
int main()
{
    Greater g1;
    g1.check();
}
