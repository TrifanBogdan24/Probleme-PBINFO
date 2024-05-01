// #2987 - Buletin
#include <iostream>

using namespace std;

int AN, LUNA, ZI;
long long n, q = 1000000;

int main()
{
    cin >> n;
    AN = (n / q) % 100;
    q = q * 100;

    LUNA = (n / q) % 100;
    q = q * 100;

    ZI = (n / q) % 100;
    
    if (ZI < 10) cout << "0";
    cout << ZI << " ";
    
    if (LUNA < 10) cout << "0";
    cout << LUNA << " ";
    
    if (AN < 10) cout << "0";
    cout << AN;

    return 0;
}
