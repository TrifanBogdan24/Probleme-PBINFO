// #305 - Cifre comune
#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    bool ok = 0, cif_ap1[10], cif_ap2[10];
    
    for (int i = 0; i < 10; i++)
        cif_ap1[i] = cif_ap2[i] = false;
    
    cin >> n >> m;
    
    while (n)
    {
        cif_ap1[n % 10] = true;
        n /= 10;
    }

    while (m)
    {
        cif_ap2[m % 10] = true;
        m /= 10;
    }

    ok = false;
    for (int i = 0; i < 10; i++)
        if (cif_ap1[i] && cif_ap2[i])
            ok = true;

    if (ok)
        cout << "DA\n";
    else
        cout << "NU\n";

    return 0;
}
