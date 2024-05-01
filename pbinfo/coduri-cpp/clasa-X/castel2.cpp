// #3380 - Castel2

#include <iostream>
#include <fstream>
#include <cstring>
#include <queue>

using namespace std;

fstream f("castel2.in");
ofstream g("castel2.out");

int n, m, i, j, distmax, nr, aux[1005][1005], a[1005][1005], rasp[1005][1005];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

char s[1005];

queue<pair<int, int> > Q;
queue<pair<int, int> > zmeu;

void citire()
{
    f >> n >> m >> distmax;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        f.getline(s, 1005);
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
                a[i][j + 1] = aux[i][j + 1] = rasp[i][j + 1] = -1;
            else if (s[j] == 'Z')
            {
                zmeu.push({i, j + 1});
                a[i][j + 1] = aux[i][j + 1] = 1;
                rasp[i][j + 1] = -1;
            }
        }
    }
}

bool inside(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void lee_zmeu()
{
    while (!zmeu.empty())
    {
        int x = zmeu.front().first;
        int y = zmeu.front().second;
        
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if (a[xx][yy] == 0 && inside(xx, yy) && a[x][y] <= distmax)
            {
                zmeu.push({xx, yy});
                a[xx][yy] = a[x][y] + 1;
                rasp[xx][yy] = -1;
            }
        }
        zmeu.pop();
    }
}

int lee_fat_frumos(int xi, int yi)
{
    int x = 0, y = 0, xx = 0, yy = 0;
    rasp[xi][yi] = 1;
    Q.push({xi, yi});

    while (!Q.empty())
    {
        x = Q.front().first;
        y = Q.front().second;
        
        for (int i = 0; i < 4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];
            if (rasp[xx][yy] == 0 && inside(xx, yy) == true)
            {
                rasp[xx][yy] = rasp[x][y] + 1;
                Q.push({xx, yy});
                if (xx == n && yy == m)
                    return rasp[n][m];
            }
        }
        Q.pop();
    }

    return -1;
}

int main()
{
    citire();
    lee_zmeu(); /// in loc sa facem nr_zmeu de apeluri de lee, vom face un singur program in care parcurgem simultan camerele pe care zmeii le pot contamina

    if (rasp[n][m] == -1)
        g << "-1";
    else
        g << lee_fat_frumos(1, 1);

    f.close();
    g.close();
    return 0;
}
