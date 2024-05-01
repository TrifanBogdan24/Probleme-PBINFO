// #309 - Permutare
#include <iostream>
using namespace std;
int i, j, n, v[150];
bool OK = 1;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++) cin >> v[i];

    for (i = 1; i < n; i++)
        for (j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    i = 1;
    while (OK == 1 && i <= n)
    {
        if (v[i] != i) OK=0;
        else i++;
    }
    if (OK == 1) cout << "DA";
    else cout << "NU";
    return 0;
}
