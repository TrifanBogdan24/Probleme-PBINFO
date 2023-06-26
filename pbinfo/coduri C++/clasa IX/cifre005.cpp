// #2238 - cifre005
#include <iostream>

using namespace std;

long long x;
int n, r, i, nr;

int main()
{
    cin >> n >> r;
    for (i = 1; i <= n; i++)
    {
        cin >> x;

        if ((x - r) % 9 == 0)
            nr++;
    }
    cout << nr;
    return 0;
}
