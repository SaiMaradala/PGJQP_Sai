#include<iostream>
using namespace std;
class V_C
{
    char ch;
    public: void check()
    {
        cout<<"Enter your Characters \n";
        cin>>ch;
        switch(ch)
        {
            case 'a':cout<<" is vowel";break;
            case 'e':cout<<"is vowel";break;
            case 'i':cout<<"is vowel";break;
            case 'o':cout<<"is vowel";break;
            case 'u':cout<<"is vowel";break;
            default:cout<<" is consonent";break;
        }
    }
};
int main()
{
    V_C vc;
    vc.check();
}
