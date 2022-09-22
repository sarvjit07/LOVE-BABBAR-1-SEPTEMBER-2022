#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 4)
    {
        int j = 4, space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        while (j >= i)
        {
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
}