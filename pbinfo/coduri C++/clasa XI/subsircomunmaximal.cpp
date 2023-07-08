// #2529 - SubsirComunMaximal
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

ifstream f("subsircomunmaximal.in");
ofstream g("subsircomunmaximal.out");

int n, m, S[1001][1001];
char x[1001], y[1001];

void drum(int lin, int col)
{
    if (S[lin][col] != 0)
    {
        if (x[lin - 1] == y[col - 1])
        {
            drum(lin - 1, col - 1);
            g << x[lin - 1];
        }
        else
        {
            if (S[lin - 1][col] > S[lin][col - 1])
                drum(lin - 1, col);
            else
                drum(lin, col - 1);
        }
    }
}

int main()
{
    f >> x >> y;
    n = strlen(x);
    m = strlen(y);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (x[i - 1] == y[j - 1])
                S[i][j] = S[i - 1][j - 1] + 1;
            else
                S[i][j] = max(S[i - 1][j], S[i][j - 1]);
        }
    }

    drum(n, m);

    f.close();
    g.close();
    return 0;
}
