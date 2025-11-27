#include<iostream>
using namespace std;
class Worker
{
    int salary;
    string name;
    //private attributes by default
    public:
      Worker(int s,string n)
      {
        salary=s;
        name=n;
      }
      friend void average(Worker ob1,Worker ob2,Worker ob3);
};
void average(Worker ob1,Worker ob2,Worker ob3)
{
    int sum=ob1.salary+ob2.salary+ob3.salary;
    int avg=sum/3;
    cout<<"the average of them salaries is "<<avg;
}
int main()
{
  Worker ob1(2000,"Ali"),ob2(3500,"Sara"),ob3(5000,"Ahmed");
  average(ob1,ob2,ob3);
}