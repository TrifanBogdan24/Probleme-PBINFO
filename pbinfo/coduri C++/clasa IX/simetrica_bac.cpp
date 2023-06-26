// #3120 - Simetrica_Bac
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare variabile
    int a[1000][1000], OK = 1, nr = 0, n = 0, m = 0;
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            a[i][j] = 0;

    // citire
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for(int j = 1;j <= n; j++)
            cin>>a[i][j];

    // calcularea raspunsului
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (j > (n + 1) / 2 && a[i][j] != a[i][n - j+1])
                OK=0;

    if (OK) cout << "DA";
    else cout << "NU";

    return 0;
}
