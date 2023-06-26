// #191 - MaxMat
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("maxmat.in");
ofstream g("maxmat.out");

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;

    // citirea din fisier
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];


    for (int i = 1; i <= n; i++)
    {
        int max_el = a[i][1];
        int poz = 1;
        
        for (int j = 2; j <= m; j++)
        {
            if (a[i][j] > max_el)
            {
                max_el = a[i][j];
                poz = j;
            }
        }

        g << max_el << ' ' << poz << '\n';
    }

    f.close();
    g.close();
    return 0;
}
