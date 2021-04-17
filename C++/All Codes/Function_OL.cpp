#include <iostream>
using namespace std;
class My{
int add(int a, int b)
{
    cout << a+b <<endl;

}
int add(int a, int b, int c)
{
    cout << a+b+c <<endl;

}};
int main()
{
     My m;
    m.add(20, 40);
    m.add(40, 20, 30);
    return 0;
}
