// #170 - CifMaxMin
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int cif_min = n % 10;
    int cif_max = n % 10;

    while (n)
    {
        if (n % 10 < cif_min)
            cif_min = n % 10;
        
        if (n % 10 > cif_max)
            cif_max = n % 10;
    
        n = n / 10;
    }

    cout << (cif_min + cif_max);
    return 0;
}
