// #1856 - Taxe2
#include <fstream>

using namespace std;

ifstream f("taxe2.in");
ofstream g("taxe2.out");

int n, m, xx, yy, p, u, s, lin, col;
int a[102][102], b[102][102];
short x[100005], y[100005];

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    f >> s >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            f >> a[i][j];
            b[i][j] = -1;
        }
    }

    p = u = 1;
    x[u] = 1;
    y[u] = 1;
    b[1][1] = a[1][1];

    while (p <= u)
    {
        lin = x[p];
        col = y[p];
        
        for (int k = 0; k < 4; k++)
        {
            xx = lin + dx[k];
            yy = col + dy[k];
            
            if (xx > 0 && xx <= n && yy > 0 && yy <= n && (b[xx][yy] == -1 || b[xx][yy] > b[lin][col] + a[xx][yy]))
            {
                b[xx][yy] = b[lin][col] + a[xx][yy];
                x[++u] = xx;
                y[u] = yy;
            }
        }
        p++;
    }
    
    if (s < b[n][n])
        g << "-1";
    else
        g << s - b[n][n];
    
    f.close();
    g.close();
    return 0;
}
