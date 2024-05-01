// #514 - SortPIE
#include <iostream>
#include <algorithm>
using namespace std;
int n, i, j;
long long v[10000], aux;

bool prime(int x, int y)
{
    while (x != y)
    {
        if (x > y) x = x - y;
        else y = y - x;
    }
    if (x == 1) return 1;
    else return 0;
}

bool cmp(int x, int y)
{
    if (x < y) return 0;
    else return 1;
}

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];
    aux = v[n];
    sort(v + 1, v + n + 1, cmp);
    for (i = 1; i <= n; i++)
    {
        if (prime(aux, v[i]) == 1)
            cout << v[i] << ' ';
    }
    return 0;
}
