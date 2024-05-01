// #1429 - GenMat21
#include <iostream>

using namespace std;

void build_upper_mat(int n, int a[35][35], int lin)
{
    // construieste diagonalelele paralele cu diagonala secundara
    // deasupra acesteia

    if (lin > n)
        return;     // indicele liniei iese din matrice

    for (int i = 1; i <= lin; i++)
        a[lin - i + 1][i] = lin;
}

void symetric_to_second_diag(int n, int a[35][35])
{
    // simetrizeaza matricea fata de diagonala secundara
    // partea de jos devine echivalentul partii de deasupra diagonelei

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n - i + 1; j++)
            a[n -i + 1][n -j + 1] = a[i][j];
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, q = 0, ok = 0, a[35][35];

    for (int i = 0; i < 35; i++)
        for (int j = 0; j < 35; j++)
            a[i][j] = 0;
    

    cin >> n;
    
    for (int i = 1; i <= n ;i++)
        build_upper_mat(n, a, i);

    symetric_to_second_diag(n, a);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}
