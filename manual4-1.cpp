
   #include<iostream>
#include<iomanip>
 using namespace std;
    int sort(int &a, int &b){
    if(a>=b){
        int temp;
        temp=a;
        a=b;
        b=temp;

        return a;
        return b;
 

    }else
        {   
         return a;
         return b;
    }
    
   }
  int main(){
   int x,y;

   cout<<"enter  value for x and y:"<<endl;
   cin>>x>>y;
       sort(x,y);

     cout<<x<<endl;
     cout<<y;

    return 0;
  }