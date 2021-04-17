#include <iostream>
using namespace std;
class Factorial
{
 public: void calculate()
  {
      int i,fact=1,number;
      cout<<"Enter any Number: ";
      cin>>number;
      for(i=1;i<=number;i++)
      {
      fact=fact*i;
      cout<<fact<<endl;
      }}};
int main()
{
    Factorial f;
    f.calculate();
}
