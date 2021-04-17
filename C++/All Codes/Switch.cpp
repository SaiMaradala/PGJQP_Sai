#include<iostream>
using namespace std;
class Switch
{
int choice;
public : void display()
{
cout<<"Enter your choice";
cin>>choice;
Switch(choice)
{
case 1:cout<<"Sunday";break;
case 2:cout<<"Monday";break;
default:cout<<"choice";}}
void calculator()
{
cout<<"1.addition 2.subtraction 3.multiply";
cin>>choice;
int n1,n2;
cout<<"Enter 2 numbers";
switch(choice)
{
case1:cout<<"n1+n2";break;
case2:cout<<"n1-n2";break;
default:cout<<"Invalid";}
}};
int main()
{
    Switch s1;
    s1.display();
    s1.calculator();
}
