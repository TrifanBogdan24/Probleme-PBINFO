// #294 - EgaleOglindit
#include <iostream>

using namespace std;

int invers(int x)
{
    // functia intoarce numarul format din cifrele parametrului, in ordinea inversa in care apar
    int inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return inv;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, v[105], ok = 0;

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citire
    cin >> n;
    for (int i = 2; i <= n; i++)
        cin >> v[i];
    
    // verificare existenta inversului
    int inv = invers(v[1]);
    for (int i = 1; i <= n; i++)
        if (v[i] == inv)
            ok = 1;
    
    if (ok)
        cout << "DA\n";
    else
        cout << "NU\n";

    return 0;
}
