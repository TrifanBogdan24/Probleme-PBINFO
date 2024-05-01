// #1651 - Graf
#include <iostream>

using namespace std;

int n, m, x, y, c, nr[105], poz;
double cost[105];
double minx, q;

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> c;
        cost[x] = cost[x] + c;
        nr[x]++;
        cost[y] = cost[y] + c;
        nr[y]++;
    }
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
        cost[i] = double(cost[i] / double(nr[i]));
    
    minx = cost[1];
    poz = 1;
    
    for (int i = 2; i <= n; i++)
    {
        if (cost[i] < minx)
        {
            poz = i;
            minx = cost[i];
        }
    }
    
    cout << poz << '\n';

    return 0;
}
