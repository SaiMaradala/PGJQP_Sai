#include<iostream>
using namespace std;
class Greater
{
int num1,num2,num3;
public: void find_Greater()
{
    if(num1>num2)
    {
        if(num1>num3)
        {
            cout<<"num1 is Greater";
        }
        else{
            cout<<"num3 is Greater";
        }
    }
    else{
        if(num2>num3)
        {
            cout<<"num2 is greater";
        }
    }
}
public : void accept()
{
    cout<<"Enter 3 Numbers \n";
    cin>>num1>>num2>>num3;
}
};
int main()
{
    Greater g1;
    g1.find_Greater();
    g1.accept();
}
