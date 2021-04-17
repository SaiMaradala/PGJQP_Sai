#include<iostream>
using namespace std;
class Data
{
    public: void usesizeof()
{
cout<<"Above are the Sizes of Datatypes in Bytes"<<endl;
}
};
int main()
{
    cout<<"Program Starts"<<endl;
    Data d1;

cout<<"size of int \t" <<sizeof(int)<<"bytes"<<endl;
cout<<"size of char \t" <<sizeof(char)<<"bytes"<<endl;
cout<<"size of float \t" <<sizeof(float)<<"bytes"<<endl;
cout<<"size of double \t" <<sizeof(double)<<"bytes"<<endl;
d1.usesizeof();
cout<<"Program ends here"<<endl;
}
