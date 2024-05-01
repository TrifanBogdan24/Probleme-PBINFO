// #427 - BazaMinima
#include <iostream>

using namespace std;
int i, n, Max = 0;
long long v[200];


int Baza(long long x)
{
    int y = x % 10;
    int cif = 0;
    while (x)
    {
        cif = x % 10;
        y = max(y, cif);
        x = x / 10;
    }
    return y;
}

int main()
{
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cin >> v[i];
        Max = max(Max, Baza(v[i]));
    }
    cout << Max + 1;
    return 0;
}
