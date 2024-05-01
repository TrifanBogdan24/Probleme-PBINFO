// #602 - Regine
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("regine.in");
ofstream g("regine.out");

int NR_AP, mat[1000][1000], n, m, MAX = - 1, S;
struct regina{int l,c;};
regina Q[1000];

int inside_matrix(int x, int y)
{
    return (1 <= x && x <= n) && (1 <= y && y <= n);
}

int LS(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe aceeasi linie si in stanga reginei de pe (x, y)
    for (int col = y - 1; col >= 1; col--)
        if (mat[x][col])
            return 1;

    return 0;
}


int LD(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe aceeasi linie si in dreapta reginei de pe (x, y)
    for (int col = y + 1; col <= m; col++)
        if (mat[x][col])
            return 1;
    
    return 0;
}

int CS(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe aceeasi coloana si deasupra reginei de pe (x, y)
    for (int lin = x - 1; lin >= 1; lin--)
        if (mat[lin][y])
            return 1;

    return 0;
}

int CJ(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe aceeasi coloana si dedesubtul reginei de pe (x, y)
    for (int lin = x + 1; lin <= n; lin++)
        if (mat[lin][y])
            return 1;

    return 0;
}



int DS1(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe diagonala principala, de panta negativa
    // in stanga si deasupra reginei de pe (x, y)
    x--;
    y--;
    while (inside_matrix(x, y))
    {
        if (mat[x][y])
            return 1;

        x--;
        y--;
    }
    return 0;
}

int DS2(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe diagonala secundara, de panta pozitiva
    // in dreapta si deasupra reginei de pe (x, y)
    x--;
    y++;
    while (inside_matrix(x, y))
    {
        if (mat[x][y])
            return 1;
    
        x--;
        y++;
    }
    return 0;
}


int DJ1(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe diagonala secundara, de panta negativa
    // in stanga si dedesubtul reginei de pe (x, y)
    x++;
    y--;
    while (inside_matrix(x, y))
    {
        if (mat[x][y])
            return 1;
        
        x++;
        y--;
    }
    return 0;
}


int DJ2(int x,int y)
{
    // functia returneaza 1 daca se afla o alta regina pe diagonala principala, de panta pozitiva
    // in dreapta si dedesubtul reginei de pe (x, y)
    x++;
    y++;
    while (inside_matrix(x, y))
    {
        if (mat[x][y])
            return 1;
    
        x++;
        y++;
    }
    return 0;
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> Q[i].l >> Q[i].c;
        mat[Q[i].l][Q[i].c] = 1;
    }

    for (int i = 1; i <= m; i++)
    {
        int x = Q[i].l;
        int y = Q[i].c;

        S = LS(x, y) + LD(x, y) + CS(x, y) + CJ(x, y) + DS1(x, y) + DS2(x, y) + DJ1(x, y) + DJ2(x, y);

        if (S > MAX)
        {
            MAX = S;
            NR_AP = 1;
        } else if (S == MAX) NR_AP++;
    }
    g << MAX << " " << NR_AP;
    f.close();
    g.close();
    return 0;
}
