#include <iostream>
using namespace std;
class Floyd
{

    public: void display()
    {
         int n,i,c,a=1;
         cout<<"Enter the number";
         cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (c = 1; c <= i; c++)
        {
            cout<<a;
            a++;
        }
        cout<<endl;
    }

}};
int main()
{
    Floyd f;
    f.display();
}
