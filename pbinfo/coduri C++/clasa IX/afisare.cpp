// #488 - Afisare
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

    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            cout << v[i] << " ";

    cout << '\n';

    for (int i = n; i >= 1; i--)
        if (i % 2 != 0)
            cout << v[i] << " ";
    
    cout << '\n';
    return 0;
}
