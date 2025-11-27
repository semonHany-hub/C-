#include<iostream>
using namespace std;
class geo_shape
{
    public:
    geo_shape()
    {
        cout<<"parent class\n";
    }

    geo_shape(int)
    {
    }
   virtual float calcArea()

    {
        return 0;
    }
    float sumOfAllShapesAreas(geo_shape *shape1, geo_shape *shape2, geo_shape *shape3)
    {
        return shape1->calcArea() + shape2->calcArea() + shape3->calcArea();
    }
};
class rectangle:public geo_shape
{
    float length, width;
    public:
    rectangle():geo_shape(7)//constructor chaining
    {
        length=7;
        width=3;
    }
    rectangle(float l, float w)
    {
        length=l;
        width=w;
    }
    float calcArea()
    {
        return length*width;
    }
};
class triangle:public geo_shape
{
    float base, height;
    public:
    triangle()
    {
        base=20;
        height=8;
    }
    triangle(float b, float h):geo_shape(7)
    {
        base=b;
        height=h;
    }
    float calcArea()
    {
        return 0.5*base*height;
    }
};

float sumOfAllShapesAreas(geo_shape *shape1, geo_shape *shape2, geo_shape *shape3)
{
    return shape1->calcArea() + shape2->calcArea() + shape3->calcArea();
}

int main()
{
    rectangle r(8, 3);
    triangle t;
    triangle t2(10, 5);
    cout<<"the total area is: "<<r.sumOfAllShapesAreas(&r, &t, &t2);
}