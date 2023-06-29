// #101 - SortareCuvinte
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("sortcuv.in");
ofstream g("sortcuv.out");

char a[255], sep[2] = " ", *p, v[100][100];
int nr = 0;

int main()
{
    f.getline(a, 255);
    p = strtok(a, sep);

    while (p)
    {
        strcpy(v[nr++], p);
        p = strtok(NULL, sep);
    }
    
    for (int i = 0; i <= nr - 2; i++)
        for (int j = i + 1; j <= nr - 1; j++)
            if (strcmp(v[i], v[j]) > 0)
                swap(v[i], v[j]);
    
    for (int i = 0; i < nr; i++)
        g << v[i] << '\n';

    f.close();
    g.close();
    return 0;
}
