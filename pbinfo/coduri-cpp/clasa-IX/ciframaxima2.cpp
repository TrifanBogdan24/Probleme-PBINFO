// #121 - CifraMaxima2
#include <iostream>
using namespace std;

int main()
{
    int n = 0, cif_max = -1, nr_ap = 0;

    cin >> n;

    while (n)
    {
        if (n % 10 == cif_max) nr_ap++;
        else if (n % 10 > cif_max)
        {
            cif_max = n % 10;
            nr_ap = 1;
        }
        n /= 10;
    }

    cout << cif_max << " " << nr_ap;
    return 0;
}
