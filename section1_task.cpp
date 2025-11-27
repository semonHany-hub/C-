#include<iostream>
using namespace std;
int main()
{cout<<"what's the number of your family's individuals?"<<endl;
int individuals ;
cin>>individuals;
cout<<"and what's your family's salary?\n";
float salary ;
cin>>salary;
cout<<"how many daughters in your family? "<<endl;
int daughters ;
cin>> daughters;
cout<<"now enter the number of your family's sons\n";
int sons;
cin>> sons;
cout<<"the revenue of each parent will be: "<<(0.1* salary)/2;
cout<<"the revenue of each daughter will be: "<<(2/3*(0.8 *salary))/daughters;
cout<<"the revenue of each son will be: "<<(1/3*(0.8* salary))/sons;
return 0;}