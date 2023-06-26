// #1191 - Arhitectura
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    // citiirea vectorului
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    // sortarea descrescatoare a vectorului
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] < v[j])
            {
                int vux = v[i];
                v[i] = v[j];
                v[j] = vux;
            }
        }
    }
    
    // afisarea vectorului ordonat descrescator
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    
    cout << '\n';
    return 0;
}
