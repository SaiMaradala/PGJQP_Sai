#include <iostream>
using namespace std;
class Average
{
    int n1,n2,n3,n4,n5,i;
    float sum, average;
public: void find()
{
    cout << "Enter the 5 numbers : ";
    cin >>n1>>n2>>n3>>n4>>n5;
        sum=n1+n2+n3+n4+n5;
        average=sum/5;
        cout<<"Average:\t"<<average<<endl;
}
public: void check()
 {
if(average>100)
{
    cout<<"Average is Greater than 100:";
}
else{
    cout<<"Average is less than 100:";
}
}
};

int main()
{
    Average a;
    a.find();
    a.check();
    return 0;
}
