// #2081 - Parsare
#include <bits/stdc++.h> // include toate bibliotecile
#include <stdlib.h>

using namespace std;

ifstream f("parsare.in");
ofstream g("parsare.out");

int main()
{

    int MAX = 0, n = 0;
    char buffer[8];
    
    while (f.get(buffer, 8, ' '))
    {
        n = atoi(buffer);

        MAX = max(MAX, n);
        f.get();
    }
    
    g << MAX << '\n';

    f.close();
    g.close();
    return 0;
}
