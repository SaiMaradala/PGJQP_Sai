#include<iostream>
using namespace std;
class ArrayEx
{
    int arr[5];
    public :void accept()
    {
        cout<<"Enter the values in array \n";
        for(int index=0;index<5;index++)
        {
            cin>>arr[index];
        }
    }
void display()
{
    cout<<"The values in array are \n";
    for(int index=0;index<5;index++)
    {
        cout<<arr[index]*2<<endl;
    }
}
};
int main()
{
    ArrayEx a1;
    a1.accept();
    a1.display();
}
