// #3183 - RATC
#include <iostream>

using namespace std;

int n = 0, p = 0, X[1000], Y[1000], nr1 = 0, nr2 = 0, nr3 = 0, x = 0, y = 0,ok=1;

int main ()
{
    cin >> n >> x >> y >> p;

    for (int i = 1; i <= n; i++)
    {
        cin >> X[i] >> Y[i];
        nr1 = nr1 + X[i];
        nr2 = nr2 + Y[i];
        nr3 = nr3 + X[i] - Y[i];
        
        if (nr3 >= y && i < x)
            ok = 0;
    }

    if (p == 1) cout << nr1 << " " << nr2 << " " << nr3;
    else if (ok == 0) cout << "DA";
    else cout << "NU";

    return 0;
}
