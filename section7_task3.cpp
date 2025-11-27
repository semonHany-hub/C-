#include<iostream>
using namespace std;
int main(){
    int x,y,sum=0;   cin>>x>>y;
    for(int i=1;i<10;i++)
    {
        if(i!=x+y) {cout<<i<<' '; sum+=i;}
    }
    cout<<endl;
    cout<<sum;
}