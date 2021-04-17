#include<iostream>
using namespace std;
class Car
{
  public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
      brand = x;
      model = y;
      year = z;
    }
};
int main()
{
  Car c1("Renault", "Duster", 2012);
  Car c2("Mahindra", "Thar", 2010);
  cout << c1.brand << " " << c1.model << " " << c1.year << "\n";
  cout << c2.brand << " " << c2.model << " " << c2.year << "\n";
  return 0;
}
