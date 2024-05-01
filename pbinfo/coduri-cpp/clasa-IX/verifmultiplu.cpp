// #292 - VerifMultiplu
#include <iostream>

using namespace std;

bool multiple(int n, int v[105])
{
    if (v[n] == 0)
        return 0;   // impartire imposibile (impartie la 0)

    for (int i = 1; i < n; i++)
        if (v[i] % v[n] != 0)
            return 0;
    
    return 1;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, ok = 1, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // ciitre
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (multiple(n, v))
        cout << "DA\n";
    else
        cout << "NU\n";

    return 0;
}
