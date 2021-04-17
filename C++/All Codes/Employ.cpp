#include<iostream>
using namespace std;
class Customer
{
    int mobile number[15];
    char name[26];
    char date of birth[10];
    char billing address[50];
    char city[15];
    char residence phone number[15];
    float amount due[14];

    public:void print()
    {
        cout<<endl<<"Mobile Number:";
        cout<<endl<<"Name:";
        cout<<endl<<"Date Of Birth:";
        cout<<endl<<"Billing Address:";
        cout<<endl<<"City:";
        cout<<endl<<"Residence Phone No:";
        cout<<endl<<"Amount Due:";
    }
        void get()
        {
        cout<<endl<<"Mobile Number:";
        cin>>Mobile Number;
        cout<<endl<<"Name:";
        cin>>Name;
        cout<<endl<<"Date Of Birth:";
        cin>>Date of Birth;
        cout<<endl<<"Billing Address:";
        cin>>Billing Address;
        cout<<endl<<"City:";
        cin>>City;
        cout<<endl<<"Residence Phone No:";
        cin>>Residence Phone No;
        cout<<endl<<"Amount Due:";
        cin>>Amount Due;
        }
};

int main()
{
    Customer c;
    c.get();
    c.print();
    return 0;
}
