#include <iostream>
using namespace std;

// Function Signature
void PrintCounting(int n)
{
    // Function Body
    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    // Function Call
    PrintCounting(n);
}