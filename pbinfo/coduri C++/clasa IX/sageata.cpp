// #2281 - Sageata
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int i, j, n;

int main()
{
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++) cout << ' ';
        for (j = 1; j <= n; j++) cout << '*';
        cout << '\n';
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++) cout << ' ';
        for (j = 1; j <= n; j++) cout << '*';
        cout << '\n';
    }
 return 0;
}
