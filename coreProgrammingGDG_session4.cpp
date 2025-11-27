#include<iostream>
#include<string>
using namespace std;
class MonthlyExpenses{
    float householdExpenses, transportExpenses, educationExpenses, houserentExpenses, totalExpenses;

    public:
    MonthlyExpenses(){}
    MonthlyExpenses( float householdExpenses ,float transportExpenses ,float educationExpenses, float houserentExpenses)
    {
        this->householdExpenses = householdExpenses;
        this->transportExpenses = transportExpenses;
        this->educationExpenses = educationExpenses;
        this->houserentExpenses = houserentExpenses;
        totalExpenses = householdExpenses+transportExpenses+educationExpenses+houserentExpenses;
    }

    float getHouseholdExpenses()
    {
        return householdExpenses;
    }
    float getTransportExpenses()
    {
        return transportExpenses;
    }
    float getEducationExpenses()
    {
        return educationExpenses;
    }
    float getHouserentExpenses()
    {   
        return houserentExpenses;
    }

    float operator + (MonthlyExpenses other)
    {
        return this->totalExpenses + other.totalExpenses;
    }
    float operator - (MonthlyExpenses other)
    {
        return this->totalExpenses - other.totalExpenses;
    }
    float operator +(int num)
    {
        return this->totalExpenses + num;
    }
    MonthlyExpenses operator ++(int)
    {
        MonthlyExpenses temp=*this;
        this->householdExpenses+=0.1*this->householdExpenses;
        this->transportExpenses+=0.1*this->transportExpenses;
        this->educationExpenses+=0.1*this->educationExpenses;
        this->houserentExpenses+=0.1*this->houserentExpenses;
        return temp;
    }
    bool operator == (MonthlyExpenses other)
    {
        return this->totalExpenses == other.totalExpenses;
    }
    operator int()
    {
        return (int)this->totalExpenses;
    }

    float operator [](char ch)
    {
        switch(ch)
        {
            case 'H':
                return householdExpenses;
                break;
            case 'T':
                return transportExpenses;
                break;
            case 'E':
                return educationExpenses;
                break;
            default:
                cout<<"Invalid choice!";
                return -1;
        }
    }
};

int main()
{
    MonthlyExpenses May(1000,500,200,800);
    MonthlyExpenses March(1500,700,300,900);

    int sum=May+March;
    cout<<"the sum of the total expences of may and march: "<<sum<<endl;

    int savings=May-March;
    cout<<"the difference between the total expences of may and march: "<<savings<<endl;

    int bonus=May+100;
    cout<<"the total expences of may after adding a bonus of 100: "<<bonus<<endl;
    MonthlyExpenses MaybeforeInflation=May++;

    MonthlyExpenses Jun(1200,600,400,1000);
    if(Jun==May)
    {
        cout<<"The expences of June are equal to May."<<endl;
    }

    int totalMay=(int)May;
    cout<<"The total expences of May in integer format: "<<totalMay<<endl;

    int mayHouseRent=May['H'];  int mayEduExp=May['E'];  int mayTrspExp=May['T'];
    cout<<"May's house rent: "<<mayHouseRent<<", education expenses: "<<mayEduExp<<", transport expenses: "<<mayTrspExp<<endl;
}