// #1019 - Maxim6
#include <iostream>

using namespace std;

int v[1005], n, M;

int Maxim(int st, int dr)
{
    if (st == dr)
        return v[st];
    else
    {
        int mid = (st + dr) / 2;
        int max_st = Maxim(st, mid);
        int max_dr = Maxim(mid + 1, dr);
        
        if (max_st > max_dr)
            return max_st;
        else
            return max_dr;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    M = Maxim(1, n);
    cout << M << '\n';
    return 0;
}

/* exemplu input
6
4 1 8 4 3 5 
*/