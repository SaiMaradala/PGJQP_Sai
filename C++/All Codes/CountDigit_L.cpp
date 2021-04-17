
#include <iostream>
using namespace std;
int main()
{
    int num;
    int count = 0;
    cout << "Enter any number : ";
    cin >> num;

    while(num!=0)
        {
        count++;
        num=num/10;
    }
    cout << endl << "Total digits are " <<num<<count;
    return 0;
}


