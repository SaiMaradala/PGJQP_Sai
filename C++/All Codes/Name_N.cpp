#include<iostream>
using namespace std;
class Name
{
    char ch[20];
    public: void accept()
    {
        cout<<"Enter the Name:"<<endl;
        cin>>ch;
    }
    void display()
    {
        cout<<"...................."<<endl;
        cout<<"Entered Name is:"<<ch<<endl;
    }
};
int main()
{
    cout<<".......Program Starts......."<<endl;
    Name N;
    N.accept();
    N.display();

    cout<<".......Program Ends......."<<endl;
}
