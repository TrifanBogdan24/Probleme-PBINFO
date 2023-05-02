// #312 - putereN
#include <iostream>
using namespace std;
int n, v[10000], x, i, j, t;

int main()
{
    cin >> x >> n;
    v[0] = 1;
    v[1] = 1;
    for (i = 1; i <= n; i++)
    {
        j = 1;
        t = 0;
        while (j <= v[0] || t)
        {
            t = t + v[j] * x;
            v[j] = t % 10;
            t = t / 10;
            j++;
        }
        v[0] = j - 1;
    }

    for (i = 1; i <= v[0] / 2; i++)
        swap(v[i], v[v[0] - i + 1]);

    for (i = 1; i <= v[0]; i++)
        cout << v[i];
    
    return 0;
}
