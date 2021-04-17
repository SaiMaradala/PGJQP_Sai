#include<iostream>
using namespace std;
class Second_LargeNum
{
public: void display()
{
       int a[10],i,second_largest = 0,pos2;
       int n;
       cout <<"Enter Number of elements \n:";
       cin>>n;
       for(i =0;i<n;++i)
       {
              cout<<"Enter "<< (i + 1);
              cin>>a[i];
       }
       for (i = 0; i<10; ++i)
       {
              if (a[i]>second_largest)
              {
                           continue;
                     second_largest = a[i];
                     pos2 = i;
              }
       }
       cout << "Second Largest Number :"<< second_largest << " at position " << (pos2 + 1);
}};
int main()
{
    Second_LargeNum s;
    s.display();
    return 0;
}
