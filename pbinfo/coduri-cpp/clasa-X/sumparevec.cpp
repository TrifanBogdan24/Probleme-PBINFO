// #1017 - SumPareVec
#include <iostream>

using namespace std;

int n, a[10001];

int S(int st, int dr)
{

    if (st == dr)
    {
        if (a[st] % 2 == 0)
            return a[st];
        else
            return 0;
    }
    else
    {
        int mid = (st + dr) / 2;

        int nr_pare_st = S(st, mid);
        int nr_pare_dr = S(mid + 1, dr);

        return (nr_pare_st + nr_pare_dr);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    cout << S(1, n) << '\n';

    return 0;
}
