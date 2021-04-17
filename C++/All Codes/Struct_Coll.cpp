#include<iostream>
using namespace std;
struct College
{
 char name[50];
 int pincode;
 float fee;
};

int main()
{
    College c;
    cout<<"Enter College Name:";
    cin.getline(c.name,50);
    cout<<"Pincode:";
    cin>>c.pincode;
    cout<<"College Fee:";
    cin>>c.fee;
cout<<"-------------------------------------\t"<<endl;
    cout<<"Display the College Details:\t"<<endl;
    cout<<"Name of the College:\t"<<c.name<<endl;
    cout<<"Pincode of the College:\t"<<c.pincode<<endl;
    cout<<"Admission Fee:\t"<<c.fee<<endl;
}


