// #944 - rest
#include <iostream>
#include <fstream>
using namespace std;
long long n, x, Max = -2;
int v[30], nr, i, j;

int main()
{
    cin >> n;
    x = n;

    while (x)
    {
        v[++nr] = x % 10;
        x /= 10;
    }


    for (i = 1; i <= nr /2; i++)
        swap(v[i], v[nr - i + 1]);

    for (i = 1; i <= nr; i++)
    {
        x = 0;
        for (j = 1; j < i; j++)
            x = x * 10 + v[j];
        
        for (j = i + 1; j<= nr; j++)
            x = x * 10 + v[j];

        if (x)
            Max = max(Max, n % x);
    }
    cout << Max;
    return 0;
}
