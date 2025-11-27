#include<iostream>
using namespace std;
static int sum=0;
class Students
{
    private:
      string name;
      int grade;
      int age;
    public:
      Students()
      {
        cout<<"Give me your information:";
        cout<<"enter your name, please";
        cin>>name;
        cout<<"enter your age, please";
        cin>>age;
        cout<<"enter your grade, please";
        cin>>grade;
      }
      friend void average(Students ob[])
      {
        for(int i=0;i<20;i++)
        {
           sum+=ob[i].grade;
        }
        cout<<"the average of these students' grades is "<<sum/20;
      }
};
int main()
{
   Students object[20];
   average(object);
}