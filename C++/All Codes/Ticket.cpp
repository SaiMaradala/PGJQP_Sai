#include<iostream>
using namespace std;
class Ticket
{
 int list;
 public: void booking(int no)
{
         int a=no;
        cout<<a<<endl;
}
public: void status()
{
         cout<<"Ticket confirmed"<<endl;

}
public: void print(int list)
{
         int b=list;
          cout<<b<<endl;
}
};

int main()
{
    Ticket t1;
    t1.booking(123456789);
    t1.status();
    t1.print(1);

    Ticket t2;
    t2.booking(258258258);
    t2.status();
    t2.print(2);
    cout<<"The confirmed passengers List is 2"<<endl;
}

