#include<iostream>
using namespace std;
//only the protected and public feature will be accessible
class Shape  //parent clas..super class...base class
{
protected:int width,height;
public : void setWidth(int w1)
{
    width=w1;
}
void setHeight(int h1)
{
height=h1;

}
};
class Rectangle :public Shape{ //child class..derived class..sub class
public : void area()
{
    cout<<width*height;
}
};
class Square :public  Shape{


};
int main()
{
    Shape s1;
  s1.setHeight(100);
   Rectangle r1;
   r1.setHeight(20);
   r1.setWidth(10);
   r1.area();
   Square s2;
   s2.setHeight(22);
}
