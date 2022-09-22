#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 2, 2, 3, 2, 2};
    int visited[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < 5; i++)
    {
        if (visited[i] == 0)
        {
            int count = 1;
            for (int j = i + 1; j < 5; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1;
                }
            }
            cout << arr[i] << "  occurs  " << count << endl;
        }
    }
}