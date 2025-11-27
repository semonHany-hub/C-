#include<iostream>
using namespace std;

class monthlyExpenses
{
    float houseRent, salary;

    public:
    float household, transport, education;
    monthlyExpenses()
    {
        this->houseRent =0, household=0, transport=0, education=0;
    }
    monthlyExpenses( float houseRent, float transport, float education, float household, float salary)
    {
        this->houseRent = houseRent;
        this->transport = transport;
        this->education = education;
        this->household = household;
        this->salary = salary;
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

    float operator -( monthlyExpenses otherMonth)
    {
        return (this->salary-total()) - (otherMonth.salary-otherMonth.total());
    }

    float operator +(float bonus)
    {
        return this->salary + bonus - total();
    }

    void operator ++(int)
    {
        this->houseRent += 0.1*houseRent;
        this->transport += 0.1*transport;
        this->education += 0.1*education;
        this->household += 0.1*household;  
    }//for the postfix operator

        void operator ++()
    {
        this->houseRent += 0.1*houseRent;
        this->transport += 0.1*transport;
        this->education += 0.1*education;
        this->household += 0.1*household;  
    }//for the prefix operator

    bool operator ==(monthlyExpenses otherMonth)
    {
        if(this->salary-total()==otherMonth.salary-otherMonth.total())
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    operator int()
    {
        // (int)this->houseRent;
        // (int)this->transport;
        // (int)this->education;
        // (int)this->household;
        // (int)this->salary;
        return (int)this->total();
    }

    void display()
    {
        cout<<"House rent: "<<houseRent<<endl;
        cout<<"Transport: "<<transport<<endl;
        cout<<"Education: "<<education<<endl;
        cout<<"Household: "<<household<<endl;
        cout<<"Salary: "<<salary<<endl;
        cout<<"Total expenses: "<<total()<<endl;
    }

    int operator [](char index)
    {
        if(index=='R')
            return (int)houseRent;
        else if(index=='T')
            return (int)transport;
        else if(index=='E')
            return (int)education;
        else if(index=='H')
            return (int)household;
        else
            return (int)salary;
    }
};

int main()
{
    monthlyExpenses may(397.45, 3864.45, 33974.45, 3081, 200000),march(3589.45, 4689, 35785, 34556.65, 200000),jun(33764.56, 348654.45, 23968, 49872, 200000);
    cout<<"Difference in savings between May and March: "<<may-march<<endl;
    cout<<"Difference in savings between March and June: "<<march-jun<<endl;
    //1

    cout<<"the savings of june after adding the bonus is: "<<jun+348<<endl;
    //2

    ++may;
    march++;
    //3

    if(may==jun)
    {
        cout<<"May and June have the same savings"<<endl;
    }
    //4

    int totalMay=(int)may;
    cout<<"May total expenses in integer form: "<<totalMay<<endl;
    //5

    int mayHouserent= may['R'];
    cout<<"May house-rent in integer form: "<<mayHouserent<<endl;
    int mayHousehold= may['H'];
    cout<<"May household in integer form: "<<mayHousehold<<endl;
    int maySalary= may['S'];
    cout<<"May salary in integer form: "<<maySalary<<endl;
    //6
    //1
    
    return 0;
}