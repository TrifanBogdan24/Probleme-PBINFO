// #289 - ExistaImpare
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, ok = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;;

    // citirea sirului
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // verificarea daca exista elemente impare
    ok = 0;
    for (int i = 1; i <= n; i++)
        if (v[i] % 2 != 0)
            ok = 1;
    
    if (ok)
        cout << "DA\n";
    else
        cout << "NU\n";

    return 0;
}
