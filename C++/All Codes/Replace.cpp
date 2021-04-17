#include<iostream>
using namespace std;
class Replace
{
    int result = 0;
    int decimalPlace = 1;
public: void calculate(int number )
    {
    if (number == 0)
    {
        result += (5 * decimalPlace);
    }
    while (number > 0)
    {
        if (number % 10 == 0)
    {
            result += (5 * decimalPlace);
        }
        number /= 10;
        decimalPlace *= 10;
    }}
    return result;
}
int replace0with5(int number)
{
    return number += calculateAddedValue(number);
}}};
int main()
{
    Replace r;
    r.calculate();
    cout << replace0with5(1020);
}
