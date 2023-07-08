// #2684 - hard_ssc
#include <iostream>

using namespace std;

int n, v[100000], a[100000], k, st, dr, m, rasp;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        int x = v[i];
        
        if (!k)
            a[++k] = v[i];
        else
        {
            st = 1;
            dr = k;
            rasp = 0;
            
            while (st <= dr)
            {
                m = (st + dr) / 2;
                if (x > a[m])
                {
                    rasp = m;
                    dr = m - 1;
                }
                else
                    st = m + 1;
            }

            if (!rasp)
                a[++k] = v[i];
            else
                a[rasp] = x;
        }
    }
    
    cout << k << '\n';

    return 0;
}
