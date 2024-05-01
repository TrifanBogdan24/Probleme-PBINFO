// #158 - inserare
#include <iostream>

using namespace std;

int main()
{
    int n = 0, p = 0, x = 0, v[30];
    
    for (int i = 0; i < 30; i++)
        v[i] = 0;

    cin >> n >> x >> p;

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    for (int i = n; i >= p; i--)
        v[i + 1] = v[i];
    
    v[p] = x;
    n++;
    
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";

    cout << '\n';
    return 0;
}
