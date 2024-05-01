// #527 - Preturi1
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int n, i, j, m, cant[1009], s, Min = -1, x;
bool ok = 1;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> cant[i];

    cin >> m;
    for (i = 1; i <= m; i++)
    {
        ok = 1;
        s = 0;
        for (j = 1; j <= n; j++)
        {
            cin >> x;
            if (x == -1)
                ok=0;
            
            s += x * cant[j];
        }
        if (ok == 1)
        {
            if (Min == -1)
                Min = s;
            else 
                Min = min(Min, s);
        }
    }
    cout << Min;
    return 0;
}
