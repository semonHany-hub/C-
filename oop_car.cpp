#include<iostream>
using namespace std;
static int price;
 class Car
 {
   private:
     string trade_mark;
     string name;
     int max_speed;
  public:
     Car(string TM,string n,int p,int MS)
     {
        trade_mark = TM;
        name = n;
        price = p;
        max_speed = MS;
     }
     void display();
     friend void increasment(Car ob1);
 };
 void Car::display()
 {
   cout<<"it's price is "<<price<<endl;
 }

 void increasment(Car ob1)
 {
    ob1.price += 1000;
    cout<<"it's new price is "<<ob1.price;
 }

 int main()
 {
   Car ob1("Ga*war","MBW",50000,320);
   ob1.display();
   increasment(ob1);
   ob1.display();
 }
