#include<iostream>
using namespace std;
class Number
{
    int num;
    public: void check()
    {
        cout<<"Number is \n";
        cin>>num;
        if(num%2==0)
        {
            cout<<"Number is Even \n";
        }
        else{
            cout<<"Numbers is odd \n";
        }
    }
};
int main()
{
    Number n1;
    n1.check();
}
