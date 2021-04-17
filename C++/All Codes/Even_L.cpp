#include<iostream>
using namespace std;
class Even
{
    int num;
    public: void display()
    {
        cout<<"Even Numbers are:\n";
            if(num%2==0)
            {
            cout<<num<<endl;}
       } };
int main()
{
    Even e;
    e.display();
}
