#include<iostream>
using namespace std;
class Week
{
    int num;
    public: void display()
    {
        cout<<"Enter\n";
        cin>>num;
        switch(num)
        {
            case 1 :cout<<" sunday";break;
            case 2:cout<<"monday";break;
            case 3:cout<<"tuesday";break;
            case 4:cout<<"wednesday";break;
            case 5:cout<<"thursday";break;
            default:cout<<"remaining days ";break;
        }
    }
};
int main()
{
    Week vc;
    vc.display();
}
