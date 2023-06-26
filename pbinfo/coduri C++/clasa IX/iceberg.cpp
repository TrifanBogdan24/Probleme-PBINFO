// #1451 - Iceberg

#include <iostream>

using namespace std;


bool inside_matrix(int n, int lin, int col)
{
    return ((1 <= lin && lin <= n) && (1 <= col && col <= n));
}

int nr_vecini_nuli(int n, int lin, int col, int a[35][35])
{
    int nr = 0;

    if (inside_matrix(n, lin - 1, col) && !a[lin - 1][col])
        nr++;

    if (inside_matrix(n, lin + 1, col) && !a[lin + 1][col])
        nr++;

    if (inside_matrix(n, lin, col - 1) && !a[lin][col - 1])
        nr++;

    if (inside_matrix(n, lin, col + 1) && !a[lin][col + 1])
        nr++;

    return nr;
}

void melt_iceberg(int n, int a[35][35])
{
    // aplica un pas din topitrea ghetarului
    // fiecare valoare = 1 inconjurata de minim doua valori = 0
    // se va anula (=0) la finalul pasului


    // marcarea punctelor ce urmeaza sa se topeasca
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == 1 && nr_vecini_nuli(n, i, j, a) >= 2)
                a[i][j] = -1;

    // updatarea icebergului
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == -1)
                a[i][j] = 0;
}

int count_ones(int n, int a[35][35])
{
    // functia intoarce numarul de valori egale cu 1 din matrice
    int nr = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] == 1)
                nr++;

    return nr;
}

void show_iceberg(int time, int n, int a[35][35])
{
    cout << "\nLa momentul " << time << ":\n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    cout << '\n';
}

int main()
{
    int n = 0, nr_ones = 0, t = 0, a[35][35], v[35 * 35];
    
    for (int i = 0; i < 35; i++)
        for (int j = 0; j < 35; j++)
            a[i][j] = v[(i -1) * 35 + j] = 0;

    
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    nr_ones = count_ones(n, a);
    t = 0;
    while (nr_ones)
    {
        v[++t] = nr_ones;

        // show_iceberg(t, n, a);
        melt_iceberg(n, a);

        nr_ones = count_ones(n, a);
    }

    cout << t << '\n';
    for (int i = 1; i <= t; i++)
        cout << v[i] << '\n';

    return 0;
}
