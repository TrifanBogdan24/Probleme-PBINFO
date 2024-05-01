// #574 - Complet
#include <iostream>

using namespace std;

int n, v[10000000], t, aux, c, muchi;

int main()
{
    cin >> n;
    muchi = n * (n - 1) / 2;
    v[1] = 1;
    v[0] = 1;
    
    for (int i = 1; i <= muchi; i++)
    {
        c = 0;
        for (int j = 1; j <= v[0]; j++)
        {
            v[j] = v[j] * 3 + c;

            c = v[j] / 10;
            v[j] = v[j] % 10;
        }

        while (c)
        {
            v[0]++;
            v[v[0]] = c % 10;
            c = c / 10;
        }
    }

    for (int i = v[0]; i >= 1; i--)
        cout << v[i];

    cout << '\n';
    return 0;
}
