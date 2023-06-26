// #789 - Max2Ap
#include <iostream>

using namespace std;

void display_biggest_seen_min_twice(int n, int v[110 * 110])
{
    // vectorul v este deja ordonat crescator
    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i + 1])
        {
            cout << v[i] << '\n';
            return;
        }
    }

    cout << "IMPOSIBIL\n";
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[110][110], v[110 * 110];

    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    for (int i = 0; i < 110 * 110; i++)
        v[i] = 0;
    
    // ciitrea
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // vectorizarea matricii
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            v[(i - 1) * m + j] = a[i][j];

    // sortarea crescatoare a vectorului
    for (int i = 1; i < n * m; i++)
        for (int j = i + 1; j <= n * m; j++)
            if (v[i] < v[j])
                swap(v[i], v[j]);
    

    display_biggest_seen_min_twice(n * m, v);
    return 0;
}
