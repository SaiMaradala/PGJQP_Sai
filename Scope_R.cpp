#include<iostream>
using namespace std;
class Demo
{
     int num;
     public: void display();
};
void Demo::display()
{
    cout<<"Welcome";
}
int main()
{
    Demo d1;
    d1.display();
}
