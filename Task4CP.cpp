#include<iostream>
using namespace std;
int triDots(int triNum);
main()
{
    int triNum, result;
    cout<<" Enter number of Triangle: ";
    cin>> triNum;
    result = triDots(triNum);
    cout<<" Dots in the Triangle: "<<result;
}
int triDots(int triNum)
{
    int j = triNum, sum = 0;
    for(int i = 1; i <= triNum; i++)
    {
        
        sum = sum + j;
        j--;
    }
    return sum;
}