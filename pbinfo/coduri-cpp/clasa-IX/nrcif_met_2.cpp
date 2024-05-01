// #449 - nrcif
#include <iostream>

using namespace std;

int a, nr_cif;

int main()
{
    cin >> a;
    
    // stim ca numarul este natural si are maxim 3 cifre
    if (a < 10) cout << 1;
    else if (a < 100) cout << 2;
    else cout << 3;
    
    return 0;
}
