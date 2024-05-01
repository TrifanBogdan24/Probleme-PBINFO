// #2914 - nthodd
#include <iostream>
#include <cstring>
using namespace std;
int i, j, t, p = 2, n, v[100], a[100];
char c[100];

int main()
{
    cin.get(c,100);
    if (strlen(c )== 1)
        cout << (c[0] - '0') * 2 - 1;
    else 
    {
        n=strlen(c);
        for (i = 0; i < n; i++)
            v[i] = c[i] - '0';

        for (i = n - 1 ; i >= 0 ; i--)
        {
            a[i] = (2 * v[i] + t) % 10;
            t = (2 * v[i] + t) / 10;
        }   // al n-lea nr impar = 2*(n-1)+1=2*n-1 -> cu 1 mai putin decat al n-lea nr par(2*n)

        i = n - 1;
        a[n - 1]--;
        while (i > 0 && a[i] < 0)
        {
            a[i - 1]--;
            a[i] = 10 + a[i];
            i--;
        }
        if (a[0] < 0)
        {
            for (i = 1; i < n; i++)
                cout << a[i];
        } else
        {
            for (i = 0 ; i < n ; i ++)
                cout << a[i];
        }
    }
    return 0;
}
