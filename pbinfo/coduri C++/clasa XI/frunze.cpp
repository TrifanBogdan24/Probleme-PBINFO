// #637 - Frunze
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

ifstream f("frunze.in");
ofstream g("frunze.out");

int n, m, t[105], nod;
bool fiu[105];
vector<int> rasp;

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];

        fiu[t[i]] = 1;
        if (t[i] == 0)
            nod = i;
    }
}

int main()
{

    citire();

    for (int i = 1; i <= n; i++)
    {
        if (fiu[i] == 0)
            rasp.push_back(i);
        // cout<<fiu[i]<<' ';
    }
    
    g << nod << '\n' << rasp.size() << '\n';
    
    for (int i = 0; i < rasp.size(); i++)
        g << rasp[i] << ' ';
    
    if (!rasp.size())
        g << '\n';
    
    f.close();
    g.close();
    return 0;
}
