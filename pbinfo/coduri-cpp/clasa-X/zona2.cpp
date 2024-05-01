// #1038 - Zona2
#include <fstream>

using namespace std;

ifstream fin("zona2.in");
ofstream fout("zona2.out");

int a[100][100], x, y, n, L, s, s1, Nr, cx[50000], cy[50000];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void coordonate(int k, int x, int y, int &i, int &j)
{
    if (k == 1)
    {
        i = x - 1;
        j = y;
    }
    if (k == 2)
    {
        i = x;
        j = y + 1;
    }
    if (k == 3)
    {
        i = x + 1;
        j = y;
    }
    if (k == 4)
    {
        i = x;
        j = y - 1;
    }
}

void cit()
{
    int i, k, x1, y1, i1, j1;
    fin >> x >> y >> n >> L;
    
    x1 = x;
    y1 = y;
    cx[0] = x;
    cy[0] = y;
    a[x][y] = 1;
    
    for (i = 1; i <= L; i++)
    {
        fin >> k;
        coordonate(k, x1, y1, i1, j1);
        cx[i] = i1;
        cy[i] = j1;
        if (a[i1][j1] == 1)
            break;
        a[i1][j1] = 1;
        x1 = i1;
        y1 = j1;
    }
    
    Nr = 0;
    for (i = 0; i < L; i++)
    {
        if (cx[i] == i1 && cy[i] == j1)
            break;
        else
        {
            a[cx[i]][cy[i]] = 0;
            Nr++;
        }
    }
    Nr = L - Nr;
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
}

void fill(int x, int y)
{
    s++;
    a[x][y] = 2;
    
    for (int k = 0; k < 4; k++)
    {
        int x1 = x + dx[k];
        int y1 = y + dy[k];
        
        if (x1 > 0 && y1 > 0 && x1 < n + 1 && y1 < n + 1 && a[x1][y1] == 0)
            fill(x1, y1);
    }
}
void fill1(int x, int y)
{
    s1++;
    a[x][y] = 2;

    for (int k = 0; k < 4; k++)
    {
        int x1 = x + dx[k];
        int y1 = y + dy[k];
        
        if (x1 > 0 && y1 > 0 && x1 < n + 1 && y1 < n + 1 && a[x1][y1] == 1)
            fill1(x1, y1);
    }
}

int verif(int x, int y)
{
    if (a[x][y] != 0)
        return 0;
    
    int i1 = x;
    while (i1 > 0 && a[i1][y] == 0)
        i1--;
    if (i1 == 0)
        return 0;
    
    int i2 = x;
    while (i2 <= n && a[i2][y] == 0)
        i2++;
    if (i2 == n + 1)
        return 0;
    
    int j1 = y;
    while (j1 > 0 && a[x][j1] == 0)
        j1--;
    if (j1 == 0)
        return 0;
    
    int j2 = y;
    while (j2 <= n && a[x][j2] == 0)
        j2++;
    if (j2 == n + 1)
        return 0;
    
    return 1;
}

int main()
{
    cit();
    // afis();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (verif(i, j))
            {
                fill(i, j);
                // fout<<i<<" "<<j<<'\n';
            }
        }
    }

    fill1(cx[L], cy[L]);
    // afis();
    fout << Nr << '\n';
    fout << s + s1 / 2 - 1 << '\n';
    
    fin.close();
    fout.close();
    return 0;
}
