#include<stdio.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{

    if(argc!=2){
            printf("\nArgument not in correct format\n");
            exit(1);
    }

    if(atoi(argv[1])%2==0)
        printf("\nEVEN NUMBER\n");
    else
        printf("\nODD NUMBER\n");

return 0;
}
