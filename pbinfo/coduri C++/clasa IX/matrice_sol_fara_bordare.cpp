// #81 - Matrice
#include <iostream>

using namespace std;

bool inside_matrix(int n, int lin, int col)
{
    // functia verifica daca indicii unui element sunt in interiorul matricii
    return ((1 <= lin && lin <= n) && (1 <= col && col <= n));
}

bool bigger_than_neighbours(int n, int a[25][25], int lin, int col)
{
    // TRUE  => elementul este stric mai mare decat toti vecinii sai
    // FALSE => exista cel putin un vecin mai mare sau egal decat elementul de coordonate (lin, col)
    
    if (!inside_matrix(n, lin, col))
        return 0;

    if (inside_matrix(n, lin -1, col) && a[lin - 1][col] >= a[lin][col])
        return 0;

    if (inside_matrix(n, lin + 1, col) && a[lin + 1][col] >= a[lin][col])
        return 0;

    if (inside_matrix(n, lin, col - 1) && a[lin][col - 1] >= a[lin][col])
        return 0;

    if (inside_matrix(n, lin, col + 1) && a[lin][col + 1] >= a[lin][col])
        return 0;

    return 1;
}
int main()
{
    // declararea si initializarea variabilelor
    int n = 0, nr = 0, a[25][25];
    
    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // calculul numarului de elemente convenabile
    nr = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (bigger_than_neighbours(n, a, i, j))
                nr++;

    cout << nr << '\n';
    return 0;
}
