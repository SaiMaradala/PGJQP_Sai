#include <iostream>
using namespace std;
  class Abstraction{
private:
    int a, b, c;
public:
    void sum(int x, int y)
    {
        a = x;
        b = y;
        c = a + b;
        cout<<"Sum is : "<<c<<endl;
    }
};
int main()
{
    Abstraction a;
    a.sum(10,10);
    return 0;
}
