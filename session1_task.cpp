#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string name, gender;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your gender: ";
    cin>>gender;
    if(gender=="male")
    {
        cout<<"Hello, Mr. "<<name<<endl;
    }
    else if(gender=="female")
    {
        cout<<"Hello, Mrs. "<<name<<endl;
    }
    else
    {
        cout<<"Invalid gender entered. Please enter either male or female."<<endl;
    }
    //1

    int prices[4]={}, sum=0;
    cout<<"Enter the prices of four items: ";
    for(int i=0;i<4;i++)
    {
        cin>>prices[i];
        sum+=prices[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<"Item "<<(i+1)<<" price: "<<prices[i]<<endl;
    }
    cout<<sum<<endl;
    //2

    for(int i=0;i<=10;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    /*   for(int i=0;i<=10;i+=2)
    {
        cout<<i<<" ";
    }*/ 

    //3

    int num1, num2;  char operat;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"enter the operator: ";
    cin>>operat;
    switch(operat)
    {
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            if(num2!=0)
            {
                cout<<num1/num2;
            }
            else
            {
                cout<<"Error! Division by zero is not allowed.";
            }
            break;
        default:
            cout<<"Error! Invalid operator.";
    }
    cout<<endl;
    //4

    int Max=prices[0], Min=prices[0];
    for(int i=0;i<4;i++)
    {
        if(prices[i]>Max)
        {
            Max=prices[i];
        }
        if(prices[i]<Min)
        {
            Min=prices[i];
        }
    }
    cout<<"Maximum price: "<<Max<<endl;
    cout<<"Minimum price: "<<Min<<endl;
    //5

    int minutes;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    int weeks=minutes/(7*24*60);
    minutes=minutes%(7*24*60);
    int days=minutes/(24*60);
    cout<<"it represent "<<weeks<<" weeks and "<<days<<" days.\n";
    //6

    char check='f';
    
    while(check!='e')
    {
        cout<<"please enter character a for add prices, d for displaying them or e for exit";
        cin>>check;
        if(check=='a')
        {
            for(int i=0; i<4;i++)
            {
                cout<<"Enter the price of item "<<(i+1)<<": ";
                cin>>prices[i];
            }
        }
        else if(check=='d')
        {
            for(int i=0; i<4; i++)
            {
                cout<<"Item "<<(i+1)<<" price: "<<prices[i]<<endl;
            }
        }
        else if(check!='e')
        {
            cout<<"Error! Invalid input. Please enter a, d, or e.";
        }
    }
    //7

    int fibonacci, term1=0, term2=1;
    cout<<"Enter the position of the Fibonacci number to be calculated: ";
    cin>>fibonacci;
    cout<<1<<", ";
    for(int i=0;i<fibonacci-1;i++)
    {
        int temp=term1+term2;
        cout<<temp<<", ";
        term1=term2;
        term2=temp;
    }
    cout<<term1+term2<<endl;
    //8

    int prime, flag=0;
    cout<<"Enter a number to check if it is prime or not: ";
    cin>>prime;
    for(int i=2;i<prime;i++)
    {
        if(prime%i==0)
        {
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        cout<<prime<<" is a prime number.";
    }
    else
    {
        cout<<prime<<" is not a prime number.";
    }
    cout<<endl;
    //9

    int reversed[5]={3, 7, 2, 9, 5};
    reverse(reversed, reversed+5);
    for(int i=0; i<5; i++)
    {
        cout<<reversed[i]<<" ";
    }
    cout<<endl;
    //10

    int size, c=0;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int palindrome[size];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<size; i++)
    {
        cin>>palindrome[i];
    }
    for(int i=0;i<size;i++)
    {
        if(palindrome[i]!=palindrome[size-(i+1)])
        {
            c++;
            break;
        }
    }
    if(!c)
    {
        cout<<"The array is a palindrome.";
    }
    else
    {
        cout<<"The array is not a palindrome.";
    }
    //11
}