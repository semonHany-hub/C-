#include <iostream>
using namespace std;
int main(){/*تحويل الدرجة سيلزيوس لفهرنهايتى*/
cout<<"please enter a celsius degree"<<endl;
double celsius;       cin>>celsius;
cout<<"the same degree with fahrenheit will be: "<<9.0/5.0*celsius+32<<endl;
cout<<"          ***************************"<< endl;
/*إيجاد مساحة وحجم الدائرة*/
cout<<"enter the r of the circle to execute its area and surround";
int r; cin>>r;
cout<<"the area will be: "<<(22.0/7.0*(r^2))<<"and the surround is: "<<2*22.0/7.0*r<<endl;
return 0;}//عند كتابة ثابت كسرى فانه يجب وضع البسط او المقام او كليهما فى صورة عشرية والجزء العشرى يساوى 0 فى حالة العدد الصحيح وذلك حتى يكون الناتج عشرى كما هو ان وجد 