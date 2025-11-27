#include<iostream>
#include<cmath>
using namespace std;
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
    float CalcDistance( point p1 , point p2 )
    {
        int dx = p2.x - this->x;
        int dy = p2.y - this->y;
        return sqrt(dx*dx + dy*dy);
    }
};

class monthlyExpenses
{
    float houseRent;

    public:
    float household, transport, education;
    monthlyExpenses()
    {
        this->houseRent =0, household=0, transport=0, education=0;
    }
    monthlyExpenses( float houseRent, float transport, float education, float household)
    {
        this->houseRent = houseRent;
        this->transport = transport;
        this->education = education;
        this->household = household;
    }
    void setHouseRent(float hR)
    {
        this->houseRent=hR;
    }
    float getHousehold()
    {
        return this->household;
    }
    float total()
    {
        float Total=this->household+ this->transport+ this->education+ this->houseRent;
        return Total;
    }  
    float subtract2Monthes(monthlyExpenses otherMonth)
    {
        return this->total()- otherMonth.total();
    }
};

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
    int subtract2Dates(Date date2)
    {
        int days=0;
        days+=date2.day - this->day;
        days+=(date2.month - this->month)*30;
        days+=(date2.year - this->year)*365;
        return days;
    }
};
int main()
{
    point p1, p2;
    p1.setCoordinates(3, 4);
    p1.displayPoint();
    p2.setCoordinates(6, 8);
    p2.displayPoint();
    float distance = p1.CalcDistance(p1 , p2);
    cout << "Distance between p1 and p2: " << distance << endl;
    //1

    float household, transport, education, houseRent;
    cout<<"Please, enter your household expenses: ";
    cin>>household;
    cout<<"Please, enter your transport expenses: ";
    cin>>transport;
    cout<<"Please, enter your education expenses: ";
    cin>>education;
    cout<<"Please, enter your housRent expenses: ";
    cin>>houseRent;
    monthlyExpenses object1(houseRent, transport, education, household); 
    cout<<"the total expenses is: "<<object1.total()<<endl;

    monthlyExpenses object2(873.56, 5739, 578.76, 5000); 
    cout<<"the difference between the total expences at these two monthes is: "<<object1.subtract2Monthes(object2)<<endl;
    //2

    Date date1(24, 4, 2022);
    date1.display();
    Date date2;
    cout<<"the difference between the two dates is: "<<date1.subtract2Dates(date2);
    //3
    
    //this-> is a pointer refers to the address of the caller object
}