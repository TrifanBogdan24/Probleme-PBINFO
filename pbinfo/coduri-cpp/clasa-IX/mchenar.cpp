// #778 - MChenar
#include <iostream>

using namespace std;

int a[1000][1000],v[1000], n, m, N, aux, d;

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j<= m; j++)
            cin>>a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j<= m; j++)
            if ((i == 1 || i == n) || (j == 1 || j == m))
                v[++N] = a[i][j];


    for (int i = 1; i < N; i++)
        for (int j = i + 1; j <= N; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    int i = 1;
    while (i < N)
    {
        if (v[i] == v[i + 1])
        {
            for (int j = i + 1; j < N; j++)
                v[j] = v[j + 1];
            
            N--;
        } else i++;
    }

    for (int i = 1; i <= N; i++)
        cout << v[i] << " ";

    return 0;
}
