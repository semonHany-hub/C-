#include<iostream>
using namespace std;
class Sum
{
    private:
      int x;
    public:
      void get_value()
      {
        cout<<"enter the the value of the operad"<<endl;
        cin>>x;
      }
      void operator + (Sum ob)
      {
        cout<<"their sum equal "<<x+ob.x<<endl;
      }

};
int main()
{
  Sum ob1,ob2;
  ob1.get_value();
  ob2.get_value();
  ob1+ob2;
}
//************************************************************************************************
class Sum
{
    private:
      int x;
    public:
      void get_value()
      {
        cout<<"enter the the value of the operad"<<endl;
        cin>>x;
      }
      void summation (Sum ob1,Sum ob2)
      {
        cout<<"their sum equal "<<ob1.x+ob2.x<<endl;
      }

};
int main()
{
  Sum ob1,ob2;
  ob1.get_value();
  ob2.get_value();
  ob1.summation(ob1,ob2);
}
//************************************************************************************************
class Sum
{
    private:
      int x;
    public:
      void get_value()
      {
        cout<<"enter the the value of the operad"<<endl;
        cin>>x;
      }
      void summation (Sum ob2)
      {
        cout<<"their sum equal "<<x+ob2.x<<endl;
      }

};
int main()
{
  Sum ob1,ob2;
  ob1.get_value();
  ob2.get_value();
  ob1.summation(ob2);
}