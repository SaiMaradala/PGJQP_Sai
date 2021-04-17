#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,8,6,9,4,3,10,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,greater<int>());
    cout<<"Order is:";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
