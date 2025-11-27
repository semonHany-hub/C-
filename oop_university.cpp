#include<iostream>
using namespace std;
class Student
{
    private:
      string name;
      int age;
      int grade;
      int id;
    public:
      Student()
      {
        cout<<"what's your name?"<<endl;
        cin>>name;
        cout<<"what's your age?"<<endl;
        cin>>age;
        cout<<"and what's your grade?"<<endl;
        cin>>grade;
        cout<<"what's your id?"<<endl;
        cin>>id;
      }
    friend class University;
};

class University:public Student
{
    public:
      void print(Student ob)
      {
        cout<<"student's name is "<<ob.name<<endl;
        cout<<"his age is "<<ob.age<<endl;
        cout<<"his grade is "<<ob.grade<<endl;
        cout<<"his id is "<<ob.id<<endl;
      }
};
int main()
{
  Student ob1;
  University ob2;
  ob2.print(ob1);
}