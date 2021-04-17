#include<iostream>
using namespace std;
class Month
{
    int num;
    public: void display()
    {
        cout<<"Enter\n";
        cin>>num;
        switch(num)
        {
            case 1 :cout<<"jan";break;
            case 2:cout<<"feb";break;
            case 3:cout<<"March";break;
            case 4:cout<<"fool month";break;
            case 5:cout<<"may";break;
            default:cout<<"remaining months";break;
        }
    }
};
int main()
{
    Month m;
    m.display();
}
