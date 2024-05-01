// #98 - Maxim4
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("maxim4.in");
ofstream g("maxim4.out");

int main()
{
    // declarare si initializare variabile
    int n = 0, maxim = 0, nrap = 0, v[105];
    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea datelor din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    // calculul maximului si a numarului sau de aparitii
    maxim = v[1];
    nrap = 1;
    for (int i = 2; i <= n; i++)
    {
        if (v[i] == maxim ) nrap++;
        else if (v[i] > maxim )
        {
            maxim = v[i];
            nrap = 1;
        }
    }

    g << maxim << " " << nrap;
    f.close();
    g.close();
    return 0;
}
