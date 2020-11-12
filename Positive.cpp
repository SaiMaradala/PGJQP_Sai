#include<iostream>
using namespace std;
class Positive
{
    int num;
    public: void check()
    {
        cout<<"Enter a Number \n";
        cin>>num;
        if(num>0)
        {
            cout<<"Number is Positive \n";
        }
        else if(num<0)
        {
        cout<<"Number is Negative \n";
        }
        else{
            cout<<"Number is Zero\n";
        }
    }
};
int main()
{
    Positive p1;
    p1.check();

}

