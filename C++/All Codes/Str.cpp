#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[12]="Hello";
    char str2[12]="World";
    char str3[13];
    int len;
    strcpy (str3,str1);
    cout<<"strcpy:"<<strcpy;
    strcat(str3,str1);
    cout<<"strcat:"<<strcat;
    cout<<"len";
}
return 0;
}
