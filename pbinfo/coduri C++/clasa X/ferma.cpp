/// #1028 - Ferma
// Florentina Ungureanu - Colegiul National de Informatica Piatra-Neamt
#include <fstream>
#include <string.h>
#define nmax 410
using namespace std;
char a[nmax][nmax], c, cmax, cs;
unsigned b[nmax][nmax], z[nmax * nmax], smax, ssmax, s;
unsigned m, n, np, max, imax, jmax, is, js;
ifstream f("ferma.in");
ofstream g("ferma.out");
void suprafata(unsigned i, unsigned j)
{
    if (!b[i + 1][j] && a[i + 1][j] == c)
    {
        s++;
        b[i + 1][j] = np;
        suprafata(i + 1, j);
    }
    if (!b[i][j + 1] && a[i][j + 1] == c)
    {
        s++;
        b[i][j + 1] = np;
        suprafata(i, j + 1);
    }
    if (!b[i - 1][j] && a[i - 1][j] == c)
    {
        s++;
        b[i - 1][j] = np;
        suprafata(i - 1, j);
    }
    if (!b[i][j - 1] && a[i][j - 1] == c)
    {
        s++;
        b[i][j - 1] = np;
        suprafata(i, j - 1);
    }
}

int main()
{
    unsigned i, j, v;
    char cuv[405];
    f >> v;
    f >> m >> n;
    f.get();
    for (i = 1; i <= m; i++)
    {
        f.getline(cuv, 405);
        strcpy(a[i] + 1, cuv);
    }
    np = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (!b[i][j])
            {
                np++;
                s = 1;
                c = a[i][j];
                b[i][j] = np;
                suprafata(i, j);
                if (s > smax)
                {
                    smax = s;
                    is = i;
                    js = j;
                    cs = c;
                }
                z[np] = s;
            }
    if (v == 1)
    {
        g << smax << '\n';
        f.close();
        g.close();
        return 0;
    }
    ssmax = 0;
    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
        {
            if (a[i][j - 1] == a[i][j + 1] && b[i][j - 1] != b[i][j + 1] && a[i][j - 1] == a[i + 1][j] && b[i][j - 1] != b[i + 1][j] && b[i][j + 1] != b[i + 1][j] && a[i][j - 1] == a[i - 1][j] && b[i][j - 1] != b[i - 1][j] && b[i][j + 1] != b[i - 1][j] && b[i + 1][j] != b[i - 1][j])
            {
                s = z[b[i][j - 1]] + z[b[i][j + 1]] + z[b[i + 1][j]] + z[b[i - 1][j]] + 1;
                if (s > ssmax)
                {
                    ssmax = s;
                    imax = i;
                    jmax = j;
                    cmax = a[i][j - 1];
                }
            }
            else if (a[i][j - 1] == a[i][j + 1] && b[i][j - 1] != b[i][j + 1] && a[i][j - 1] == a[i + 1][j] && b[i][j - 1] != b[i + 1][j] && b[i][j + 1] != b[i + 1][j])
            {
                s = z[b[i][j - 1]] + z[b[i][j + 1]] + z[b[i + 1][j]] + 1;
                if (s > ssmax)
                {
                    ssmax = s;
                    imax = i;
                    jmax = j;
                    cmax = a[i][j - 1];
                }
            }
            else if (a[i][j - 1] == a[i][j + 1] && b[i][j - 1] != b[i][j + 1] && a[i][j - 1] == a[i - 1][j] && b[i][j - 1] != b[i - 1][j] && b[i - 1][j] != b[i][j + 1])
            {
                s = z[b[i][j - 1]] + z[b[i][j + 1]] + z[b[i - 1][j]] + 1;
                if (s > ssmax)
                {
                    ssmax = s;
                    imax = i;
                    jmax = j;
                    cmax = a[i][j - 1];
                }
            }
            else if (a[i][j - 1] == a[i + 1][j] && b[i][j - 1] != b[i + 1][j] && a[i][j - 1] == a[i - 1][j] && b[i][j - 1] != b[i - 1][j] && b[i + 1][j] != b[i - 1][j])
            {
                s = z[b[i][j - 1]] + z[b[i + 1][j]] + z[b[i - 1][j]] + 1;
                if (s > ssmax)
                {
                    ssmax = s;
                    imax = i;
                    jmax = j;
                    cmax = a[i][j - 1];
                }
            }
            else if (a[i][j + 1] == a[i + 1][j] && b[i][j + 1] != b[i + 1][j] && a[i][j + 1] == a[i - 1][j] && b[i][j + 1] != b[i - 1][j] && b[i + 1][j] != b[i - 1][j])
            {
                s = z[b[i][j + 1]] + z[b[i + 1][j]] + z[b[i - 1][j]] + 1;
                if (s > ssmax)
                {
                    ssmax = s;
                    imax = i;
                    jmax = j;
                    cmax = a[i][j + 1];
                }
            }
            else
            {
                if (a[i][j - 1] == a[i][j + 1] && b[i][j - 1] != b[i][j + 1])
                {
                    s = z[b[i][j - 1]] + z[b[i][j + 1]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i][j - 1];
                    }
                }
                if (a[i + 1][j] == a[i - 1][j] && b[i + 1][j] != b[i - 1][j])
                {
                    s = z[b[i + 1][j]] + z[b[i - 1][j]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i + 1][j];
                    }
                }
                if (a[i][j - 1] == a[i - 1][j] && b[i][j - 1] != b[i - 1][j])
                {
                    s = z[b[i][j - 1]] + z[b[i - 1][j]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i][j - 1];
                    }
                }
                if (a[i][j - 1] == a[i + 1][j] && b[i][j - 1] != b[i + 1][j])
                {
                    s = z[b[i][j - 1]] + z[b[i + 1][j]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i][j - 1];
                    }
                }
                if (a[i][j + 1] == a[i - 1][j] && b[i][j + 1] != b[i - 1][j])
                {
                    s = z[b[i][j + 1]] + z[b[i - 1][j]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i][j + 1];
                    }
                }
                if (a[i][j + 1] == a[i + 1][j] && b[i][j + 1] != b[i + 1][j])
                {
                    s = z[b[i][j + 1]] + z[b[i + 1][j]] + 1;
                    if (s > ssmax)
                    {
                        ssmax = s;
                        imax = i;
                        jmax = j;
                        cmax = a[i][j + 1];
                    }
                }
            }
        }
    if (ssmax)
    {
        g << imax << ' ' << jmax << '\n';
        g << cmax << '\n';
    }
    else
        for (i = 1; i <= m; i++)
            for (j = 1; j <= n; j++)
                if (a[i][j] != cs && (b[i][j - 1] == b[is][js] || b[i][j + 1] == b[is][js] || b[i + 1][j] == b[is][js] || b[i - 1][j] == b[is][js]))
                {
                    g << i << ' ' << j << '\n';
                    g << cs << '\n';
                    i = m + 1;
                    j = n + 1;
                }
 
    f.close();
    g.close();
    return 0;
}
