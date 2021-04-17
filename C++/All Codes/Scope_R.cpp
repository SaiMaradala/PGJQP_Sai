#include<iostream>
using namespace std;
class Demo
{
     int num=10;
     public: void display();
};
void Demo::display()
{
    cout<<"Welcome"<<endl;
    cout<<"Number is:"<<num;
}
int main()
{
    Demo d1;
    d1.display();
}
