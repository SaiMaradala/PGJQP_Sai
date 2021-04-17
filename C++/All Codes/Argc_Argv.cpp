#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    if(argc==2)
    {
        cout<<"The argument supplied is \n"<<argv[1];
    }
    else if(argc>2)
    {
        cout<<"To many arguements supplied \n";
    }
    else
    {
        cout<<"one argument expected \n";
    }
    }
