#include<iostream> //for input and output commands
#include<stdlib.h> // for the rand function
#include<ctime> // for the time function
#include<cmath>  // for in_built functions
using namespace std;
int main()      //for loop
{for(int i=1;i<=100;i++)
{cout<<"student number:  "<<i<<endl;}

int month = 6;
int week = 4;
for(int M=1;M<=month;M++)
{cout<<"month: "<<M<<endl;
for(int w=1;w<=week;w++)
{cout<<"week: "<<w<<endl;}}

float number; double sum=0;
cout<<"please enter a positive number";
cin>>number; 
while(number>0);
{sum+=number;
cout<<"enter another positive number if you want to continue summing,but if you don't,enter 0";
cin>>number;}
cout<<"the sum is equal"<<sum<<endl;

int x=1;
do{cout<<x<<"  FCI";x++;}
while(x<=50);
cout<<"          ********************************\n";
srand(time(0)); //تعمل على تغيير الارقام العشوائية فى كل مرة يتم فيها تشغيل البرنامج وذلك اعتمادا على تغير الرقم داخل اقواس الدالة ودالة التايم تحسب الثوانى بدءا من 1970 حتى تاريخ صنع الجهاز اتوماتيكيا ع 
cout<<rand()%10<<endl;//يتم اظهار رقم عشوائي اصغر من 10
  //يتم استخدام الكود لحصر الرقم العشوائي بين القيمة الابتدائية والنهائية د(start+rand()%(end-start+1))
/*% used with integers only but there's a function called fmod( , ) used for float data*/
cout<<fmod(5.6%3.5)<<endl<<pow(2,3)<<endl; /*the first number is the base whereas the second is the exponent*/
cout<<exp(2)<<endl;  //an exponential function its base is e which equals 2.718 and the exponent is  2
cout<<max(1,2)<<<endl<<min(1,2)<<endl<<fabs(-2)<<endl;
cout<<sin(90)<<endl<<cos(0)<<endl<<tan(45)<<endl;
cout<<sqrt(9)<<endl<<floor(4.6)<<endl<<ceil(3.7)<<endl;


return 0;}