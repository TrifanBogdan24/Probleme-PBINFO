// #164 - HalfSort2
#include <iostream>
#include <cctype>
#include <fstream>

using namespace std;

ifstream f("halfsort2.in");
ofstream g("halfsort2.out");

int n, v[105];

int main()
{
    // citirea elementelor din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    // sortarea vectorului
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (i % 2 == j % 2)
            {
                if (v[i] > v[j] && i % 2 == 0)
                    swap(v[i], v[j]);
                
                if (v[i] < v[j] && i % 2 == 1)
                    swap(v[i], v[j]);
            }


        }
    }

    // afisarea elementelor in fisier
    for (int i = 1; i <= n; i++)
        g << v[i] << " ";

    f.close();
    g.close();
    return 0;
}
