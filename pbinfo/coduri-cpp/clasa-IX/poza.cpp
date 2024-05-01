// #597 - Poza
#include <iostream>

using namespace std;

bool line_contains_one(int n, int m, int a[105][105], int lin)
{
    // functia intoarce TRUE daca pe linia de indice 'lin' exista cel putin o valoare nenula

    if (lin > n)
        return 0;   // indicele liniei iese din matrice

    for (int j = 1; j <= m; j++)
        if (a[lin][j])
            return 1;

    return 0;
}

bool column_contains_one(int n, int m, int a[105][105], int col)
{
    // functia intoarce TRUE daca pe coloana de indice 'col' exista cel putin o valoare nenula

    if (col > m)
        return 0;   // indicele coloanei iese din matrice

    for (int i = 1; i <= n; i++)
        if (a[i][col])
            return 1;

    return 0;
}

int main()
{
    // declararea si initializarea variabilelor
    int n , m, p, q, lin1, lin2, col1, col2, a[105][105];
    n = m = p = q = lin1 = lin2 = col1 = col2;

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // calculul intervalului indecsilor liniilor care intra in matricea decupata
    for (int i = 1; i <= n; i++)
    {
        int exists_one = line_contains_one(n, m, a, i);
        
        if (!lin1 && exists_one)
            lin1 = i;

        if (exists_one)
            lin2 = i;
    }

    // calculul intervalului indecsilor coloanelor care intra in matricea decupata
    for (int j = 1; j <= m; j++)
    {
        int exists_one = column_contains_one(n, m, a, j);
        
        if (!col1 && exists_one)
            col1 = j;

        if (exists_one)
            col2 = j;
    }

    p = lin2 - lin1 + 1;
    q = col2 - col1 + 1;
    
    // afisarea matricii
    cout << p << " " << q << '\n';
    
    for (int i = lin1; i <= lin2; i++)
    {
        for (int j = col1; j <= col2; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}
