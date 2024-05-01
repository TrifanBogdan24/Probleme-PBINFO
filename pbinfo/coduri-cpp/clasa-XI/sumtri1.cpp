// #386 - SumTri1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sumtri1.in");
ofstream g("sumtri1.out");

int n, a[109][109], s[109][109], Min, x, y;

void drum(int x, int y)
{
    if (x == 1 && y == 1)
        g << a[1][1] << ' ';
    else
    {
        if (s[x][y] == s[x - 1][y] + a[x][y])
            drum(x - 1, y);
        else if (s[x][y] == s[x - 1][y - 1] + a[x][y])
            drum(x - 1, y - 1);
        g << a[x][y] << ' ';
    }
}

int main()
{
    f >> n;
    f >> a[1][1];
    s[1][1] = a[1][1];
    
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            f >> a[i][j];
            
            if (j == 1)
                s[i][j] = s[i - 1][j] + a[i][j];
            else if (j == i)
                s[i][j] = s[i - 1][j - 1] + a[i][j];
            else
                s[i][j] = min(s[i - 1][j - 1], s[i - 1][j]) + a[i][j];
        }
    }
    
    Min = s[n][1];
    x = n;
    
    for (int i = 2; i <= n; i++)
    {
        if (s[n][i] < Min)
        {
            Min = s[n][i];
            y = i;
        }
    }
    
    g << Min << '\n';
    drum(x, y);
    
    f.close();
    g.close();
    return 0;
}
