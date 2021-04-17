#include<iostream>
using namespace std;
class Even
{
public: void display(int N)
{

    cout << "Even: ";
    for (int i = 1; i <= 2 * N; i++)
    {
            if (i % 2 != 0)
            cout << i << " ";
    }
}};
int main()
{
    Even e;
    e.display(10);
    return 0;
}


