// #1485 - Jumatate1
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
fstream f("jumatate1.in");
ofstream g("jumatate1.out");
int n, i, v[20];
char c;
long long x, y;

int main()
{
    while (f >> c)
        v[++n] = c - '0';

    for (i = 1; i <= n / 2; i++)
        x = x * 10 + v[i];
    for ( i= n / 2 + 1; i <= n; i++)
        y = y * 10 + v[i];

    while (x != y)
    {
        if (x > y) x = x - y;
        else y = y - x;
    }
    g << x;
    return 0;
}
