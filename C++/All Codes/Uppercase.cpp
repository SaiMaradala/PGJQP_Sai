#include<iostream>
using namespace std;
class Upper
{
    char ch;
    public: void check()
    {
        cout<<"Enter a Character \n";
        cin>>ch;
        if(ch>='A' && ch<='Z')
            {
            cout<<" is upper case\n";
            }
        else{
            cout<<"is lower case \n";
            }}
};
int main()
{
    Upper u1;
    u1.check();
}
