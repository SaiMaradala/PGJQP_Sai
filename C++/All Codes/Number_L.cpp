#include<iostream>
using namespace std;
class Number
{
    int num;
    public: void display()
    {
        cout<<"Numbers are:\n";
        for(num=1;num<=10;num++)
        {
            cout<<num<<endl;
        }}};
int main()
{
    Number n;
    n.display();
}
