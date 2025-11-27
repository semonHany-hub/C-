#include<iostream>
using namespace std;
int main(){
    int x,y;   cin>>x>>y;
    cout<<"the odd nums are: ";
    for(int i=x;i<=y;i++)
    {
        if(i%2==1) cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the even nums are: ";
     for(int i=x;i<=y;i++)
    {
        if(i%2==0) cout<<i<<" ";
    }
}
//take two nums from user and swap them using programmer_defined functions. //ninth section