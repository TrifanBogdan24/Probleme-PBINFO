// #2966 - yinyang

#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("yinyang.in");
ofstream fout("yinyang.out");
// ifstream fin("input");ofstream fout("output");

int a[101][101];
int n, m;

void swapline(int l1, int l2)
{
    for (int j = 1; j <= m; ++j)
        swap(a[l1][j], a[l2][j]);
}

void swapcol(int c1, int c2)
{
    for (int i = 1; i <= n; ++i)
        swap(a[i][c1], a[i][c2]);
}

int lineorder(int l1, int l2)
{
    // 1 - linia l1 e mai mica decat linia l2
    // 0 - linia l1 e mai mare decat linia l2

    int sum1 = 0, sum2 = 0;
    for (int j = 1; j <= m; ++j)
    {
        sum1 += a[l1][j];
        sum2 += a[l2][j];
    }

    return sum1 <= sum2;
}

int colorder(int c1, int c2)
{
    // 1 - coloana c1 e mai mica decat coloana c2
    // 0 - coloana c1 e mai mare decat coloana c2

    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= n; ++i)
    {
        sum1 += a[i][c1];
        sum2 += a[i][c2];
    }
    return sum1 <= sum2;
}

int main()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> a[i][j];
    
    bool ok = 0;
    int ans = 0;
    
    while (ok == 0)
    {
        ok = 1;
    
        for (int l1 = 1; l1 < n; ++l1)
        {
            if (lineorder(l1, l1 + 1) == 0)
            {
                ok = 0;
                swapline(l1, l1 + 1);
                ans++;
            }
        }

        for (int c1 = 1; c1 < m; ++c1)
        {
            if (colorder(c1, c1 + 1) == 0)
            {
                ok = 0;
                swapcol(c1, c1 + 1);
                ans++;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if ((i < n && a[i][j] > a[i + 1][j]) || (j < m && a[i][j] > a[i][j + 1]))
            {
                fout << -1;
                return 0;
            }
        }
    }

    fout << ans << '\n';
    
    return 0;
}