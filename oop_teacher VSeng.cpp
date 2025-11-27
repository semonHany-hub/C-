#include<iostream>
using namespace std;
class Teacher
{
    protected:
      string name;
      int salary;
    public:
      Teacher(string n, int s)
      {
        name = n;
        salary = s;
      }
      void get_salary()
      {
        cout<<salary<<endl;
      }
      friend void increasment(Teacher object)
      {
        if(object.name=="Ali")
        object.salary +=1000;
      }
};
class Engineer :public Teacher
{
    public:
      Engineer(string n, int s):Teacher(n, s)
      {

      };

       friend void increasment(Engineer object)
      {
        if(object.name=="Ahmed")
        object.salary +=1000;
      }
};

int main()
{
  Teacher ob1("Ali",1000);
  Engineer ob2("Ahmed",3000);
  increasment(ob1);
  increasment(ob2);
}