// #2276 - cb
#include <iostream>
#include <algorithm>

using namespace std;

int CB_min(int n, int v[200005], int x)
{
    // subprogramul intoarce indexul celui mai mic numar din vector >= x 
    int st = 1;
    int dr = n;

    int poz = 0;

    while (st <= dr)
    {
        int mid = (st + dr) / 2;

        if (v[mid] >= x)
        {
            poz = mid;
            dr = mid - 1;
        }
        else
            st = mid + 1;
    }
    
    return poz;
}

int CB_max(int n, int v[200005], int x)
{
    // subprogramul intoarce indexul celui mai mare numar din vector <= x 

    int st = 1;
    int dr = n;

    int poz = 0;

    while (st <= dr)
    {
        int mid = (st + dr) / 2;

        if (x >= v[mid])
        {
            poz = mid;
            st = mid + 1;
        }
        else
            dr = mid - 1;
    }
    return poz;
}

int main()
{
    int n = 0, t = 0, x = 0, y = 0, a[200005];

    for (int i = 0; i < 200005; i++)
        a[i] = 0;

    cin >> n >> t;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // ordonarea vectorului pentru a putea aplica algoritmul cautarii binare
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

    for (int i = 1; i <= t; i++)
    {
        cin >> x >> y;

        int poz1 = CB_min(n, a, x);
        int poz2 = CB_max(n, a, y);

        if (poz1 > 0)
            cout << (poz2 - poz1 + 1) << '\n';
        else
            cout << "0\n";
    }

    return 0;
}
