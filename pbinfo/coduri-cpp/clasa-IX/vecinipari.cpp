// #779 - VeciniPari
#include <iostream>

using namespace std;

bool inside_matrix(int n, int m, int lin, int col)
{
    return ((1 <= lin && lin <= n) && (1 <= col && col <= m));
}

bool all_even_neighbours(int n, int m, int a[110][110], int lin, int col)
{
    // functia intoarce TRUE daca toti vecinii elementului sunt pari

    if (inside_matrix(n, m, lin - 1, col) && a[lin - 1][col] % 2 == 1)
        return 0;

    if (inside_matrix(n, m, lin + 1, col) && a[lin + 1][col] % 2 == 1)
        return 0;

    if (inside_matrix(n, m, lin, col - 1) && a[lin][col - 1] % 2 == 1)
        return 0;

    if (inside_matrix(n, m, lin, col + 1) && a[lin][col + 1] % 2 == 1)
        return 0;

    return 1;

}

int main()
{
    // initializarea si declararea variabilelor
    int n = 0, m = 0, NR = 0, a[110][110];
    
    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (all_even_neighbours(n, m, a, i, j))
                NR++;

    cout << NR << '\n';
    return 0;
}
