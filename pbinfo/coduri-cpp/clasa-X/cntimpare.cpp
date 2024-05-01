// #1028 - CntImpare
#include <iostream>

using namespace std;

int v[1005], n = 0;

int DivideEtImperia(int st, int dr)
{
    if (st == dr)
        return (v[st] % 2);
    else
    {
        int mijl = dr - (dr - st) / 2;      // <=> (st + dr) / 2
        int nr_impare_st = DivideEtImperia(st, mijl);
        int nr_impare_dr = DivideEtImperia(mijl + 1, dr);
        
        return (nr_impare_st + nr_impare_dr);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    cout << DivideEtImperia(1, n);
    cout << "\n";
    return 0;
}
