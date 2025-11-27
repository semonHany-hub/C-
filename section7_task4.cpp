#include<iostream>
using namespace std;
int main(){
    int Max,c=0,A[5];  
    for(int i=0;i<5;i++)
    {
        cin >> A[i];
    }
  cin>>Max;
  for(int i=1;i<=Max;i++)
  {
    for(int j=0;j<5;j++)
    {
        if(i==A[j]) c++;
    }
    if(c==0)cout<<i<<' '; c=0;
  }
}