// #592 - Kruskal
#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

ifstream f("kruskal.in");
ofstream g("kruskal.out");

int n, m, l[109], ctot = 0;

struct muchie {
    int nod1, nod2, cost;
    bool sel;
};
muchie e[10000];

stack<muchie> s;

void citire()
{
    f >> n >> m;

    for (int i = 1; i <= m; i++)
        f >> e[i].nod1 >> e[i].nod2 >> e[i].cost;
}

void sortare()
{
    for (int i = 1; i < m; i++)
    {
        for (int j = i + 1; j <= m; j++)
        {
            if (e[i].cost > e[j].cost)
                swap(e[i], e[j]);
            else if (e[i].cost == e[j].cost)
            {
                if (e[i].nod1 > e[j].nod1)
                    swap(e[i], e[j]);
                else if (e[i].nod1 == e[j].nod2)
                {
                    if (e[i].nod2 > e[j].nod2)
                        swap(e[i], e[j]);
                }
            }
        }
    }
}

void kruskal()
{
    int x, y, minx, maxx;
    for (int i = 1; i <= n; i++)
    {
        l[i] = i;
        e[i].sel = 0;
    }

    int nr_muhcii = 0;
    int idx = 1;
    while (nr_muhcii != n - 1)
    {
        x = e[idx].nod1;
        y = e[idx].nod2;
        
        if (l[x] != l[y])
        {
            ctot += e[idx].cost;
            nr_muhcii++;
            e[idx].sel = 1;
            minx = min(l[x], l[y]);
            maxx = max(l[x], l[y]);

            for (int j = 1; j <= n; j++)
            {
                if (l[j] == maxx)
                    l[j] = minx;
                else if (l[j] > maxx)
                    l[j]--;
            }
        }
        idx++;
    }
}

int main()
{
    citire();
    sortare();
    kruskal();

    g << ctot << '\n';
    
    for (int i = 1; i <= m; i++)
    {
        if (e[i].sel == 1)
            g << e[i].nod1 << ' ' << e[i].nod2 << '\n';
    }

    // for(i=1;i<=m;i++)cout<<e[i].nod1<<' '<<e[i].nod2<<' '<<e[i].cost<<'\n';

    f.close();
    g.close();
    return 0;
}
