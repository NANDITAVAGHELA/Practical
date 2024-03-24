 #include<iomanip>
#include<iostream>
using namespace std;

int main()
{ 
    int x;
    int y;
    int qt;
    int re;

    cout<<"Enter values for x and y:";
    cin>>x>>y;

    qt= x / y ;
    re=x % y;

     cout<<" quotient:"<<qt<<endl;
     cout<<"remainder:"<<re<<endl;

 return 0;
    
}