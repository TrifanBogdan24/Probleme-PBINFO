// #553 - PozMinMax
#include <iostream>

using namespace std;

int main()
{
    int n = 0, v[1005];
    
    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        v[i] = 0;
    
    int max_val = v[1];
    int min_val = v[1];
    int imin = 1;
    int imax = 1;
    
    for (int i = 2; i <= n; i++)
    {
        if (max_val < v[i])
        {
            max_val = v[i];
            imax = i;
        }

        if (min_val > v[i])
        {
            min_val = v[i];
            imin = i;
        }
    }

    cout << imin << " " << imax << '\n';
    return 0;
}
