// #1582 - max_min
#include <iostream>
using namespace std;

int n;
long long v[1000], s_max, s_min, x, y;

int sum_cif(int x)
{
    // subprogramul returneaz suma cifrelor numarului primit ca parametru
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main()
{
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    x = y = v[1];   // x pentru minim si y pentru maxim
    s_max = s_min = sum_cif(v[1]);
    
    for (int i = 1; i <= n; i++)
    {
        int sum = sum_cif(v[i]);
    
        if (sum < s_min)
        {
            s_min = sum;
            x = v[i];
        }
    
        if (sum > s_max)
        {
            s_max = sum;
            y = v[i];
        }
    }
    
    cout << x << '\n' << y;
    return 0;
}
