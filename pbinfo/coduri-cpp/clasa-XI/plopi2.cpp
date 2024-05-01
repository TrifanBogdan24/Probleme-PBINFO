// #398 - Plopi2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("plopi2.in");
ofstream g("plopi2.out");

int n, v[1000], C, T;

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i + 1])
        {
            C++;
            T = T + v[i + 1] - v[i];
            v[i + 1] = v[i];
        }
    }

    g << C << " " << T << '\n';

    f.close();
    g.close();
    return 0;
}
