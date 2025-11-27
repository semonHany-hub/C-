#include<iostream>
#include<cmath>
using namespace std;
int main() {float x,y,z;  cin>>x>>y>>z; 
cout<<max({x,y,z}<<endl);
if(((x>=y)&&(x<=z))||((x>=z)&&(x<=y))) {cout<<x;}
else if(((y>=z)&&(y<=x))||((y<=z)&&(y>=x)))  {cout<<y;}
else {cout<<z;}
cout<<min({x,y,z});  return 0; }
//طباعة أرقام مرتبة تنازليا
//get a number from user and check if it is prime or not
//get two numbers from user and print even numbers between them