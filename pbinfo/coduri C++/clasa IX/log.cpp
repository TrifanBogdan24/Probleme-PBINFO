// #2747 - Log
#include <iostream>
#include <cmath>
using namespace std;

long long n, m, nr;

int main()
{
    cin >> n >> m;

    if (m == 1)
        cout << '0';
    else if (m == n)
        cout << '1';
    else {
        while (m != 1)
        {
            nr++;
            m = m / n;
        }
        cout << nr;
    }

    return 0;
}
