#include <iostream>
using namespace std;
class Reverse
{
    int  reverse=0, rem;
public: void generate(int num)
{
  cout<<"Number is:\t";
  while(num>0)
  {
     rem=num%10;
     reverse=reverse*10+rem;
     num/=10;
  }
 cout<<"Reversed Number: "<<reverse<<endl;
}};
int main()
{
    Reverse R;
    R.generate(456);
return 0;
}
