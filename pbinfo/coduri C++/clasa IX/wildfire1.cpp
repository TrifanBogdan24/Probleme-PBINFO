// #2845 - Wildfire1
#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0, n = 0, m = 0;

    cin >> x >> y >> n >> m;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int manhattan_dist = 1 + abs(x - i) + abs(y - j);
            cout << manhattan_dist << ' ';
        }

        cout << '\n';
    }

    return 0;
}
