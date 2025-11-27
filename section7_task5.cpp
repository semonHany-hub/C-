#include<iostream>
using namespace std;
int main(){
    int num,c=1,sum=0,N;   cout<<"please, enter a big num";
    cin>>num;
    while(c==1)
    { 
     cout<<"please, enter a num less than the first";
    cin>>N;   sum+=N;
   cout<<"sum until now is "<<sum<<endl;
   cout<<"if you want to continue enter 1, else enter 0";
   cin>>c;
}