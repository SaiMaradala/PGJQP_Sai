#include<iostream>
using namespace std;
class Check
{
    int num;
    public: void implement()
    {
        cout<<"Enter the Number:"<<endl;
        cin>>num;
if(num>0)
{
   cout<<"Positive number:"<<endl;}
else
{
   cout<<"Number is Negative:"<<endl;
}}
public: void implement2()
{
if(num/2==0)
{
 cout<<"Number is Even:"<<endl;
}
else
{
   cout<<"Number is Odd:"<<endl;
}}};
int main()
{
    Check c;
    c.implement();
    c.implement2();
}
