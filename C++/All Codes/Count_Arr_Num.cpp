#include <iostream>
using namespace std;
class Count
{
    int arr[10] = {1,2,3,4,5,6,8};
    int count=0;
    public: void totel()
    {

    for(int i=0;i<10;i++)
    {
        if(arr[i]!='\0')
            count++;
    }
    cout<<"Elements in array are: "<<count;
}};
int main()
{
    Count c;
    c.totel();
}

