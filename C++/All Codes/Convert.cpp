#include <iostream>
#include <string>
using namespace std;
class Convert
{
    string str = "1235252";
    int num;
    public: void convert()
    {
    num =stoi(str);
    cout << num;
    }};
    int main()
    {
    Convert c;
    c.convert();
    return 0;
}
