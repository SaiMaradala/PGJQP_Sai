#include<iostream>
using namespace std;
class Min_Max
{
    int n,i,max,min,arr[5];
public: void find()
{
    cout<<"Numbers are:\t";
    cin>>n;
    cout<<"Enter the values:\t";
    for(i=0;i<n;i++)
        cin>>arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element:\t"<<max<<endl;
    cout << "Smallest element:\t"<<min;}};
    int main()
    {
        Min_Max MM;
        MM.find();

    return 0;
}
