#include <iostream>
using namespace std;
int main(){
    int fast_duration;   string suhoor_time,current_time;
   cout<<"please,enter the fast time then the current time in hours and minutes then enter the fast duration in minutes.";
    cin>>suhoor_time>>current_time>>fast_duration;
    int suhoor=((suhoor_time[0]-48)*10+(suhoor_time[1]-48))*60+((suhoor_time[3]-48)*10+suhoor_time[4]);
    int current=((current_time[0]-48)*10+(current_time[1]-48))*60+((current_time[3]-48)*10+current_time[4]);
 if(current>=suhoor&&current<fast_duration+suhoor)
 cout<<"it's a fast time"; 
 else cout<<"it's not a fast time"; 
}