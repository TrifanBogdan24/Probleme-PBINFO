// #523 - SecvEgale
#include <iostream>

using namespace std;

int n, v[1005], st, dr, max_secv, now_secv, start, stop;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    st = dr = 1;
    start = stop = 1;
    max_secv = now_secv = 1;
    
    for (int i = 2; i <= n; i++)
    {
        if (v[i] != v[i - 1])
        {
            now_secv = 1;
            start = stop = i;
        } else {
            now_secv++;
            stop = i;

            if (now_secv >= max_secv)
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
