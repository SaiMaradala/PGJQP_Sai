
#include <iostream>
using namespace std;

class course
{
char name[10];
public : void LFC()
{
cout<<"Its course system";
}
};

class team : public course
{
public: void LFC()
{
cout<<"Its team course system";
}
};

int main()
{
team t;
t.LFC();
}
