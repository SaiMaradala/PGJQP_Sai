#include<iostream>
using namespace std;
class Cricket
{
    int m1,m2,m3,totel,avg;
    public: void find()
    {
        cout<<"Runs Scored in 1st Match:\n"<<endl;
        cin>>m1;
        cout<<"Runs Scored in 2nd Match:\n"<<endl;
        cin>>m2;
        cout<<"Runs Scored in 3rd Match:\n"<<endl;
        cin>>m3;

    }
    public: void find2()
    {

        totel=m1+m2+m3;
        cout<<"Totel Runs Scored in the Series:\n"<<totel<<endl;
        avg=totel/3;
        cout<<"Average runs Scored Per Match:\n"<<avg;
    }
};
int main()
{
    Cricket c;
    c.find();
    c.find2();
}
