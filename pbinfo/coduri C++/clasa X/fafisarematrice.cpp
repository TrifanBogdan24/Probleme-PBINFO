// #79 - FAfisareMatrice
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void afismat(int a[100][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, m = 0, a[100][100];

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    afismat(a, n, m);
    return 0;
}
