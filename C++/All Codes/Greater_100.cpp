
#include<iostream>
using namespace std;
class Greater
{
    int num,num1,num2,sum;
    public: void check()
    {
        cout<<"Enter the numbers\n";
        cin>>num1>>num2;
        num=num1+num2;
        cout<<"Sum is \n"<<num<<endl;
     if(num>=100)
     {
         cout<<"Number is Greater than 100\n";
     }
     else{
        cout<<"Not greater than 100\n";
     }
    }
};
int main()
{
    Greater g1;
    g1.check();
}
