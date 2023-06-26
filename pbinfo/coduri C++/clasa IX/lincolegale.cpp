// #784 - LinColEgale
#include <iostream>

using namespace std;
struct suma {
    int l, c;
};

int main()
{
    // declarare si initializare variabile
    int n = 0, nr = 0, a[1000][1000];
    suma S[1000];

    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            a[i][j] = 0;

    for (int i = 0; i < 1000; i++)
        S[i].l = S[i].c = 0;

    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // calculul sumelor pe linii si coloane
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            S[i].l+=a[i][j];
            S[j].c+=a[i][j];
        }
    }

    // verificarea sumelor pe linie si pe coloana
    // pentru fiecare element din matrice
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (S[i].l == S[j].c)
                nr++;
    cout << nr;
    return 0;
}
