#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    char value = 'A';
    while (i <= 4)
    {
        int j = 1;
        while (j <= i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}