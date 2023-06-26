// #2601 - sumapatratecifre
#include <iostream>

using namespace std;

int n, sum = 0, cif;

int main()
{
    cin >> n;
    
    while (n)
    {
        cif = n % 10;
        sum += cif * cif;
        n /= 10;
    }

    cout << sum;
    return 0;
}
