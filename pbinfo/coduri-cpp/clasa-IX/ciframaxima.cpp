// #68 - CifraMaxima
#include <iostream>

using namespace std;

int main()
{
    int n = 0, max_cif = 0;
    cin >> n;

    while (n)
    {
        if (n % 10 > max_cif)
            max_cif = n % 10;
        n = n / 10;
    }

    cout << max_cif << '\n';
    return 0;
}