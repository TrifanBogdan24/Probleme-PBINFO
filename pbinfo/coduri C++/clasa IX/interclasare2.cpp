// #251 - Interclasare2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("interclasare2.in");
ofstream g("interclasare2.out");

int n = 0, m = 0, p = 0, q = 0;
int a[1000001], b[1000001], frecv[1000000], final[1000000];

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> a[i];
        frecv[a[i]]++;
    }

    f >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> b[i];
        frecv[b[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (frecv[a[i]] == 2)
        {
            p++;
            final[p] = a[i];
        }
    }

    for (int i = 1; i <= p; i++)
    {
        q++;
        
        if (q > 10)
        {
            g << '\n';
            q = 1;
        }
        
        g << final[i] << " ";
    }

    f.close();
    g.close();

    return 0;
}
