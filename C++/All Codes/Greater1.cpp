#include<iostream>
using namespace std;
class Greater1
{
    int num;
    public: void check()
    {
        cout<<" Enter a Number \n";
        cin>>num;
        if(num>=10)
        {
            cout<<"Greater than 10 \t";
        }
        else{
            cout<<"Less than 10";
        }
    }
};
int main()
{
    Greater1 g1;
    g1.check();
}
