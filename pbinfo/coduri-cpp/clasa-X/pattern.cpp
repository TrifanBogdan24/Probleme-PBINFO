// #845 - Pattern
#include <iostream>

using namespace std;

int n, q, a[1026][1026];

int Putere(int q)
{
    if (q != 1)
        return 2 * Putere(q - 1);
    else
        return 2;
}

void Divide(int x, int y, int l)
{
    l = l / 2;
    for (int i = x; i < x + l; i++)
        for (int j = y; j < y + l; j++)
            a[i][j] = 1;
    
    if (l > 1)
    {
        Divide(x, y + l, l);
        Divide(x + l, y, l);
        Divide(x + l, y + l, l);
    }
}

void Afis()
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
    n = Putere(n);
    Divide(1, 1, n);
    Afis();
    
    return 0;
}
