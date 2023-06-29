// #1020 - MaxPrim
#include <iostream>

using namespace std;

int v[1005], n;

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    
    return 1;
}

int Max_prime(int st, int dr)
{
    if (st == dr)
    {
        return (is_prime(v[st]) == 1);
    }
    else
    {
        int mid = (st + dr) / 2;
        int max_prime_st = Max_prime(st, mid);
        int max_prime_dr = Max_prime(mid + 1, dr);
        
        if (max_prime_st > max_prime_dr)
            return max_prime_st;
        else
            return max_prime_dr;
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    int M = Max_prime(1, n);
    cout << M << '\n';
    return 0;
}
