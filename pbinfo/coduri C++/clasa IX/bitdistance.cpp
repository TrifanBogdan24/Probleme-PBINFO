// #3590 - bitdistance
#include <iostream>
using namespace std;
long long x;
int poz1, poz2;
bool ok = 1;

int main()
{
    cin >> x;
    for (int i = 0; i < 64; i++)
    {
        if (x & (1LL << i))
        {
            if (ok == 1)
            {
                poz1 = i;
                ok = 0;
            }
            poz2 = i;
        }

    }
    cout << poz2 - poz1 + 1;
    return 0;
}
