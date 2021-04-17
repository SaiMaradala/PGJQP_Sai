
#include <bits/stdc++.h>
using namespace std;
class Max_Min
{
public: void display()
{
    int arr[] = {2,3,6,5,4,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n Second highest numbers is = "<< *sec_high(arr, arr + n);

}};
int main()
{
    Max_Min mm;
    mm.display();
    return 0;
}
