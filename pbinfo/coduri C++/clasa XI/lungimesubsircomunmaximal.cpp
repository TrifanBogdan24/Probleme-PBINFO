// #2528 - LungimeSubsirComunMaximal
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("lungimesubsircomunmaximal.in");
ofstream g("lungimesubsircomunmaximal.out");

int n, m, S[1001][1001];
char x[1001], y[1001];

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

    g << S[n][m] << '\n';
    return 0;
}
