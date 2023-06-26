// #274 - 3minime
#include <iostream>

using namespace std;

int n, v[105];

int main()
{
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // sortarea descreascatoare a vectorului
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] < v[j])
                swap(v[i], v[j]);

    // .... > v[n - 2] > v[n - 1] > v[n]
    cout << v[n - 2] << " " << v[n - 1] << " " << v[n];
    return 0;
}
