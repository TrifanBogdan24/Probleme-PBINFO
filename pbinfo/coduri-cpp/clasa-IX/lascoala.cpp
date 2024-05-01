// #3327 - LaScoala
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n, i, j, p, nr;

int main()
{
    cin >> n;
    p = sqrt(n);
    if (p * p == n)
        p--;
    
    cout << n - p * p << '\n';
    nr = p * p;
    for (i = 1; i <= p; i++)
    {
        for (j = 1; j <= p; j++)
        {
            cout << nr << ' ';
            nr--;
        }
        cout << '\n';
    }
    return 0;
}
