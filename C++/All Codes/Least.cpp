#include<iostream>
using namespace std;
class Least
{
    int num1,num2,num3;
 public: void calculate()
 {
  cout<<"Enter three numbers \n";
  cin>>num1>>num2>>num3;
  if(num1<num2 && num1<num3)
  {
      cout<<"num1 is Least \t";
  }
  else if(num2<num1 && num2<num3)
  {
      cout<<"num2 is Least \t";
  }
  else{cout<<"num3 is Least";}
 }
};
int main()
{
    Least l1;
    l1.calculate();
}

