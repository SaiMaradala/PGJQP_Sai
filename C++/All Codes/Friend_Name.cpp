#include<iostream>
using namespace std;
class Friend
{
    char ch[20];
    public: void accept()
    {
        cout<<".............................."<<endl;
        cout<<"Enter the Friend Name:"<<endl;
        cin>>ch;
    }
    void display()
    {
        cout<<".............................."<<endl;
        cout<<"Entered Friend Name is:"<<ch<<endl;
    }
};
int main()
{
    Friend F;
    F.accept();
    F.display();
}
