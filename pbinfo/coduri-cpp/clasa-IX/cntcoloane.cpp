// #777 - CntColoane
#include <iostream>

using namespace std;

bool diff_el_of_col(int n, int m, int a[110][110], int col)
{
    // functia intoarce TRUE daca toate elementele de pe coloana cu indicele 'col' sunt distince

    if (col > m)
        return 0;   // indexul coloane iese din matrice
    
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        if (a[i][col] == a[j][col])
            return 0;

    return 1;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, NR = 0, a[110][110];
    
    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // calculul numarului de coloane cu toate elementele distince
    for (int j = 1; j <= m; j++)
        if (diff_el_of_col(n, m, a, j))
            NR++;
        
    cout << NR << '\n';
    return 0;
}
