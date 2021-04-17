#include<iostream>
using namespace std;
int main()
{
    int a[10][10],d1sum=0,d2sum=0,m,i,j;
    cout<<"Enter size of the Matrix:"<<endl;
    cin>>m;
    cout<<"Enter the elements to matrix Below:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;++j)
        {
            cout<<"Enter a["<<i<<"]["<<j<<"] element:"<<endl;
            cin>>a[i][j];
        }
        }
        cout<<"The Given Matrix is:"<<endl;
        for(i=0;i<m;++i)
        {
            for(j=0;j<m;++j)
            {
                cout<<a[i][j]<<endl;
            }
            cout<<endl;
        }
    for(i=0;i<m;++i)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
                d1sum+=a[i][j];
            if(i+j==(m-1))
                d2sum+=a[i][j];
            }}
            cout<<"Sum of 1st diagonal is:"<<d1sum;
            cout<<"Sum of 2nd diagonal is:"<<d2sum;
            return 0;

    }

