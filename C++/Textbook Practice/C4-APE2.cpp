#include<iostream>
using namespace std;
class test
{
 int var1=10;
 int var2=20;
public:
  void disp()
   {
     cout<<"var1="<<var1<<endl;
     cout<<"var2="<<var2<<endl;
   }
};
class sample
{
int var1=100;
 int var2=200;
  public:
    void display()
     {
       cout<<"var1="<<var1<<endl;
       cout<<"var2="<<var2;
     }
};
int main()
{
    test t;
sample S1;
t.disp();
S1.display();
}
