#include<iostream>
using namespace std;
class Power
{
public:
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}
};
int main()
{
    Power p;
    int x = 2;
    unsigned int y = 3;

    cout << p.power(x, y);
    return 0;
}
