#include <iostream>
using namespace std;
class Cal {
    public:
    int add(int a,int b){
        cout<<a+b<<endl;
    }
     int add(int a, int b, int c)
    {
        cout<<a+b+c<<endl;
    }
};
int main(void) {
    Cal C;
    cout<<C.add(10,20)<<endl;
    cout<<C.add(12,20,23);
   return 0;
}
