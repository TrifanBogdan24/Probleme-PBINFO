// #1153 - VerifParCifreDivImp
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int v[105], i, j, n;

int nr_cifre(int x)
{
    int nr = 0;

    do {
        nr++;
        x /= 10;
    } while (x);

    return nr;
}

int Max(int st, int dr)
{

    if (st == dr)
    {
        return (nr_cifre(v[st]) % 2 == 0);
    }
    else
    {
        int mid = (st + dr) / 2;
        
        int verif_st = Max(st, mid);
        int verif_dr = Max(mid + 1, dr);
        
        return (verif_st && verif_dr);
    }
}

int main()
{
    cin >> n;
    for (j = 1; j <= n; j++)
        cin >> v[j];
    if (Max(1, n) == 0)
        cout << "NU";
    else
        cout << "DA";

    cout << '\n';

    return 0;
}

/* exemplu input
5
2820 82 65 1026 84
*/
