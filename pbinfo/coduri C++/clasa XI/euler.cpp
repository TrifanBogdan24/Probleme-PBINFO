// #545 - Euler
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("euler.in");
ofstream g("euler.out");

int n, m, x, y, grad[205], nod;
bool a[205][205];
vector<int> rasp;

void citire()
{
    f >> n;
    while (f >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
    }
}

void dfs(int nod)
{
    for (int i = 1; i <= n; i++)
    {
        if (a[i][nod] == 1)
        {
            a[i][nod] = a[nod][i] = 0;
            dfs(i);
        }
    }
    rasp.push_back(nod);
}

int main()
{
    citire();

    dfs(1);
    g << rasp.size() << '\n';
    
    for (int i = 0; i < rasp.size(); i++)
        g << rasp[i] << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
