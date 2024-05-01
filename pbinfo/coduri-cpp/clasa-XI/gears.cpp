// #598 - Gears
#include <iostream>
#include <fstream>
#include <queue>
using namespace std;

ifstream f("gears.in");
ofstream g("gears.out");

int n, m, x, y, rotita;
bool pus[105];
bool direction[105]; /// 0 pt. stanga; 1 pt dreapta;

vector<int> v[105];
queue<int> q;

void citire()
{
    f >> n >> rotita;
    while (f >> x >> y)
    {
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void bfs()
{
    
    direction[rotita] = 1;
    pus[rotita] = 1;
    q.push(rotita);

    while (!q.empty())
    {
        int el = q.front();
        vector<int>::iterator it;
        for (it = v[el].begin(); it != v[el].end(); it++)
        {
            if (pus[*it] == 0)
            {
                pus[*it] = 1;
                direction[*it] = 1 - direction[el];
                q.push(*it);
            }
        }
        q.pop();
    }

}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        if (direction[i] == 0)
            g << "S";
        else
            g << "D";
    }
}
int main()
{
    citire();
    bfs();
    afis();

    g << '\n';
    f.close();
    g.close();
    return 0;
}
