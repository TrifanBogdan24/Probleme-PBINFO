// #549 - Epidemie
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

ifstream f("epidemie.in");
ofstream g("epidemie.out");

int n, m, i, j, x, y, nr, initial, pers;
bool infectata[1009];

queue<int> q;
vector<int> leg[1009], ep[9999];

void citire()
{
    f >> n >> m;
    
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        leg[x].push_back(y);
        leg[y].push_back(x);
    }

    f >> initial;
    nr = 1;
    
    for (int i = 1; i <= initial; i++)
    {
        f >> pers;
        ep[nr].push_back(pers);
        infectata[pers] = 1;
    }
}

bool resist()
{
    for (int i = 1; i <= n; i++)
        if (infectata[i] == 0)
            return 0;
    return 1;
}

int main()
{
    citire();

    while (resist() != 1)
    {
        vector<int>::iterator it1;

        for (it1 = ep[nr].begin(); it1 != ep[nr].end(); it1++)
        {
            int el = *it1;
            vector<int>::iterator it2;

            for (it2 = leg[el].begin(); it2 != leg[el].end(); it2++)
            {
                if (infectata[*it2] == 0)
                {
                    infectata[*it2] = 1;
                    ep[nr + 1].push_back(*it2);
                }
            }
        }
        nr++;
    }
    
    g << nr;
    g << '\n';

    f.close();
    g.close();
    return 0;
}
