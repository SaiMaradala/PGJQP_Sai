#include<iostream>
using namespace std;
class Odd
{
    int num;
    public: void display()
    {
        cout<<"1st Hundered odd Numbers are:\n";
        for(num=1;num<=200;num++)
        {
            if(num%2==1)
            cout<<num;
        }}
        void display2()
        {
        cout<<endl<<"1st Hundered Even Numbers are:\n";
        for(num=1;num<=200;num++)
        {
            if(num%2==0)
            cout<<num;
        }}
        };
int main()
{
    Odd o;
    o.display();
    o.display2();
}
