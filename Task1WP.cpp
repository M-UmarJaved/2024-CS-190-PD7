#include<iostream>
using namespace std;
void printStar(int);
main()
{
    int rowSize = 0;
    cout<<" Enter desired number of rows: ";
    cin >> rowSize;
    printStar(rowSize);

}
void printStar(int rowSize)
{
    for(int row = 1; row <= rowSize; row++)
    {
        for(int col = 1; col <= row; col++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
}