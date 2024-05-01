// #766 - NrPare
#include <iostream>

using namespace std;

int nr_el_pare(int n, int m, int a[105][105], int lin)
{
    // functia returneaza numarul de elemente pare de pe linia lin
    
    if (lin > n)
        return -1;      // indicele liniei iese din matrice
    
    int nr = 0;

    for (int j = 1; j <= m; j++)
        if (a[lin][j] % 2 == 0)
            nr++;

    return nr;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, max_nr_odd_el = -1, a[105][105], cnt_odd[105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = cnt_odd[i] = 0;

    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    // calcului numarului de elemente pare de pe fiecare linie
    // si a maximului dintre aceste numere
    for (int i = 1; i <= n; i++)
    {
        cnt_odd[i] = nr_el_pare(n, m, a, i);
        if (cnt_odd[i] > max_nr_odd_el)
            max_nr_odd_el = cnt_odd[i];
    }

    // afisarea indicilor
    for (int i = 1; i <= n; i++)
        if (cnt_odd[i] == max_nr_odd_el)
            cout << i << " ";

    cout << '\n';
    return 0;
}
