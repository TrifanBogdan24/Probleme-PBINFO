// #1664 - Palindrom_Ciclic
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("palindrom_ciclic.in");
ofstream g("palindrom_ciclic.out");

int n;
long long v[1055];

bool pal()
{
    for (int i = 1; i <= n / 2; i++)
        if (v[i] != v[n - i + 1])
            return 0;
    
    return 1;
}

void perm()
{
    long long x = v[1];
    
    for (int i = 1; i < n; i++)
        v[i] = v[i + 1];
    v[n] = x;
}

void raspuns()
{
    int i = 1;
    bool ok = 1;
    
    while (i < n && ok == 1)
    {
        if (pal() == 1)
        {
            g << "DA" << ' ' << i - 1;
            ok = 0;
        }
        else
        {
            perm();
            i++;
        }
    }
    
    if (ok == 1)
        g << "NU";
}

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    return;
}
int main()
{
    citire();
    raspuns();

    g << '\n';
    f.close();
    g.close();
    return 0;
}
