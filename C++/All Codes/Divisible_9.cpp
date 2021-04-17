#include<iostream>
using namespace std;
class Divisible
{
    int num;
    public: void check()
    {
        cout<<"Enter the number\n";
        cin>>num;
     if(num%9==0)
     {
         cout<<"Number is divisible by 9\n";
     }
     else{
        cout<<"Not divisible by 9\n";
     }
    }
};
int main()
{
    Divisible d1;
    d1.check();
}
