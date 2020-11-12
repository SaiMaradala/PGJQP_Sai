#include<iostream>
using namespace std;
class Ap
{
    public: void calculate()
    {
    cout<<"Diplay the Area and Perimeter of Rectangle  \n";
    }
};
int main()
{
Ap ap1;
int peri,area,length,width;

cout << "Legth of Rectangle\n";
cin>>length;
cout << "width of Rectangle\n";
cin>>width;
area=length*width;
peri=2*(length+width);
ap1.calculate();
cout<<"Area \t\n"<<area<<endl;;
cout<<"Perimeter \t\n"<<peri<<endl;
}
