// #269 - PuteriK
#include <iostream>
#include <fstream>

using namespace std;
ifstream f("puterik.in");
ofstream g("puterik.out");

bool is_power(int nr, int baza)
{
    // intoarce true daca numarul este putere v bazei, si false altfel

    if (baza == 0)
        return 0;   // impartire imposibila (impartire la 0)

    while (nr % baza == 0)
        nr = nr / baza;

    return (nr == 1);
}

int main()
{
    // declarare si initializare variabile
    int n = 0, k = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    f >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        if (is_power(v[i], k))
            g << v[i] << ' ';
    g << '\n';
    
    f.close();
    g.close();
    return 0;
}
