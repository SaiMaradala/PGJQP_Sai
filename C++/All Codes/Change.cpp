#include<iostream>
using namespace std;
class Change
{
    char ch1,ch2,ch3;
    public: void check()
    {
        cout<<"Enter characters \n";
        cin>>ch1>>ch2,ch3;

                ch3=ch1;
                ch1=ch2;
                ch2=ch3;
        cout<<"Upper to lower \n"<<ch1;
        cout<<"Lower to upper\n"<<ch2;
    }
};
int main()
{
    Change c1;
    c1.check();
}
