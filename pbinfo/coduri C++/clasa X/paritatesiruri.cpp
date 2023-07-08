// #2346 - ParitateSiruri
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream f("paritatesiruri.in");
ofstream g("paritatesiruri.out");

int k, p1, p2;

char a[1000], q1[200], q2[200];

int main()
{
    f >> k;
    f.get();
    
    for (int i = 1; i <= k; i++)
    {
        f.getline(a, 1000);

        for (int j = 1; j < strlen(a); j = j + 2)
            g << a[j];

        g << " ";

        for (int j = 0; j < strlen(a); j = j + 2)
            g << a[j];

        g << '\n';
    }

    return 0;
}
