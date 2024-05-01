// #1877 - kMax
#include <iostream>

using namespace std;

int n, k;
long long v[1009], s;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    cin >> k;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);
    
    for (int i = 1; i <= k; i++)
    {
        s -= v[i];
        s += (-v[i]);
    }

    cout << s << '\n';
    return 0;
}
