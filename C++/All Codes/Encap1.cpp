#include<iostream>
using namespace std;
class Encap2
{
static int num;
static char ch;
    public:static void display()
    {
        cout<<"WELCOME \n"<<num;

    }
    void get_data()
    {
        display();
    }
};
int Encap2::num=10;

int main()
{
    Encap2 e1;
    e1.display();
}
