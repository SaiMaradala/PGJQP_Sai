#include<iostream>
using namespace std;
class Prime
{
    int i,n;
public: void check()
{
cout<<"Enter Number :\t";
cin>>n;
for(i=2;i<=n/2;i++)
    if(n%i==1)
{
    cout<<"is Prime";
}
else{
    cout<<"not a prime number:";
}
}
};
int main()
{
Prime p;
p.check();
}
