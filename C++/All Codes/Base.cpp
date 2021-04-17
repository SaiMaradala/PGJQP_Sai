#include<iostream>
using namespace std;
class Base
{
    int val1,val2;
    public: void get()
    {
        cout<<"Enter two values:";
        cin>>val1>>val2;
    }
    friend float mean(base b);
};
{
    return float(b.val1+b.val2)/2;
}
int main()
{
Base b;
b.get();
cout<<"\n mean value is:"<<mean(b);
}
