#include<iostream>
using namespace std;

int mult(int a,int b){
    return a*b;
}
int main(){

    int a,b;
    cout<<"input any two numbers:"<<endl;
    cin>>a>>b;

   cout<<"Multiplication of given numbers:"<<mult(a,b)<<endl;
   return 0;
}