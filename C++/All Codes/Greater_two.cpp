#include<iostream>
using namespace std;
class Greater_two
{
    int num1,num2;
 public: void find()
 {
  cout<<"Enter two numbers \n";
  cin>>num1>>num2;
  if(num1>num2)
  {
      cout<<"num1 is greater \t";
  }
  else
  {
      cout<<"num2 is greater \t";
  }}

};
int main()
{
    Greater_two g1;
    g1.find();
}

