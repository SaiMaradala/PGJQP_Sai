#include<iostream>
using namespace std;
int fibo(int n)
{
 if((n==1) || (n==0))
 {
 return(n);
 }
 else
    {
return(fibo(n-1)+fibo(n-2));
 }
 };
 int main()
 {
 int n=4,i=0;
 cout<<"Enter number";

 cout<<"Series is";
 while(i<n)
 {cout<<" "<<fibo(i);
 ++i;
 }
 return 0;}
