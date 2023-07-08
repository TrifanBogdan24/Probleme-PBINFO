// #2683 - easy_ssc
#include <iostream>

using namespace std;

int n, mid, a[10000], M[10000], k, st, dr, poz;
bool ok = 1;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    k = 1;
    M[1] = a[1];
    
    for (int i = 2; i <= n; i++)
    {
        st = 1;
        dr = k;
        poz = 0;
        
        while (st <= dr)
        {
            mid = (st + dr) / 2;
        
            if (M[mid] < a[i])
            {
                poz = mid;
                dr = mid - 1;
            }
            else
                st = mid + 1;
        }
        
        if (poz == 0)
            M[++k] = a[i];
        else
            M[poz] = a[i];
    }
    
    cout << k << '\n';
    return 0;
}
