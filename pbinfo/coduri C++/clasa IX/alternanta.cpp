// #503 - Aleternanta
#include <iostream>

using namespace std;
int main()
{
    int n, v[1005], nr = 0, ok = 1;
    
    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    for (int i = 1; i <= n; i++)
    {
        if (v[i])
            nr++;
        else
            nr = 0;

        if (nr > 1)
            ok = 0;
    }
    
    if (ok)
        cout << "DA\n";
    else
        cout << "NU\n";
    
    return 0;
}