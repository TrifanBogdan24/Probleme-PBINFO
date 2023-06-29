// #1155 - CautareBinara
#include <iostream>

using namespace std;

bool cautare_binare(int n, int v[25005], int x)
{
    int st = 1;
    int dr = n;

    while (st <= dr)
    {
        int mijl = dr - (dr - st) / 2;  // <=> (st + dr) / 2

        if (v[mijl] == x)
            return 1;
        else if (v[mijl] < x)
            st = mijl + 1;
        else
            dr = mijl - 1;
    }

    return 0;
}

int main()
{
    int n = 0, m = 0, x[25005], y[200005];

    for (int i = 0; i < 25005; i++)
        x[i] = 0;

    for (int i = 0; i < 200005; i++)
        y[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];
    
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> y[i];

    for (int i = 1; i <= m; i++)
        cout << cautare_binare(n, x, y[i]) << " ";

    cout << "\n";
    return 0;
}
