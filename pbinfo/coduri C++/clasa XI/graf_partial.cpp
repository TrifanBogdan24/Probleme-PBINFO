// #420 - Graf partial
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf_partial.in");
ofstream g("graf_partial.out");

int n, m, a[105][105], x, y;

int main()
{
    f >> n;
    while (f >> x >> y)
    {
        if (x % 2 != y % 2)
            a[x][y] = a[y][x] = 1;
    }
    
    m = 0;
    for (int i = 2; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (a[i][j] == 1)
                m++;

    g << m << '\n';
    f.close();
    g.close();
    return 0;
}
