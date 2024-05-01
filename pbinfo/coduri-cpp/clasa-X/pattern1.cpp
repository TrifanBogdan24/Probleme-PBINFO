// #1952 - pattern1
#include <iostream>

using namespace std;

int n, q, a[1500][1500];

void Divide(int i1, int j1, int l, int x)
{
    if (l > 1)
    {
        for (int i = i1; i < i1 + l; i++)
            a[i][j1 + l / 2] = 0;
        
        for (int j = j1; j < j1 + l; j++)
            a[i1 + l / 2][j] = 0;
        
        a[i1 + l / 2][j1 + l / 2] = x;

        l = l / 2;
        x--;

        Divide(i1, j1, l, x);

        Divide(i1 + l + 1, j1, l, x);

        Divide(i1, j1 + l + 1, l, x);

        Divide(i1 + l + 1, j1 + l + 1, l, x);
    }
    else if (l == 1)
        a[i1][j1] = 1;
}

int pow(int x)
{
    if (x == 0)
        return 1;
    else
        return 2 * pow(x - 1);
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    cin >> n;
    q = n;
    n = pow(n) - 1;

    Divide(1, 1, n, q);
    afis();

    return 0;
}
