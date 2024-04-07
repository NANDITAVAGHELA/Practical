#include<iostream>
using namespace std;
double carea(double a, double PI){
    
    return PI*a*a;
}
int main(){
double a,PI;

cout<<"enter radii and default value for PI:"<<endl;
cin>>a>>PI;

cout<<carea(a,PI);

    return 0;
}