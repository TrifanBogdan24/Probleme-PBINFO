// #1015 - SumVec
#include <iostream>

using namespace std;

int v[1000], n, S;

int Divide_sum(int st, int dr)
{
    if (st == dr)
        return v[st];
    else
    {
        int mid = (st + dr) / 2;
        int suma_st = Divide_sum(st, mid);
        int suma_dr = Divide_sum(mid + 1, dr);
        
        return (suma_st + suma_dr);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    S = Divide_sum(1, n);
    cout << S << '\n';
    return 0;
}

/* exemplu input
6
4 1 8 4 3 5
*/
