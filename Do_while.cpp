#include<iostream>
using namespace std;
class DowhileEx
{
 int choice,num1,num2;
 char ch;
 public: void calculator()
 {
     do{
        cout<<"Enter your choice. 1.addition 2.subtraction 3.multiply 4.division \n";
        cin>>choice;
        cout<<"Enter two numbers \n";
        cin>>num1>>num2;
        switch(choice)
        {
            case1:cout<<num1+num2;break;
            case2:cout<<num1-num2;break;
            default:cout<<"Invalid choice";
        }
        cout<<"\n do you want to continue?";
        cin>>ch;
     }while(ch=='y' || ch=='Y');

 }
};
int main()
{
    DowhileEx d1;
    d1.calculator();
}
