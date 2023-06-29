// #1229 - Matrice_Div_Et_Imp
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("matrice_div_et_imp.in");
ofstream g("matrice_div_et_imp.out");

int n = 0, N = 1;
long long a[550][550];

void Divide(int x, int y, int l)
{
    if (l == 1)
        g << a[x][y] << " ";
    else
    {
        l = l / 2;
        Divide(x, y, l);
        Divide(x + l, y + l, l);
        Divide(x, y + l, l);
        Divide(x + l, y, l);
    }
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        N = N * 2;
    
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            f >> a[i][j];
    
    Divide(1, 1, N);
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
