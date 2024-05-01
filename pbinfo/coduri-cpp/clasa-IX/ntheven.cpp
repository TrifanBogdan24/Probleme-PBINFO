// #2912 - ntheven
#include <iostream>
#include <cstring>
using namespace std;
int v[100], i, j, t, p = 2, n, a[100];
char s[100];

int main()
{
    cin.get(s,100);
    n = strlen(s);
    for (i = 0; i < n; i++)
        v[n - i] = int(s[i]) - int('0');

    v[0] = n;
    t = 0;
    i = 1;
    while (i <= n)
    {
        t = t + v[i] * 2;
        v[i] = t % 10;
        t = t / 10;
        i++;
    }
    if (t)
        cout << t;

    for (i = n; i >= 1; i--)
        cout << v[i];

    return 0;
}
