#include<iostream>
using namespace std;
class Prime
{
    int i,j,count=1,b=0;
public: void generate()
{
	cout<<"First Ten Prime Numbers are:";
	for(i=2;i>0;++i)
	{
		for(j=2;j<=i/2;++j)
		{
			if(i%j==0){
				b=1;
				break;
			}
		}

		if(b==0)
		{
			cout<<"\n"<<i;
			count++;
		}
		b=0;
		if(count==11)
			break;
	}}};
int main()
{
    Prime p;
    p.generate();
	return 0;
}
