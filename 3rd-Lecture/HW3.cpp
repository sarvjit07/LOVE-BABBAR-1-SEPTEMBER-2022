#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper";
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lower";
    }
    else
    {
        cout << "numberic";
    }
}