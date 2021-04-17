#include<iostream>
#include<stdio.h>
using namespace std;
struct Employee
{
    int id;
    char name[50];
};

int main()
{
    struct Employee e1;
    e1.id=101;
    strcpy(e1.name,"Ram");
    cout<<"employee id:\n"<<e1.id;
    cout<<"employee name:\n"<<e1.name;
}
