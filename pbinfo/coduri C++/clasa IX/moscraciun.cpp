// #3285 - MosCraciun
#include <iostream>
#include <fstream>
using namespace std;
long long x ,maxx;
int n, i, nr;

int main()
{
    cin >> n >> x;
    maxx = x;

    for (i = 2; i <= n / 2; i++)
    {
        cin >> x;
        maxx = max(x, maxx);
    }

    for (i = n / 2 + 1; i <= n; i++)
    {
        cin >> x;
        if (x > maxx)
            nr++;
    }

    cout<<nr;
    return 0;
}
