// #371 - Numarare
#include <iostream>

using namespace std;
int v[1000], n, nr_pairs;

int sum_cif(int x)
{
    // subprogramul returneaza suma cifrelor unui numar
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    nr_pairs = 0;
    for (int i = 1; i < n; i++)
        if (sum_cif(v[i]) == sum_cif(v[i + 1]))
            nr_pairs++;
    
    cout << nr_pairs;
    return 0;
}
