#include<iostream>
#include<stdio.h>
using namespace std;
struct Student
{
    int id;
    char name[30];
    float percentage;
};
int main()
{
    int i;
    struct Student record[3];
    record[0].id=1;
    strcpy(record[0].name,"Sai");
    record[0].percentage=86.5;
    record[1].id=2;
    strcpy(record[1].name,"suri");
    record[1].percentage=88;
    record[2].id=3;
    strcpy(record[2].name,"sisi");
    record[2].percentage=75;
    for(i=0;i<3;i++)
    {
        cout<<"Record of students:\n"<<i+1;
        cout<<"Id is :\n"<<record[i].id;
        cout<<"Name is:\n"<<record[i].name;
        cout<<"Percentage is:\n"<<record[i].percentage;

    }
}
