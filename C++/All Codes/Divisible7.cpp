
#include<iostream>
using namespace std;
class Divisible
{
    int num;
    public: void check()
    {
        cout<<"Enter the number\n";
        cin>>num;
     if(num%7==0)
     {
         cout<<"Number is divisible by 7\n";
     }
     else{
        cout<<"Not divisible by 7\n";
     }
    }
};
int main()
{
    Divisible d1;
    d1.check();
}
