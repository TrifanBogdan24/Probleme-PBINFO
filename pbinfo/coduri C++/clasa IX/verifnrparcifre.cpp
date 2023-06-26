// #291 - VerifNrParCifre
#include <iostream>

using namespace std;

int nr_cif(int x)
{
    int nr = 0;
    
    do {
        nr++;
        x = x / 10;
    } while(x);

    return nr;
}

int checking_nr_digits(int n, int v[105])
{
    for (int i = 1; i <= n; i++)
        if (nr_cif(v[i]) % 2 != 0)
            return 0;

    return 1;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citire
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (checking_nr_digits(n, v))
        cout << "DA\n";
    else
        cout << "NU\n";
    
    return 0;
}
