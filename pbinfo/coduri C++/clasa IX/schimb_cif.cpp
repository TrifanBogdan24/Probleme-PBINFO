// #2575 - Schimb_cif
#include <iostream>
#include <fstream>
using namespace std;

int invers_fara_capete(int x)
{
    int last = x % 10;
    int q = 10;
    x /= 10;
    int aux = x;    // la final, aux va retina prima cifra a numarului
    int inv = 0;
    while (aux > 9)
    {
        inv = inv * 10 + aux % 10;
        aux = aux / 10;
        q = q * 10;
    }
    x = aux * q + inv * 10 + last;
    return x;
}

int main()
{
    // declarare si initilazare variabile
    int n = 0;
    long long v[1000], nr2 = 0, nr1 = 0, aux = 0, inv = 0, q = 0;
    for (int i = 0; i < 1000; i++)
        v[i] = 0;

    // citirea datelor
    cin >> n;
    for (int i=1;i<=n;i++)
        cin >> v[i];
    
    // calculul pentru fiecare element din vector
    for (int i = 1; i <= n; i++)
        v[i] = invers_fara_capete(v[i]);

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";

    return 0;
}
