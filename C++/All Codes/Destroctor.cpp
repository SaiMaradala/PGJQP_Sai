#include<iostream>
using namespace std;
class Calculator
{
    public: Calculator(int num)
    {
        cout<<num;
    }
~Calculator()
{
    cout<<"Destroctor invoked";
}};
int main()
{
    Calculator c1(10);


}
