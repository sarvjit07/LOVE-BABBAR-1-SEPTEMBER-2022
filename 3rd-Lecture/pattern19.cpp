#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int row = 0;
    while (row <= n)
    {
        int col = 1;
        while (col <= n - row)
        {
            cout << "*";

            col++;
        }
        cout << endl;
        row++;
    }
}