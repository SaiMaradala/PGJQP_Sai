#include<bits/stdc++.h>

using namespace std;
int multiply(int array[], int n)
{
    int pro = 1;
    for (int i = 0; i < n; i++)
        pro = pro * array[i];
    return pro;
}
int main()
{
    int array[] = {5,5,8,9};
    int n = sizeof(array) / sizeof(array[0]);
    cout << multiply(array, n);
    return 0;
}
