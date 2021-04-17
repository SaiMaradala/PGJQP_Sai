#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4,14,24,34,44};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Numbers are \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " \n";
    cout <<"Minimum number is \n"<< *min_element(arr, arr + n)<<endl;
    cout <<"Maximum number is \n"<< *max_element(arr, arr + n)<<endl;
    return 0;
}
