#include <iostream>
using namespace std;
class Armstrong
{
int n,r,sum=0,temp;
public: void check()
{
     cout<<"Enter the Number";
     cin>>n;
     temp=n;
    while(n>0)
    {
       r=n%10;
       sum=sum+(r*r*r);
       n=n/10;
    }
     if(temp==sum){
       cout<<"Armstrong Number"<<endl;}
     else{
       cout<<"Not Armstrong Number"<<endl;}

}};
int main()
{
    Armstrong a;
    a.check();
}
