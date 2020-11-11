#include<iostream>
using namespace std;
class Array
{
 int arr[10],arr1[3];
 public: void accept()
 {
     arr[0]=23;
     arr[1]=26;
     arr[2]=25;

     cout<<arr[2]<<endl;

 }
};
int main()
{
    Array A1;
    A1.accept();
}
