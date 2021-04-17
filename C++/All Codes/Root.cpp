#include <iostream>
#include <cmath>
using namespace std;
class Root
{
public: void find()
{
    float a, b, c,num1,num2,d,r,i;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (d > 0) {
        num1 = (-b + sqrt(d)) / (2*a);
        num2 = (-b - sqrt(d)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }

    else if (d == 0) {
        cout << "Roots are real and same." << endl;
        num1 = -b/(2*a);
        cout << "num1 = num2 =" << num1 << endl;
    }

    else {
        r= -b/(2*a);
        i =sqrt(-d)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "num1 = " << r << "+" << i << "i" << endl;
        cout << "num2 = " << r << "-" << i << "i" << endl;
    }

}
};
int main()
{
  Root r1;
  r1.find();
}
