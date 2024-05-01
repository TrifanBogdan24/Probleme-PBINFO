// #2410 - ProdusXXL
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
fstream f("produsxxl.in");
ofstream g("produsxxl.out");
int n, m, i, j, nr, t, c;
int v1[10000], v2[10000], aux[10000], produs[10000];
long long x,y;
char s[9];

int main()
{
    f >> v1[0];
    for (i = v1[0]; i >= 1; i--)
        f >> v1[i];
    f >> v2[0];
    for (i = v2[0]; i >= 1; i--)
        f >> v2[i];

    if (v1[0] < v2[0])
    {
        for (i = 0; i<= v1[0]; i++)
            aux[i] = v1[i];

        for (i = 0; i<= v2[0]; i++)
            v1[i] = v2[i];

        for (i = 0; i <= aux[0]; i++)
            v2[i] = aux[i];
    }

    t = 0;
    for (i = 1; i <= v1[0]; i++)
    {
        for (j = 1; j <= v2[0]; j++)
            produs[i + j - 1] += v1[i] * v2[j];

    }
    produs[0] = v1[0] + v2[0] - 1;
    t = 0;
    i = 1;
    while (i <= produs[0])
    {
        t += produs[i];
        produs[i] = t % 10;
        t = t / 10;
        i++;
    }

    while (t)
    {
        produs[0]++;
        produs[produs[0]]=t;
        t = t / 10;
    }
    for (i = produs[0]; i >= 1; i--) g << produs[i];
    return 0;
}