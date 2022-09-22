#include <iostream>
using namespace std;
int main()
{
    int row = 1;
    while (row <= 4)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}