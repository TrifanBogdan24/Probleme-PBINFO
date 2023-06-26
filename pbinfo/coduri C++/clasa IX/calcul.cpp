// #451 - calcul
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    int prim_cif = n / 10;
    int ult_cif = n % 10;

    if (n <= 15) cout << (n * n);
    else if (n >= 16 && n <= 30) cout << (prim_cif + ult_cif);
    else cout << (prim_cif + ult_cif);
    
    return 0;
}
