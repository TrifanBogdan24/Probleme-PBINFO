// #1346 - PbInfo
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("pbinfo.in");
ofstream g("pbinfo.out");

int n, nr, ok, q, OK = 1;
char s[255], sep[20] = ",. !?/:", *p, v[100][10], V[100][10];

int main()
{
    f.getline(s, 100);
    f >> n;
    f.get();
    strcpy(v[0], "virus");
    
    for (int i = 1; i <= n; i++)
        f.getline(v[i], 100);
    p = strtok(s, sep);
    
    while (p)
    {
        nr++;
        strcpy(V[nr], p);
        p = strtok(NULL, sep);
        ok = 1;
    
        for (int i = 0; i <= n; i++)
            if (strcmp(V[nr], v[i]) == 0)
                ok = 0;
        if (ok == 0)
            OK = 0;
    }
    
    if (OK == 0)
        g << "DA";
    else
        g << "NU";

    g << "\n";
    f.close();
    g.close();
    return 0;
}
