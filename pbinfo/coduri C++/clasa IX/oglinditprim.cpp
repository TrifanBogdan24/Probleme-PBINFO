// #407
#include <iostream>

using namespace std;
int n,i;
long long v[1005],S;

long long oglindit(long long x)
{
    // functia intoarce inversul numarului
    // intoarce numarul scris de la dreapa la stanga
    long long aux = 0;
    while (x)
    {
        aux = aux * 10 + x % 10;
        x = x / 10;
    }
    return aux;
}

bool prim(long long x)
{
    // functia intoarce 1 pentrun numere prime
    // si 0 pentru restul
    long long d=2;

    while (d * d <= x)
    {
        if (x % d == 0)
            return 0;
        d++;
    }
    return 1;
}

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (prim(oglindit(v[i])) == 1)
            S += v[i];
    }
    cout << S;
    return 0;
}
