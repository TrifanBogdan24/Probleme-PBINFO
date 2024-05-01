// #157 - DoarVocale
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream f("doarvocale.in");
ofstream g("doarvocale.out");

int n, nr, ok;
char cuv[35], voc[10] = "aeiou", *p;

int main()
{
    f >> n;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        f.getline(cuv, 35);
        ok = 1;
        
        for (unsigned int j = 0; j < strlen(cuv); j++)
            if (strchr(voc, cuv[j]) == 0)
                ok = 0;
        
        if (ok == 1)
            nr++;
    }
    
    g << nr << '\n';
    
    f.close();
    g.close();
    return 0;
}