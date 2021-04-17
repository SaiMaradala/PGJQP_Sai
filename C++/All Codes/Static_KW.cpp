#include<iostream>
using namespace std;
class X
{
  static int func(int a)
  {
      cout<<"Value of a: \n"<<a;
  }
};
int main()
{
X::func(8);
}
