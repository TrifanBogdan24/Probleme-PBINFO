// #92 - Proiecte
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("proiecte.in");
ofstream g("proiecte.out");

int n;

struct poz {
    int e, p;
};

poz v[10001];

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
    {
        f >> v[i].e;
        v[i].p = i;
    }

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i].e > v[j].e)
                swap(v[i], v[j]);
    
    for (int i = 1; i <= n; i++)
        g << v[i].p << " ";
    
    f.close();
    g.close();

    return 0;
}
