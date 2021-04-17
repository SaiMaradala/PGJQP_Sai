#include<iostream>
using namespace std;
class Reverse_num
{
int n,reverse=0,rem;
public: void display()
{
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
    }
 cout<<"Reversed Number: "<<reverse<<endl;
}};
int main()
{
    Reverse_num n;
    n.display();
}
