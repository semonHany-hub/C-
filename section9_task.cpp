#include<iostream>
using namespace std;
void swaping(int x,int y)
{
    int z=x;   x=y;    y=z;
    cout<<x<<' '<<y;
}
int main(){
    int x,y;   cout<<"please,enter two numbers to swap them\n ";
    cin>>x>>y;
    swaping(x,y);
}