#include<iostream>
using namespace std;
class Armstrong
{
    int arm=0,rem,num,temp;
    public: void check()
    {
     cout<<"Number is:\t";
     cin>>num;
     temp=num;
     while(num>0)
     {
         rem=num%10;
         arm=arm+(rem*rem*rem);
         num=num/10;
     }
     if(temp==arm)
     {
         cout<<"Number is Armstrong:"<<endl;
     }
     else{
        cout<<"Not an Armstrong:"<<endl;
     }
    }
};
int main()
{
    Armstrong a;
    a.check();
}
