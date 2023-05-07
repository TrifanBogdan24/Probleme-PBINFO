// #491 - Suma2
#include <iostream>
using namespace std;
int n, a[1009], i, poz1 = 0, poz2 = 0;
long long s;

int main()
{
    cin >> n;
    poz1 = 0;
    poz2 = 0;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0 && poz1 == 0) poz1 = i;
        if (a[i] % 2 == 0) poz2 = i;
    }

    if (poz1 == 0) cout << "NU EXISTA";
    else
    {
        for (i = poz1; i <= poz2; i++)
            s += a[i];
        
        cout<<s;
    }
    return 0;
}
