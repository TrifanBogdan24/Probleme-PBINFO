// #546 - Afisare0
#include <iostream>
using namespace std;

int main()
{
    int n = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        if (v[i] % v[n] == 0)
            cout << v[i] << " ";

    cout << '\n';
    return 0;
}
