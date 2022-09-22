#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <= 4)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}