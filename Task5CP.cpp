#include<iostream>
using namespace std;
bool isPrime(int);
main()
{
    int number;
    cout<<"Enter number: ";
    cin>> number;
    cout<<isPrime(number);
}
bool isPrime(int number)
{
    bool result;
    for(int x = 2; x< number; x++)
    {
        
        if(number % x == 0)
        {
            return false;
        }
    }
    
   return true;

}