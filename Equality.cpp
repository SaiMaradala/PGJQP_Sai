#include<iostream>
using namespace std;
class Equality
{
   int a,b;
   public: void check()
   {
       cout<<"Numbers are\n";
       cin>>a>>b;
       if(a==b)
       {
           cout<<"Numbers are equal \n";
       }
       else{
        cout<<"Not Equal\n";
       }
   }
};
int main()
{
    Equality E1;
    E1.check();
}
