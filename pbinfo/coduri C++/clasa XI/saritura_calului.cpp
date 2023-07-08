// #337 - Saritura_Calului
#include <iostream>

using namespace std;

int n, m, xi, yi, a[15][15];
int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
bool OK = 1;

bool inauntru(int l, int c)
{
    return (l >= 1 && l <= n && c >= 1 && c <= m);
}

bool calc()
{
    int i, j;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (a[i][j] == 0)
                return 0;

    return 1;
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
}

void back(int x, int y, int pas)
{
    if (OK == 1)
    {
        if (calc() == 1)
        {
            OK = 0;
            afis();
        }
        else
        {
            if (inauntru(x, y) == 1 && a[x][y] == 0)
            { 
                // cout<<x<<' '<<y<<'\n';
                a[x][y] = pas;
                
                for (int i = 0; i < 8; i++)
                    back(x + dx[i], y + dy[i], pas + 1);
                
                a[x][y] = 0;
            }
        }
    }
}

int main()
{
    cin >> n >> m >> xi >> yi;
    back(xi, yi, 1);

    // for(int i=0;i<8;i++)cout<< xi+dx[i] <<' '<< yi+dy[i]<<'\n';
    return 0;
}
