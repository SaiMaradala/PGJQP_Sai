#include<iostream>
using namespace std;
class test {
public:
int y, z;
test()
{
y = 6;
z = 10;
}
~test()
{
}
};
int main()
{
test a;
cout <<"the sum is: "<< a.y+a.z;
return 0;
}
