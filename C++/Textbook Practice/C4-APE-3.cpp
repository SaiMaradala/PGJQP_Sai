#include<iostream>
using namespace std;
class values
{
   int var1;
   int var2;
   int var3;
public: void assign()
   {
     var1=5;
     var2=10;
     var3=15;
   }
   void display()
   {
     cout<<"The value of variable1 is:"<<var1<<endl;
     cout<<"The value of variable2 is:"<<var2<<endl;
     cout<<"The value of variable3 is:"<<var3<<endl;
   }
};
int main()
{
   values V1;
   V1.assign();

   V1.display();
}
