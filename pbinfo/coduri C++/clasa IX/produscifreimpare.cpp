// #65 - ProdusCifreImpare
#include <iostream>

using namespace std;

long long n = 0;
int prod = 1, ok = 1, cif = 0;

int main()
{
    cin >> n;
    prod = 1;
    ok = 1;
    
    while (n)
    {
        if (n % 2 != 0)
        {
            cif = n % 10;
            prod = prod * cif;
            ok = 0;
        }
        
        n = n / 10;
    }

    if (ok == 0) cout << prod;
    else cout << "-1";
    
    return 0;
}
