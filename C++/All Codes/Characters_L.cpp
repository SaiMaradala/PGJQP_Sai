#include<iostream>
using namespace std;
class Alphabets
{
    char ch;
    public: void display()
    {
        cout<<"Alphabets are:\n";
                for(ch='A';ch<='Z';ch++)
        {
            cout<<ch;
        }}};
int main()
{
    Alphabets a;
    a.display();
}
