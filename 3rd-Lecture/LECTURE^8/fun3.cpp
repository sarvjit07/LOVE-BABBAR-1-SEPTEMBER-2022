#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = fact(n);
    int demon = fact(r) * fact(n - r);
    return num / demon;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;
}