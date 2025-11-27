#include<iostream>
#include<limits>
using namespace std;
int main(){
    /*int num;   cin>>num; if(num<2){cout<<"not prime"; return 0}
    for(int i=2;i<num;i++)
    {
        if(num%i==0) {cout<<"not prime"; return 0;}
    }
    cout<<"prime";*/
    int n,m,x;
    cin>>n>>m;
     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if(n>m){x=n; n=m; m=x;}
    for(int i=m; i<=n;i++)
    {
        if(i%2==0) cout<<i<<' ';
    }
return 0;}
//اجراء عملية حسابية على رقمين باستخدام for وwhile وdo while
