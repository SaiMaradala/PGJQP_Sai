#include<iostream>
using namespace std;
class Square
{
    public: void calculate()
    {
    cout<<"area is \n";
    }
};
int main()
{
Square s1;
float A,area;
cout << "Calculate the Area of Square\n";
cin>>area;
A=area*area;
s1.calculate();
cout<<"Area is "<<A;
}
