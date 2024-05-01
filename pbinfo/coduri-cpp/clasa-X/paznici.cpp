// #884 - Paznici
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

fstream f("paznici.in");
ofstream g("paznici.out");

int n, m, k, p, i, j, d, aux[205][205], a[205][205], rasp[205][205], nr;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

pair<pair<int, int>, int> paznic[205];
queue<pair<int, int> > Q;

char s[210];

void citire()
{
    int i, j;
    f >> n >> m >> p;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        f.getline(s, 205);
        
        for (int j = 0; j < m; j++)
        {

            if (s[j] == '#')
                aux[i][j + 1] = -1;
        }
    }

    for (int i = 1; i <= p; i++)
        f >> paznic[i].first.first >> paznic[i].first.second >> paznic[i].second;
}

bool inside(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void lee(int xi, int yi, int distmax)
{

    while (!Q.empty())
        Q.pop();
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = aux[i][j];

    
    Q.push({xi, yi});
    a[xi][yi] = 1;
    
    while (!Q.empty())
    {
        int x = Q.front().first;
        int y = Q.front().second;
        
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if (a[xx][yy] == 0 && inside(xx, yy) == true && a[x][y] <= distmax)
            {
                a[xx][yy] = a[x][y] + 1;
                Q.push({xx, yy});
            }
        }
        
        Q.pop();
    }

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (rasp[i][j] == 0)
                rasp[i][j] = a[i][j];
}

int main()
{
    citire();

    for (int i = 1; i <= p; i++)
        lee(paznic[i].first.first, paznic[i].first.second, paznic[i].second);
    
    nr = 0;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (rasp[i][j] == 0)
                nr++;
        }
    }

    g << nr;

    f.close();
    g.close();
    return 0;
}
