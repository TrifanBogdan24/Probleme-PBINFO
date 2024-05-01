// #2288 - CifraImparaMaxima
#include <iostream>

using namespace std;

int main()
{
    int n = 0, cif_max = -1;

    cin >> n;
    
    while (n)
    {
        if (n % 2 != 0 && cif_max < n % 10)
            cif_max = n % 10;
        n = n / 10;
    }
    
    if (cif_max > 0)
        cout << cif_max;
    else
        cout << "nu exista";

    cout << '\n';
    return 0;
}
