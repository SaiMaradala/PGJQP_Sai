#include<iostream>
using namespace std;
class Alphabet
{
    char ch;
    public: void check()
    {
        cout<<"Enter a Character \n";
        cin>>ch;
        if(ch>='a' && ch<='z')
        {
            cout<<" is alphabet\n";
        }
        else{
            cout<<"is not an alphabet\n";
        }
    }

};
int main()
{
    Alphabet a1;
    a1.check();
}
