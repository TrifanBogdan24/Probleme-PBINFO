// #214 - GenMat5
#include <iostream>

using namespace std;

void column_with_value(int n, int a[11][11], int val)
{
    // ultima coloana a matricii contine toate elementele = val
    for (int i = 1; i <= n; i++)
        a[i][n] = val;
}

int main()
{
    int n = 0, nr = 0, a[11][11];
    
    for (int i = 0; i < 11; i++)
        for (int j = 0; j < 11; j++)
            a[i][j] = 0;

    cin >> n;
    
    // plasam cifrele lui n pe prima linie, in ordine inversa
    nr = 0;
    do {
        a[1][++nr] = n % 10;
        n /= 10;
    } while (n);

    // expandam prima linie a matricii
    // toate liniile vor coincide cu prima linie a matricii
    for (int i = 2; i <= nr; i++)
        for (int j = 1; j <= nr; j++)
            a[i][j] = a[1][j];

    // afisarea matricii
    for (int i = 1; i <= nr; i++)
    {
        for (int j = 1; j <= nr; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
