// #2884 - Rucsac2
#include <iostream>

using namespace std;

int n, g, gmax, s[10009], Max, maxx = -1;
struct furt {
    int g, p;
};
furt v[1009];

int main()
{
    cin >> n >> gmax;
    for (int i = 1; i <= n; i++)
        cin >> v[i].g >> v[i].p;
    
    s[0] = 0;
    Max = 0;
    
    for (int i = 1; i <= gmax; i++)
        s[i] = -1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= gmax - v[i].g; j++)
        {
            if (j + v[i].g <= gmax)
            {
                if (s[j] != -1 && s[j + v[i].g] < s[j] + v[i].p)
                {
                    s[j + v[i].g] = s[j] + v[i].p;
                }
            }
        }

        Max += v[i].g;
    }
    
    maxx = -1;
    for (int i = 0; i <= gmax; i++)
        if (s[i] > maxx)
            maxx = s[i];
    
    cout << maxx << '\n';

    return 0;
}
