#include<iostream>
using namespace std;
class Dealer
{
 private:
   char mobileNo[11];
     char dealerName[25];
     char dealerAddress[51];
     char dealerCity[25];
     char phoneNo[11];
 public:
    int CompanyID=65190;
     public: void ID()
     {
      cout<<"The company ID is---"<<CompanyID<<endl;
     }

public:void get()
     {
         cout<<"Mobile number:\n";
         cin>>mobileNo;
         cout<<"Dealer Name:\n";
         cin>>dealerName;
         cout<<"Dealer Address:\n";
         cin>>dealerAddress;
         cout<<"Dealer City:\n";
         cin>>dealerCity;
         cout<<"Phone number:\n";
         cin>>phoneNo;
     }
void print()
     {
         cout<<"Mobile number:\n"<<mobileNo<<endl;
         cout<<"Dealer Name:\n"<<dealerName<<endl;
         cout<<"Dealer Address:\n"<<dealerAddress<<endl;
         cout<<"Dealer City:\n"<<dealerCity<<endl;
         cout<<"Phone number:\n"<<phoneNo<<endl;
     }
};
int main()
{
    Dealer d;
    d.ID();
    d.get();
    d.print();
}
