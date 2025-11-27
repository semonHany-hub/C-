#include <iostream>
using namespace std;
class Calc
{
 private:
     float n1,n2;

 public:
     Calc() //default constructor
     {
        cout<<"please enter the first number\n";
        cin>>n1;
        cout<<"please enter the second number\n";
        cin>>n2;
     }

     Calc(int fir,int sec) //parameterised constructor
     {
       n1=fir;
       n2=sec;
     }

     void Sum()
     {
       int sum=n1+n2;
       cout<<sum<<endl;
     }

     void division()
     {
       float result=n1/n2;
       cout<<result<<endl;
     }

     void mod()
     {
       int result=int(n1)%int(n2);
       cout<<result<<endl;
     }

     void  mult()
     {
       float result=n1*n2;
       cout<<result<<endl;
     }
};

int main()
{
 Calc ob1;
 ob1.Sum();
 ob1.mult();
 ob1.division();
 ob1.mod();

 Calc ob2(5,3);
 ob2.Sum();
 ob2.mult();
 ob2.division();
 ob2.mod();

}