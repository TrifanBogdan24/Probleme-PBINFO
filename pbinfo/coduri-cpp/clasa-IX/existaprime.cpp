// #506 - ExistaPrime
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    // functia intoarce TRUE pentru numere prime
    // si FALSE daca numarul primit ca parametru nu este prim

    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, ok = 0, v[205];

    for (int i = 0; i < 205; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];
        
    // verificarea numerelor daca sunt prime sau nu
    for (int i = 1; i <= n; i++)
        if (is_prime(v[i]))
            ok = 1;
    
    if (ok)
        cout << "DA\n";
    else
        cout << "NU\n";

    return 0;
}
