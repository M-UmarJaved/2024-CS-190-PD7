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
    for(int row = rowSize; row >= 1; row--)
    {
        for(int col = row; col >= 1; col--)
        {
            cout<< "*";
        }
        cout<< endl;
    }
}