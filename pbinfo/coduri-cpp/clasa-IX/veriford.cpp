// #287 - VerifOrd
#include <iostream>
using namespace std;

int main ()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, ok = 0, v[505];
    for (int i = 0; i < 505; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        for (int j = 1; j <= m; j++)
            cin >> v[j];
        
        ok = 1;
        for (int j = 2; j <= m; j++)
            if (v[j - 1] > v[j])
                ok = 0;
        cout << ok << " ";
    }
    return 0;
}
