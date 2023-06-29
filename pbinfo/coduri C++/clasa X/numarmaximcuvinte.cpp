// #93 - NumarMaximCuvinte
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("cuvmax.in");
ofstream g("cuvmax.out");

unsigned int n, nr_cuv, max_nr_cuv = 0;
char propozitie[255], prop_rasp[255];

int count_words(char sir[255])
{
    char aux[255], sep[2] = " ",  *p;
    int nr = 0;

    strcpy(aux, sir);
    p = strtok(aux, sep);

    while (p) {
        nr++;
        p = strtok(NULL, sep);
    }

    return nr;
}

int main()
{
    f >> n;
    f.get();

    for (int i = 1; i <= n; i++)
    {
        f.getline(propozitie, 255);
        nr_cuv = count_words(propozitie);

        if (nr_cuv > max_nr_cuv)
        {
            max_nr_cuv = nr_cuv;
            strcpy(prop_rasp, propozitie);
        }
    }
    
    g << prop_rasp << '\n';

    f.close();
    g.close();
    return 0;
}