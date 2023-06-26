// #490 - AfisareMinMax
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

    int max_val = v[1];
    int min_val = v[1];
    int poz_min = 1;
    int poz_max = 1;
    
    for (int i = 2; i <= n; i++)
    {
        if (v[i] > max_val)
        {
            max_val = v[i];
            poz_min = i;
        }

        if (v[i] < min_val)
        {
            min_val = v[i];
            poz_max = i;
        }
    }
    
    if (poz_max >= poz_min)
    {
        for (int i = poz_min; i <= poz_max; i++)
            cout << v[i] << " ";
    }
    else if (poz_min > poz_max)
    {
        for (int i = poz_max; i <= poz_min; i++)
            cout << v[i] << " ";
    }
    
    cout << '\n';
    return 0;
}
