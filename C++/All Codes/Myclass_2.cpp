#include<iostream>
using namespace std;
class Myclass
{
private:
        int  num = 100;
        float  f = 200.5;
protected:
	    char c= "s";
public:
	friend void display(Myclass  M);
};
void display(Myclass  M)
{
 	cout<<M.num<<M.f<<M.ch<<endl;
}

int main()
{
Myclass  M;
M.display();
}

