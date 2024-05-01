// #403 - Concert
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream f("concert.in");
ofstream g("concert.out");
int n, T, x, y, s;
char c;

struct E {
    int durata;
    int ordine;
};
E v[1000];

int main()
{
    f >> n >> T;

    for (int i = 1; i <= n; i++)
    {
        f >> x;
        f >> c;
        f >> y;

        v[i].durata = 60 * x + y;
        v[i].ordine = i;
    }

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i].durata > v[j].durata)
                swap(v[i], v[j]);

    s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += v[i].durata;
        if (s > T)
        {
            g << i - 1 << '\n';
            
            for (int j = 1; j < i; j++)
                g << v[j].ordine << ' ';
            
            break;
        }
    }

    f.close();
    g.close();
    return 0;
}
