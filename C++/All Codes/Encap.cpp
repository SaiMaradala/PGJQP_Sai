#include<iostream>
using namespace std;
class Encap
{
   static int num;
    public: void display()
    {
        accept();
        cout<<"NIIT\n";
        accept();
    }
    private: void accept()
    {
        cout<<++num<<endl;
    }
};
int Encap::num=20;
int main()
{
    Encap e1;
    e1.display();
}
