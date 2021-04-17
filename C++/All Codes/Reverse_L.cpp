#include<iostream>
using namespace std;
class Natural_R
{
    int num;
    public: void display()
    {
        cout<<"Reverse Numbers are:\n";
        for(num=10;num>=1;num--)
        {
            cout<<num<<endl;
        }}};
int main()
{
    Natural_R n;
    n.display();
}
