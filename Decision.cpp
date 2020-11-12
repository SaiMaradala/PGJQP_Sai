#include<iostream>
using namespace std;
class Decision
{
    int num;
    public: void check()
    {
     cout<<"Enter a number \t";
     cin>>num;
     if(num%2==0)
     {
         cout<<"Even \t";
     }
     else{
     cout<<"odd \t";
     }
    }
};
int main()
{
    Decision d1;
    d1.check();
}
