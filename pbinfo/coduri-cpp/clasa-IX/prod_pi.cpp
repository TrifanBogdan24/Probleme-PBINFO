// #3254 - prod_pi
#include <iostream>
using namespace std;

int n ,impara = 9, para = 0, cif;

int main()
{
    cin >> n;
    
    while (n)
    {
        cif = n % 10;
        
        if (cif > para && cif % 2 == 0)
            para = cif;
    
        if (cif < impara && cif % 2 != 0)
            impara = cif;
    
        n = n / 10;
    }
    
    cout << (para * impara);
    return 0;
}
