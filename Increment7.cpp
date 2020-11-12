#include<iostream>
using namespace std;
class Increment7
{
public: void calculate(int x,int y,int z)
{
cout<<"Values after Increment by 7 are \n";
cout<<x+7<<endl;
cout<<y+7<<endl;
cout<<z+7<<endl;

}
};
int main()
{
    cout<<"Program Starts"<<endl;
Increment7 t1;
int num1,num2,num3;
cout<<"Enter three numbers \t"<<endl;
cin>>num1>>num2>>num3;
t1.calculate(num1,num2,num3);
cout<<"Program ends here"<<endl;
}
