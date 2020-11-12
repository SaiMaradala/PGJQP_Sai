#include<iostream>
using namespace std;
class Interest
{
    public: void calculate()
    {
    cout<<"Simple Interest is \n";
    }
};
int main()
{
Interest i1;
int p,r,t,i;
cout << "Calculate the Simple Interest \n";
cout<<"Amount \n"<<"interest \n"<<"time \n"<<endl;
cin>>p>>t>>r;
i=(p*r*t)/100;
i1.calculate();
cout<<"Simple interest"<<i;
}
