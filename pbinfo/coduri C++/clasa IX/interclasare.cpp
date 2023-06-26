// #241 - Interclasare
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("interclasare.in");
ofstream g("interclasare.out");

int n, m, a[100005], b[100005], i, j, k, c[200015], t;

int main()
{
    f >> n;
    for (i = 1; i <= n; i++) f >> a[i];
    f >> m;
    for (j = 1; j <= m; j++) f >> b[j];

    i = j = 1;
    while (i <= n && j <= m)
    {
        if (a[i] < b[j])
        {
            c[++k] = a[i];
            i++;
        } else {
            c[++k] = b[j];
            j++;
        }
    }

    for (t = i; t <= n; t++) c[++k] = a[t];
    for (t = j; t <= m; t++) c[++k] = b[t];

    j = 0;
    for (i = 1; i <= k; i++)
    {
        j++;
        if (j > 10)
        {
            j = 1;
            g<<'\n';}
        g<<c[i]<<" ";
        }
    return 0;
}
