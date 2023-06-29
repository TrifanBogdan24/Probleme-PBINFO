// #1149 - ExistaPrimeDivImp
#include <iostream>

using namespace std;

int v[1000], n;

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

bool Max(int st, int dr)
{
    if (st == dr)
    {
        return (is_prime(v[st]) == 1);
    }
    else
    {
        int mid = (st + dr) / 2;
        bool verif_st = Max(st, mid);
        bool verif_dr = Max(mid + 1, dr);

        return (verif_st == 1 || verif_dr == 1);
    }

}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (Max(1, n) == 0)
        cout << "NU";
    else
        cout << "DA";

    cout << '\n';
    return 0;
}

/* exemplu input
5
21 8 6 10 8
*/
