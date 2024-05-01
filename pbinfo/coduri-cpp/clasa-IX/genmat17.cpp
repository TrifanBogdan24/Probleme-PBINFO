// #233 - GenMat17
#include <iostream>

using namespace std;

int main()
{
    int n = 0, q = 1, p = 2, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            a[2 * i + 1][j] = q;                // liniile pare, de la stanga de dreapta
            a[2 * i + 2][2 * n - j + 1] = p;    // liniie impare, de la dreapta la stanga
            
            p += 2;
            q += 2;
        }
    }
    
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
