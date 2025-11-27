#include<iostream>
#include<cmath>
using namespace std;
void swapping(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

class point
{
    public:
    float x, y;
    point()
    {
        this->x=0;
        this->y=0;
    }
    point(float x, float y)
    {
        this->x = x;
        this->y = y;
    }
    void setCoordinates(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void displayPoint()
    {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

class monthlyExpenses
{
    float household, transport, education, houseRent;
    public:
    void setter(float hH, float trans, float edu, float hR)
    {
        household=hH;
        transport=trans;
        education=edu;
        houseRent=hR;
    }
    float getHousehold()
    {
        return household;
    }
    float getTransport()
    {
        return transport;
    }
     float getEducation()
    {
        return education;
    }
    float getHouserent()
    {
        return houseRent;
    }
    float total()
    {
        float Total=household+getTransport()+getEducation()+getHouserent();
        return Total;
    }  
};

float CalcDistance( point p1 , point p2 )
{
    int dx = p2.x - p1.x;
    int dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}
class Date
{
    int day, month, year;
    public:
    Date()
    {
        this->day=24;
        this->month=6;
        this->year=2022;
    }
    Date(int day, int month, int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void display()
    {
        cout<<this->day<<"/"<<this->month<<'/'<<this->year<<endl;
    }
};
int main()
{
    int num1 = 5, num2 = 10;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapping(num1, num2);
    cout << "After swapping by value: num1 = " << num1 << ", num2 = " << num2 << endl;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swap(num1, num2);
    cout << "After swapping by reference: num1 = " << num1 << ", num2 = " << num2 << endl;
    //1

    point p1, p2;
    p1.setCoordinates(3, 4);
    p1.displayPoint();
    p2.setCoordinates(6, 8);
    p2.displayPoint();
    float distance = CalcDistance(p1, p2);
    cout << "Distance between p1 and p2: " << distance << endl;
    //2

    float household, transport, education, houseRent;
    monthlyExpenses object1; 
    cout<<"Please, enter your household expenses: ";
    cin>>household;
    cout<<"Please, enter your transport expenses: ";
    cin>>transport;
    cout<<"Please, enter your education expenses: ";
    cin>>education;
    cout<<"Please, enter your housRent expenses: ";
    cin>>houseRent;
    object1.setter(household, transport, education, houseRent);
    cout<<"the total expenses is: "<<object1.total()<<endl;
    //3

    Date date1(24, 4, 2005);
    date1.display();
    //4
}
