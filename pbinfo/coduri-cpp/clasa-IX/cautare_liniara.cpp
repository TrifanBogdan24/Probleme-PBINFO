// #507 - Cautare
#include <iostream>

using namespace std;

int cautare_liniara(int n, int v[25005], int x)
{
    // subprogramul returneaza 1 daca x se afla in vectorul v
    // si 0 altfel
    for (int i = 1; i <= n; i++)
        if (v[i] == x)
            return 1;   // elementul a fost gasit

    return 0;   // elementul nu a fost gasit
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, x = 0, v[25005];
    for (int i = 0; i < 25005; i++)
        v[i] = 0;
    
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        // rezolvarea problemei
        if (cautare_liniara(n, v, x)) cout << "1 ";
        else cout << "0 ";
    }
    return 0;
}
