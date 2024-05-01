// #1329 - sir_zigzag
#include <iostream>
using namespace std;
int n, i, j;
bool OK, ok1 = 1, ok2 = 1, p;
long long v[1005], x;

int main()
{
    cin >> n >> v[1];
    x = v[1];
    p = 1;
    for (i = 2; i <= n; i++)
    {
        cin >> v[i];
        if (p == 1)
        {
            p = 0;
            if (x >= v[i]) ok1 = 0;
            if (x <= v[i]) ok2 = 0;
        } else
        {
            p = 1;
            if (x <= v[i]) ok1 = 0;
            if (x >= v[i]) ok2 = 0;
     }
    x = v[i];
    }
    if (ok1 == 1 || ok2 == 1) cout << "DA";
    else cout << "NU";
    return 0;
}
