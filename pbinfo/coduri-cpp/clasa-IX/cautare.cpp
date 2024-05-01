// #507 - Cautare
#include <iostream>

using namespace std;

int CB(int n, long long v[25000], long long x)
{
    // subprogramul returneaza 1 daca x se afla in vectorul v
    // si 0 altfel
    int st = 1;
    int dr = n;
    while (st <= dr)
    {
        int mijl = st + (dr - st) / 2;

        if (v[mijl] == x)
            return 1;   // am gasit numarul in vector
        
        if (v[mijl] < x) st = mijl + 1;
        else dr = mijl - 1;
    }

    return 0;   // nu am gasit elementul in vector    
}

int main()
{
    // declarare si initializare variabile
    int n = 0, m = 0;
    long long x[25000], y[200000];

    for (int i = 0; i < 25000; i++)
        x[i] = 0;

    for (int i = 0; i < 200000; i++)
        y[i] = 0;

    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> y[i];

    // sortearea crescatoare a vectorului x
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (x[i] > x[j])
                swap(x[i], x[j]);
    
    // cautarea binara a fiecarui element din y in x
    for (int i = 1; i <= m; i++)
        cout << CB(n, x, y[i]) << " ";

    return 0;
}
