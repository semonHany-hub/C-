#include<iostream>
#include<algorithm>
using namespace std;
int squareArea(int rip)
{
    return rip * rip;
}
float triangleArea(float base, float height)
{
    return 0.5* base * height;
}
int isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')?1:0;
}
void inputGrades(float grades[], int size)
{
    cout<<"Enter the grades: ";
    for(int i=0; i<size; i++)
    {
        cin>>grades[i];
    }
}
void displayGrades(float grades[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<grades[i]<<" ";
    }
    cout<<endl;
}
int findMax(int arr[], int arrSize )
{
    int max=arr[0];
    for(int i=1; i<arrSize; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int removeDuplicates(int nums [],int size)
{
    int counter=0;
    sort(nums, nums+size);
    for(int i=0;i<size;i++)
    {
        if(nums[i]==nums[i+1])
        {
            counter++;
        }
    }
    return size-counter;
}
void numOfEvenAndOdd(int * arr , int size,int *evenCount,int *oddCount)
{
    *evenCount=0;
    *oddCount=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            (*evenCount)++;
        }
        else
        {
            (*oddCount)++;
        }
    }
}
int main()
{
    int rip;
    float base, height;
    cout<<"Enter the rip length of a square: ";
    cin>>rip;
    cout<<"The area of the square is: "<<squareArea(rip)<<endl;
    cout<<"Enter the base and height of a triangle: ";
    cin>>base>>height;
    cout<<"The area of the triangle is: "<<triangleArea(base, height)<<endl;
    return 0;
    //1

    char c;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<(isVowel(c)?"The character is a vowel":"The character is not a vowel")<<endl;
    //2
    
    float grades[4];
    inputGrades(grades, 4);
    cout<<"Grades entered: ";
    displayGrades(grades, 4);
    //3

    int size2;
    cout<<"Enter the size of an array you want: ";
    cin>>size2;
    int arr[size2];
    cout<<"Enter an array to find the maximum number of it: ";
    for(int i=0; i<size2; i++)
    {
        cin>>arr[i];
    }
    cout<<"The maximum number is: "<<findMax(arr, size2)<<endl;
    //4

    int nums[5]={3, 7, 2, 9, 5};
    cout<<"Array size after removing duplicates: "<<removeDuplicates(nums, 5)<<endl;
    //5

    int evenCount, oddCount;
    numOfEvenAndOdd(nums, 5, &evenCount, &oddCount);//passing by address not by reference
    cout<<"Number of even elements: "<<evenCount<<endl;
    cout<<"Number of odd elements: "<<oddCount<<endl;
    //6

    /*for allocating a space in the heap we use the keyword new int or new int[] for allocating a space for array
    and the keyword delete pointerName for deallocating ths space */
    // int *p = new int(5);
    //\ *p = 10;
    // cout << "Value of p: " << *p << endl;
    // delete p;

    int size3;
    cout<<"Please, enter the number of items you want to buy.";
    cin>>size3;
    int *p = new int[size3];
    for(int i=0; i<size3; i++)
    {
        cout<<"Enter the price of item "<<i+1<<": ";
        cin>>p[i];
    }
    for(int i=0; i<size3; i++)
    {
        cout<<"Item "<<i+1<<" price: "<<p[i]<<endl;
    }
    //7
    //assignment no.3 in word file
}