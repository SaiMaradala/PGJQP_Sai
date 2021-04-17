#include<iostream>
using namespace std;
class Dealer
{
    char fn[5],ln[10],cn[10];
    int num;

public: void accept()
{
   cout<<"Accept the details of Dealer \n";
}
public: void display()
{
    cin>>fn;
    cin>>ln;
    cin>>cn;
    cin>>num;
    cout<<"First Name:\t"<<fn<<endl;
    cout<<"Last Name:\t"<<ln<<endl;
    cout<<"City Name:\t"<<cn<<endl;
    cout<<"Ph Number:\t"<<num<<endl;
}
};
int main()
{
    Dealer d;
    d.accept();
    d.display();

}
