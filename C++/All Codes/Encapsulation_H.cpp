#include<iostream>
using namespace std;
class Encapsulation
{
    private:
        int x;
    public:
        void set(int a)
        {
            x =a;
        }
        int get()
        {
            return x;
        }
};
int main()
{
    Encapsulation e;

    e.set(5);

    cout<<e.get();
    return 0;
}
