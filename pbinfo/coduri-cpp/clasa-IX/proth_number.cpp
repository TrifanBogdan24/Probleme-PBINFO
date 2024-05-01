#include <iostream>
#include <fstream>
using namespace std;
long long n, nr, q;

int main()
{
    cin >> n;
    q = n - 1;
    nr = 0;
    while (q % 2)
    {
        nr++;
        q /= 2;
    }
    if (nr > 1 && q % 2 ==1 ) cout << "DA";
    else cout << "NU";
    return 0;
}
