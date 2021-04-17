#include <iostream>
using namespace std;
class test {
public:
int y, z;
test()
{
y = 40;
z = 10;
}
};

int main()
{
test a;
cout <<"the sum is: "<< a.y+a.z;
return 1;
}
