#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 4)
    {
        int col = 1;
        // int value = i;
        while (col <= i)
        {
            cout << i + col - 1;
            // value++;
            col++;
        }
        cout << endl;
        i++;
    }
}