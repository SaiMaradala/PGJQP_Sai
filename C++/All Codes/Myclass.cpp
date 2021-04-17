#include<iostream>
using namespace std;
class Myclass
{
public: void increment()
{
static int i=5;
i++;
cout<<i<<endl;
}
public: void display()
{
cout<<"calling increment for 1st time"<<endl;
increment();


}};
int main()
{
Myclass m;
m.display();
m.increment();
}
