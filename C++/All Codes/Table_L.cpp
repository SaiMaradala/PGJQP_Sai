#include<iostream>
using namespace std;
class Table
{
    int n1,n2;
    public: void display()
    {
        cout<<"Fourth Table is:\n";
        cin>>n2;
        for(n1=1;n1<=10;n1++)
        {
            cout<<n2<<"*"<<n1<<"="<<n1*n2<<endl;
        }}};
int main()
{
    Table t;
    t.display();
}
