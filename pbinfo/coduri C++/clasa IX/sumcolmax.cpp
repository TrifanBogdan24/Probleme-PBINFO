// #192 - SumColMax
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("sumcolmax.in");
ofstream g("sumcolmax.out");

int main()
{
    // declarare si initializare variabile
    int n = 0, m = 0, poz = 0, Max = 0;
    int a[50][50], s[100];

    for (int i = 0; i < 50; i++)
        for (int j = 0; j < 50; j++)
            a[i][j] = 0;

    for (int i = 0; i < 100; i++)
        s[i] = 0;

    // citire
    f >> n >> m;
    for (int i = 1; i <= n; i++)   
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    // culculul sumei elementelor pe fiecare coloana
    for (int i = 1; i <= n; i++)   
        for (int j = 1; j <= m; j++)
            s[j] += a[i][j];

    // calculul maximului sumelor
    Max = s[1];
    poz = 1;
    for (int j = 2; j <= m; j++)
    {    
        if (s[j] > Max)
        {
            Max = s[j];
            poz = j;
        }
    }

    // afisare
    for (int i = 1; i <= n; i++)
        g << a[i][poz] <<" ";

    f.close();
    g.close();
    return 0;
}
