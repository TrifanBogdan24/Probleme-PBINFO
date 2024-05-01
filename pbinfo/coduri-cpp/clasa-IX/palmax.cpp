// #280 - PalMax
#include <iostream>
using namespace std;
long long x, P = -1, C;

bool pal(long long  x)
{
    long long aux = 0, inv = 0;
    aux = x;
    while(x)
    {
        inv = inv * 10 + x % 10;
        x /= 10;
    }
    return (aux == inv);
}

int main()
{
    cin >> x;
    while (x)
    {
        if (pal(x) == 1)
        {
            if (x > P)
            {
                P = x;   C = 1;
            } else if (P == x) C++;

        }
    cin>>x;
    }

    if (P == -1) cout << "NU EXISTA";
    else cout << P << ' ' << C;
    return 0;
}
