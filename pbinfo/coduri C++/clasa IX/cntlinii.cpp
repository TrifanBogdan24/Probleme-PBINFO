// #776 - CntLinii
#include <iostream>

using namespace std;

bool same_value_line(int n, int m, int a[105][105], int lin)
{
    // functia returneaza TRUE daca linia de la indicele 'lin' are toate elementele egale

    if (lin > n)
        return 0;   // indicele liniei iese din matrice

    for (int j = 1; j < m; j++)
        if (a[lin][j] != a[lin][j + 1])
            return 0;
    
    return 1;
}

int main()
{
    int n = 0, m = 0, C = 0, a[105][105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    // calculul lui C = numarul de linii cu toate elementele egale
    C = 0;
    for (int i = 1; i <= n; i++)
        if (same_value_line(n , m, a, i))
            C++;
    
    cout << C << '\n';
    return 0;
}
