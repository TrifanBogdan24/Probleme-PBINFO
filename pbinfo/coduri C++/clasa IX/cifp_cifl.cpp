// #2996 -  CifP_CifI
#include <iostream>

using namespace std;

int nr_cif_paritate(int x, int p)
{
    // stim ca x are exact doua cifre
    
    // va returna numarul cifrelor pare pentru p = 0
    // va returna numarul cifrelor impare pentru p = 1
    
    int nr = 0;

    if (x % 2 == p)
        nr++;

    if ((x / 10) % 2 == p)
        nr++;

    return nr;
}

int main()
{
    int a = 0, b = 0;
    
    cin >> a >> b;

    if (a % 2 == b % 2)
        cout << nr_cif_paritate(a, 0) + nr_cif_paritate(b, 0);
    else
        cout << nr_cif_paritate(a, 1) + nr_cif_paritate(b, 1);

    cout << '\n';
    return 0;
}
