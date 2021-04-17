#include<iostream>
using namespace std;
class Integer
{
    int num;
    public: void accept()
    {
    cout<<"........................"<<endl;
    cout<<"Enter the Number:"<<endl;
    cin>>num;
    }
    void display()
    {
        cout<<"...................."<<endl;
        cout<<"Entered Number is:"<<num<<endl;
    }
};
int main()
{
    Integer I;
    I.accept();
    I.display();
}
