#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    cout<<"No.of values supplied by user is:\n"<<argc;
    int i;
    for(i=0;i<argc;i++)
    {
        cout<<"Values is:"<<argv[i]<<"\n";
    }
}
