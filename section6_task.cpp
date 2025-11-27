#include<iostream>
using namespace std;
int main(){
    int x,y,c=1;  char z; 
    for(int i=0;c==1;i++)
    {
    cout<<"enter two numbers then the operator you want";
    cin>>x>>y>>z;
    switch(z){
    case '+':
      cout<<x+y;  break;
    case '*':
      cout<<x*y;  break;
    case '/':
      cout<<x/y;  break;
    default:
      cout<<x-y;
      cout<<"if you want to continue, click 1 ,else click 0";
      cin>>c;
   }
   return 0;}
    //************************************************************************************************
while(c==1)
    {
    cout<<"enter two numbers and the operator you want";
    cin>>x>>y>>z;
    switch(z){
    case '+':
      cout<<x+y<<endl;  break;
    case '*':
      cout<<x*y<<endl;  break;
    case '/':
      cout<<x/y<<endl;  break;
    default:
      cout<<x-y<<endl;
      cout<<"if you want to continue, click 1 ,else click 0";
      cin>>c;
   }
   //**********************************************************************************************************
   do{
  cout<<"enter two numbers and the operator you want";
    cin>>x>>y>>z;
    switch(z){
    case '+':
      cout<<x+y<<endl;  break;
    case '*':
      cout<<x*y<<endl;  break;
    case '/':
      cout<<x/y<<endl;  break;
    default:
      cout<<x-y<<endl;
      cout<<"if you want to continue, click 1 ,else click 0";
      cin>>c;
     } 
     while(c==1);
     //the seventh sec task : take 0<two nums<100 from user and print a num that not negative and less than 10 and not equal the sum of the nums.
     //استقبل من المستخدم وقت السحور والوقت الحالى ومدة الصيام بالدقيقة واطبع هل الوقت الحالى وقت صيام ام افطار 
     //print all numbers between 1 and 10 that not equal the sum of two received nums and the sum of these nums.
     //take 5 nums then a num and print nums from 0 to that num that not equal any of the five nums.
     //take a num then in a loop take other nums (that less than the first) gradually and print their sum.
     //take two nums and print all odd and even nums separately between them .it,s quarantee the first is less