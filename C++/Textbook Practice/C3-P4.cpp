
#include <iostream>
using namespace std;
class Counter

{

private :

     unsigned int count;

public:

     Counter ( ) {count = 0;}

     void inc_Count ( ) { count ++;}

     int get_Count( ) {return count;}

};

int main( )

{

     Counter C1, C2;

     cout<<"\n C1="<<C1.get_Count( );

     cout<<"\n C2="<<C2.get_Count( );



     C1.inc_Count( );

     C2.inc_Count( );

     C2.inc_Count( );

     cout<<"\n C1="<<C1.get_Count( );

     cout<<"\n C2="<<C2.get_Count( );

}
