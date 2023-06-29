// #1150 - VerifPareDivImp
#include <iostream>

using namespace std;

int v[105], n;

bool Divide_nr_pare(int st, int dr)
{
    if (st == dr)
    {
        return (v[st] % 2 == 0);
    }
    else
    {
        int mid = (st + dr) / 2;
        bool verif_st = Divide_nr_pare(st, mid);
        bool verif_dr = Divide_nr_pare(mid + 1, dr);
        
        return (verif_st && verif_dr);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (Divide_nr_pare(1, n) == 1)
        cout << "DA";
    else
        cout << "NU";
    
    cout << '\n';
    return 0;
}

/* exemplu input
5
2 8 6 10 8
*/
