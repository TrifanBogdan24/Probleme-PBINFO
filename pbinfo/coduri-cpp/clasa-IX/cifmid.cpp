// #447 - cifmid
#include <iostream>

using namespace std;
int a, cif1, cif2, cif3;

int main()
{
    cin >> a;
    cif1 = a/ 100;
    cif2 = a % 10;
    cif3 = a / 10 % 10;

    // prima cifra este in mijloc, ca valoare
    if (cif2 <= cif1 && cif1 <= cif3) cout << cif1;
    if (cif3 <= cif1 && cif1 <= cif2) cout << cif1;
    
    // a doua cifra este in mijloc, ca valoare
    if (cif1 <= cif2 && cif2 <= cif3) cout << cif2;
    if (cif3 <= cif2 && cif2 <= cif1) cout << cif2;

    // a treia cifra este in mijloc, ca valoare
    if (cif2 <= cif3 && cif3 <= cif1) cout << cif3;
    if (cif1 <= cif3 && cif3 <= cif2) cout << cif3;
    
    return 0;
}
