#include<iostream>
using namespace std;
class Rectangle
{
    private:
      float length;
      float width;
      float area;
    public:
      Rectangle(float x, float y)
      {
        length = x;
        width = y;
        area=width*length;
      }
      void print();
      friend void bigger(Rectangle ob1, Rectangle ob2)
      {
        if(ob1.area>ob2.area) cout<<"the first rectangle is the bigger\n";
        else if(ob1.area<ob2.area) cout<<"the second rectangle is the bigger\n";
        else cout<<"Both rectangles have the same area\n";
      }
};
void Rectangle::print()
{
    cout<<"The area of the rectangle: "<<area;
}
int main()
{
  Rectangle ob1(6,2),ob2(8,3);
  ob1.print();
  ob2.print();
  bigger(ob1,ob2);
}