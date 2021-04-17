#include<iostream>
using namespace std;
class Leap_year
{
    int year;
    public: void check()
    {
        cout<<"Enter a year \n";
        cin>>year;
        if(year%4==0)
            {
            cout<<"  year is Leep year\n";
            }
        else{
            cout<<"year is not a leap year  \n";
            }}
};
int main()
{
    Leap_year l1;
    l1.check();
}
