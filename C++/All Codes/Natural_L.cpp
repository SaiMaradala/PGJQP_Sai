#include<iostream>
using namespace std;
class Natural
{
    int num;
    public: void display()
    {
        cout<<"1st Ten Natural Numbers are:\n";
        for(num=1;num<=10;num++)
        {
            cout<<num<<endl;
        }}};
int main()
{
    Natural n;
    n.display();
}
