#include<iostream>
#define pI 3.14159
using namespace std;
class Area
{
    public: void calculate()
    {
    cout<<"area is \n";
    }
};
int main()
{
Area A1;
float radius,area;
cout << "Calculate the Area \n";
cin>>radius;
A1.calculate();
cout<<"Area is "<<area;
}
