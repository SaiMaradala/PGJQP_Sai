#include<iostream>
using namespace std;

class Data_type
{
public: void print(int a,float b,char c)
{

    cout<<"Data types are" <<a<<b<<c<<endl;
}
};

int main()
{
    cout<<"Program Starts"<<endl;

Data_type d1;
      int n1;
      float f1;
      char c1;
      cout<<"Enter the values of int,float,char"<<endl;
      cin>>n1>>f1>>c1;


      d1.print(n1,f1,c1);
      cout<<"Program ends"<<endl;

}
