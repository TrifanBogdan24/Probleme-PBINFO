// #775- ElimColoane
#include <iostream>

using namespace std;

bool contine_nunule(int n, int m, int col, int a[110][110])
{
    // functia intoarce TRUE daca daca exista cel putin un element egal cu 0 pe coloana

    if (col > m)
        return 0;

    for (int i = 1; i <= n; i++)
        if (a[i][col] == 0)
            return 1;

    return 0;
}

void delete_line(int n, int &m, int col, int a[110][110])
{
    if (col > n)
        return;

    for (int i = 1; i <= n; i++)
        for (int j = col; j < m; j++)
            a[i][j] = a[i][j + 1];

    m--;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, m = 0, a[110][110];

    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea    
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // stergerea coloanelor cu toate elementele nenule
    int col = 1;
    while (col <= m)
    {
        if (contine_nunule(n, m, col, a))
            delete_line(n, m, col, a);
        else
            col++;
    }

    // afisarea
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
