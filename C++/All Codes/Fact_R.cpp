#include<iostream>
using namespace std;
int fact(int num)
{
   if(num <= 1)
      return(1);
   else
      return(num * fact(num-1));
}

int main ()
{
   int num;

   cout << "Enter a number:\t ";
   cin >> num;
   cout << "\nFactorial of " <<num<<" is "<<fact(num)<<endl;
   return 0;
}
