// #1508 - Element_SA
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int nr_sa(int a[100][100], int n, int m)
{
    int max_lin[100], min_lin[100], max_col[100], min_col[100];

    for (int i = 0; i < 100; i++)
    {
        max_lin[i] = min_lin[i] = 0;
        max_col[i] = min_col[i] = 0;
    }

    // calculam min si max pe linie
    for (int i = 0; i < n; i++)
    {
        max_lin[i] = min_lin[i] = a[i][0];

        for (int j = 1; j < m; j++)
        {
            if (a[i][j] > max_lin[i])
                max_lin[i] = a[i][j];

            if (a[i][j] < min_lin[i])
                min_lin[i] = a[i][j];
        }
    }

    // calculam min si max pe coloana
    for (int j = 0; j < m; j++)
    {
        max_col[j] = min_col[j] = a[0][j];

        for (int i = 1; i < n; i++)
        {
            if (a[i][j] > max_col[j])
                max_col[j] = a[i][j];

            if (a[i][j] < min_col[j])
                min_col[j] = a[i][j];
        }
    }

    // calculul lui nr
    int nr = 0;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if ((a[i][j] == max_lin[i] && a[i][j] == min_col[j]) ||
                (a[i][j] == min_lin[i] && a[i][j] == max_col[j]))
                    nr++; 
    
    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI
int main()
{
    int n = 0, m = 0, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << nr_sa(a, n, m) << '\n';
    return 0;
}

/* exemplu input
2 6
5 2 8 4 9 3
7 1 6 3 8 5
*/
