#include<iostream>
using namespace std;
class Number
{
 int i=0;

 int j=5;
public: void display()
{
 for(;i<j;i++)

  {

   j--;

  }

 cout<<i<<endl;

}};
int main()
{
    Number n;
    n.display();
}
