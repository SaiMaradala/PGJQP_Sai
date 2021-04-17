#include <iostream>
using namespace std;
class Sum
{
    int i,n,sum=0;
    public: void find()
    {

   int arr[]={1,2,3,4,5};
   n=5;
   for(i=0;i<n;i++) {
      sum+=arr[i];
   }
   cout<<sum;
    }
};
int main()
{
    Sum s;
    s.find();
    return 0;
}
