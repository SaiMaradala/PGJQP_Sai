#include<iostream>
using namespace std;
class Vowel
{
    char c;
    public: void check()
    {
        cout<<"Enter a Character \n";
        cin>>c;
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
            cout<<" is vowel \n";
            }
        else{
            cout<<"is consonent \n";
            }}
};
int main()
{
    Vowel v1;
    v1.check();
}
