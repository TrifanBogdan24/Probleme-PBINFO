// #1307 - Siruri1
#include <iostream>

using namespace std;

int n, v[505], x[505], nr;
bool a[505];
bool OK = 1;

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
}

void afis()
{
    if (OK == 1)
    {
        cout << "Sirul Y este vid.";
        return;
    }

    for (int i = 1; i <= nr; i++)
        cout << x[i] << ' ';
}

bool prim(int q)
{
    if (q == 1)
        return 0;

    for (int d = 2; d * d <= q; d++)
        if (q % d == 0)
            return 0;

    return 1;
}

bool putere(int q, int D)
{
    return (q % D == 0 && (q / D) % D != 0);
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
    {
        for (int d = 2; d <= v[i]; d++)
        {
            if (putere(v[i], d) == 1 && prim(d) == 1)
            {
                if (a[d] == 0)
                {
                    a[d] = 1;
                    x[++nr] = d;
                    OK = 0;
                }
            }
        }
    }
    for (int i = 1; i < nr; i++)
        for (int j = i + 1; j <= nr; j++)
            if (x[i] > x[j])
                swap(x[i], x[j]);

    afis();
    cout << '\n';
    return 0;
}
