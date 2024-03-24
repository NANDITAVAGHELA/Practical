#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
     double actualp;
     double totalp;
     double gst;
     double cgst;

cout<<"Enter base price:";
    cin>>actualp;

    gst=actualp*0.08;
    cgst=actualp*0.18;
    totalp= (actualp+actualp*0.08+actualp*0.18);

 cout<<"GST(0.08%):"<<gst<<endl;
 cout<<"CGST(0.18%):"<<cgst<<endl;

  cout<<"amount to be paid including gst and cgst is:"<<totalp<<endl;
     return 0;
    
}