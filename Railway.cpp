#include<iostream>
using namespace std;
class Railway
{
    int id1,id2,no;
    char name;
    public: void booking()
    {
        cout<<"Booking List is \n";
        cin>>id1>>id2>>no>>name;
    }
    public: void status()
    {
        cout<<"id1 ticket is confirmed \n"<<"id2 ticket is pending \n";
    }
    public: void print()
    {
        cout<<"List of the confrimed passengers is 1 \n";

    }
};
int main()
{
    Railway R1;
    R1.booking();
    R1.status();
    R1.print();

}
