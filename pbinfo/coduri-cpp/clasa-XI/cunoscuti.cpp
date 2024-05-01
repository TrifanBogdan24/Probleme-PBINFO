// #575 - Cunoscuti
#include <iostream>

using namespace std;

int n, m, x, y, a[105][105], p, maxx;

struct nod {
    int ext, in;
};

nod grad[105];

int main()
{
    cin >> n >> m;
    maxx = -1;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        grad[y].in++;
        grad[x].ext++;
        maxx = max(maxx, grad[y].in);
    }

    for (int i = 1; i <= n; i++)
        if (grad[i].in == maxx)
            cout << i << ' ';

    cout << '\n';
    return 0;
}
