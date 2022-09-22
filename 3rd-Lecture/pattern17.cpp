#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    while (row <= 4)
    {
        int col = 1;
        char start = 'A' + 4 - row;
        while (col <= row)
        {
            cout << start;
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
}