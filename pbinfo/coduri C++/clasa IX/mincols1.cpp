// #223 - MinCols1
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("mincols1.in");
ofstream g("mincols1.out");

int main()
{
    // declarare si initializare variabile
    int n = 0 , p = 1, Min[1000], a[35][35];
    bool ok=1;

    for (int i = 0; i < 35; i++)
        for (int j = 0; j < 35; j++)
            a[i][j] = 0;

    for (int i = 0; i < 1000; i++)
        Min[i] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    // calculul minimului de pe coloana
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i==1) Min[j] = a[i][j];
            else Min[j] = min(Min[j], a[i][j]);

    // produsul elementelor dorite
    for(int i = 1; i <= n; i++)
    {
        if (a[i][n - i + 1] == Min[n - i + 1])
        {
            p *= Min[n - i + 1];
            ok = 0;
        }
    }

    if (ok) g << "NU EXISTA";
    else g << (p % 10);
    f.close();
    g.close();
    return 0;
}

