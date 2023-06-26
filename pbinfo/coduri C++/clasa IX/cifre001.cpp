// #2214 - cifre001
#include <iostream>

using namespace std;


int nr_cif(long x)
{
    int nr = 0;
    
    do {
        nr++;
        x /= 10;
    } while (x);

    return nr;
}

int same_cif_poz(long long x, long long y)
{
    // x si y au acelasi numar de cifre
    int nr = 0;
    
    while (x)
    {
        if (x % 10 == y % 10)
            nr++;

        x /= 10;
        y /= 10;
    }

    return nr;
}

int main()
{
    long long n = 0, m = 0;
    cin >> n >> m;

    if (nr_cif(n) != nr_cif(m)) cout << "NU";
    else cout << "DA\n" << same_cif_poz(n, m);
    
    return 0;
}
