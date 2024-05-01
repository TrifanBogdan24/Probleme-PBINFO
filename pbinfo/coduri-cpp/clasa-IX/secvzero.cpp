// #518 - SecvZero
#include <iostream>

using namespace std;

int n, v[1005], st, dr, max_secv, now_secv, start, stop;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    st = dr = 0;
    start = stop = 0;
    max_secv = now_secv = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (v[i])
        {
            now_secv = 0;
        } else {
            now_secv++;
            stop = i;

            if (now_secv == 1)
                start = i;

            if (now_secv > max_secv)
            {
                max_secv = now_secv;
                st = start;
                dr = stop;
            }
        }
        

    }

    cout << st << " " << dr;
    return 0;
}
