// #660 - Triunghiuri
#include <iostream>
#include <cmath>
using namespace std;
int n, i, j, d, v[150], nr;

int triunghi(int l1, int l2, int l3)
{
    // subprogramul returneaza 1 daca laturile formeaza un triunghi
    // si 0 altfel
    if (l1 + l2 <= l3) return 0;
    if (l2 + l3 <= l1) return 0;
    if (l1 + l3 <= l2) return 0;
    return 1;
}
int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> v[i];

    for (i = 1; i <= n; i++)
        for (j = i + 1; j <= n; j++)
            for (d = j + 1; d <= n; d++)
                nr += triunghi(v[i], v[j], v[d]);
    cout<<nr;
    return 0;
}
