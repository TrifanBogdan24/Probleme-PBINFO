// #1569 - ScaraNumerelor
#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            for (int d = 1; d <= i; d++) cout << i;
            cout << '\n';
        }
    }

    return 0;
}
