 #include<iostream>
 using namespace std;
 class Loop
 {
 int counter=0;
 public: void whileEx()
 {
 while(counter<10)
    {
        cout<<counter++;

    }
 }
 void dowhileEx()
 {
 int counter1=2;
 do{
    cout<<counter1<<endl;
    counter1++;
    }
    while(counter1<5);}

 };
 int main()
 {
     Loop l1;
     l1.whileEx();
     l1.dowhileEx();
 }
