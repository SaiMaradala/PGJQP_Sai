#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,num3;
 public: void check()
 {
  cout<<"Enter three numbers \n";
  cin>>num1>>num2>>num3;
  if(num1>num2 && num1>num3)
  {
      cout<<"num1 is greater \t";
  }
  else if(num2>num1 && num2>num3)
  {
      cout<<"num2 is greater \t";
  }
  else{cout<<"num3 is greater";}
 }
};
int main()
{
    Greater g1;
    g1.check();
}

