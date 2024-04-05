 #include<iostream>
using namespace std;
int sort(int &a, int &b) {
if(a<=b) {
  return a;
  return b;
  } else {
        int temp;
        temp=b;
        b=a;
        a=temp;
   return a;
   return b;
   }
}
   
   int main() 
   {
   int a, b;
   
   cout << "enter two numbers:" << endl;
   cin>>a>>b;

   cout<<"Before swapping"<<" a="<<a<< " and "<<" b="<<b<<endl;

   
   sort(a, b) ;
    cout<<"after swapping"<<" a="<<a<< " and "<<" b="<<b<<endl;
   return 0;
   }