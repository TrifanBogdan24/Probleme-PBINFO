// #489 - Afisare1
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

    for (int i = 1; i <= n / 2; i++)
        cout << v[i] << " " << v[n - i + 1] << " ";

    if (n % 2 == 1)
        cout << v[n / 2 + 1];   // afisam elementul din mijloc

    cout << '\n';
    return 0;
}
