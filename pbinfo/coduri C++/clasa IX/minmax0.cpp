// #486 - MinMax0
#include <iostream>

using namespace std;

int main()
{
    int n = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int maxim = v[1];
    int minim = v[1];
    
    for (int i = 2; i <= n; i++)
    {
        if (v[i] > maxim)
            maxim = v[i];

        if (minim > v[i])
            minim = v[i];
    }

    cout << minim << " " << maxim << '\n';
    return 0;
}
