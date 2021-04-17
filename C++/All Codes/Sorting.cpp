#include<iostream>
using namespace std;
int main()
 {
 int i,a[10],temp,j;
 cout<<"Enter the numbers:"<<endl;
 for(i=0;i<=10;i++)
 {
 cin>>a[i];
 }
 cout<<"Before sorting:\t"<<endl;
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }
 for(i=0;i<=10;i++)
 {
 for(j=0;j<=10-i;j++)
 {
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j+1];
 a[j+1]=temp;
 }
 }
 }
 cout<<endl<<"After sorting: ";
 for(j=0;j<10;j++)
 {
 cout<<a[j];
 }
 }
