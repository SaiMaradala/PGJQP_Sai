# include <iostream>
using namespace std;
class Calculator_s
{
    public: void design()
    {
    char op;
    int num1,num2;
    cout << "Enter operator \n";
    cin >> op;
    cout << "Enter two numbers\n ";
    cin >>num1>>num2;
    switch(op)
    {
        case '+':cout << num1+num2;break;
        case '-':cout << num1-num2;break;
        case '*':cout << num1*num2;break;
        case '/':cout << num1/num2;break;
        default:cout << "other calculus";break;
    }
}};
int main()
{
  Calculator_s c1;
  c1.design();
}
