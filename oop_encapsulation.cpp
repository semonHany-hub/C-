#include<iostream>
using namespace std;
class Student
{
  private:
    string name;
    int mark;
  public:
    Student(string n,int m)
    {
      name=n;
      mark=m;
    }
    Student()
    {
      cout<<"please,enter your name"<<endl;
      cin>>name;
      cout<<"please,enter your mark"<<endl;
      cin>>mark;
    }
    friend void sum(Student ob1,Student ob2,Student ob3);

    void checkMarks(Student ob1,Student ob2,Student ob3);

};

void sum(Student ob1,Student ob2,Student ob3)
{
    cout<<ob1.mark+ob2.mark+ob3.mark;
}

void Student::checkMarks(Student ob1,Student ob2,Student ob3)
 {
     if(ob1.mark>ob2.mark&&ob1.mark>ob3.mark) cout<<ob1.mark<<" "<<ob1.name;
     else if(ob2.mark>ob1.mark&&ob2.mark>ob3.mark) cout<<ob2.mark<<" "<<ob2.name;
     else cout<<ob3.mark<<" "<<ob3.name;
    }
int main()
{
  Student ahmed,ali,nour;
  sum(ahmed,ali,nour);
  cout<<endl;
  ali.checkMarks(ahmed,ali,nour);
}
