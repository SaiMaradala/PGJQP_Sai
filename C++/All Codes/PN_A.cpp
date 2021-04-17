#include<iostream>
using namespace std;
class Number
{
public: void count()
{
	int countp=0, countn=0, arr[10], i;
	cout<<"Enter 10 numbers : ";
	for(i=0; i<10; i++)
	{
		cin>>arr[i];
	}
	for(i=0; i<10; i++)
	{
		if(arr[i]<0)
		{
			countn++;
		}

		else
		{
			countp++;
		}
	}
	cout<<"Positive Numbers = "<<countp<<"\n";
	cout<<"Negative Numbers = "<<countn<<"\n";
}};
int main()
{
    Number n;
    n.count();
}
