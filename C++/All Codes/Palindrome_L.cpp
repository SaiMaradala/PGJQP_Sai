#include<iostream>
using namespace std;
class Palindrome
{
int n,r,sum=0,temp;
public: void check()
{
    cout<<"Enter a number ";
    cin>>n;
    temp=n;
    while(n>0)
    {
     r=n%10;
     sum=(sum*10)+r;
     n=n/10;
    }
    if(temp==sum)
    {
 cout<<"Number is palindrome ";}
 else{
    cout<<"not a palindrome";
 }

}};
int main()
{
    Palindrome p;
    p.check();
}
