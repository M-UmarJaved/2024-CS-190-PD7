#include<iostream>
using namespace std;
void aplified(int);
main()
{
    int number;
    cout<<" Enter the number to Amplify: ";
    cin>> number;
    aplified(number);
}
void aplified(int number)
{
    for(int x = 1; x<=number; x++)
    {
        if(x % 4 == 0)
        {
            cout<<(x * 10)<< ", ";
        }
        if(x % 4 != 0)
        {   
            cout<< x <<", ";
        }
        
    }
}