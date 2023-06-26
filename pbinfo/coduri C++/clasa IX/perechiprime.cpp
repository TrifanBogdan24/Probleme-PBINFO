// #434 - PerechiPrime
#include <iostream>

using namespace std;
int n, p = 3, q = 5, d, ok1, ok2;

int main()
{
    cin >> n;
    cout << p << " " << q << '\n';
    n--;

    while (n)
    {
        p += 2;
        q += 2;

        d = 2;
        ok1 = 1;

        while (d * d <= p && ok1 == 1)
        {
            if (p % d == 0) ok1 = 0;
            else d++;
        }


        d = 2;
        ok2 = 1;

        while (d * d <= q && ok2 == 1)
        {
            if (q % d == 0) ok2 = 0;
            else d++;
        }

        if (ok1 == 1 && ok2 == 1)
        {
            cout << p << " " << q << '\n';
            n--;
        }

    }

    return 0;
}
