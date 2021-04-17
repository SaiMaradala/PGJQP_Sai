#include<iostream>
#include<string.h>
using namespace std;
class Reverse
{
char str[50], temp;
    int i, j;

    public: void find()
    {

    cout << "Enter a string : ";
    gets(str);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    cout << "Reverse string:"<<str;
    }
};
int main()
{
   Reverse r;
   r.find();
}
