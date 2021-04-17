#include<iostream>
using namespace std;
class Eligible
{
    int age;
    public: void check()
    {
        if(age>=18)
        {
            cout<<"Eligible to vote \n";

        }
        else{
            cout<<"Not eligible to vote \n";
        }
    }

};
int main()
{
    Eligible e1;
    e1.check();

}

