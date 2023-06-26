// #210 - Chenar
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("chenar.in");
ofstream g("chenar.out");

int main()
{
    // declarare si initializare variabilelor
    int n = 0, a[30][30];
    
    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];
    
    // prima linie, linia de sus (de la stanga la dreapta)
    for (int i = 1; i <= n; i++)
        g << a[1][i] << " ";
    
    // ultima coloana, coloana din dreapta (de sus in jos)
    for (int i = 2; i < n; i++)
        g << a[i][n] << " ";
    
    // ultima linie, linia de jos (de la dreapta la stanga)
    for (int i = n; i >= 1; i--)
        g << a[n][i] << " ";
    
    // prima coloana, coloana din stanga (de jos in sus)
    for (int i = n - 1; i > 1; i--)
        g << a[i][1] << " ";
    
    f.close();
    g.close();

    return 0;
}
