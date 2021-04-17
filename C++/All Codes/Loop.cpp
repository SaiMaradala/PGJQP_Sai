#include<iostream>
using namespace std;
class Loop
{
int counter;

public : void display()
{
for(int counter=0;counter<10;counter++)
{
    cout<<"Hello World \n";
}}};
int main()
{
    Loop l1;
    l1.display();
}
