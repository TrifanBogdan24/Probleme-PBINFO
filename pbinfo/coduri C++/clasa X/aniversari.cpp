// #1013 - Aniversari
#include <iostream>

using namespace std;

struct date {
    int a, l, z, o;
};
date a[1005];

int n, M, Nr, p, q, ok = 1;

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].a >> a[i].l >> a[i].z;
        a[i].o = i;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i].a > a[j].a)
                swap(a[i], a[j]);

            if (a[i].a == a[j].a)
                if (a[i].l > a[j].l)
                    swap(a[i], a[j]);

            if (a[i].a == a[j].a && a[i].l == a[j].l)
                if (a[i].z > a[j].z)
                    swap(a[i], a[j]);
            if (a[i].a == a[j].a && a[i].l == a[j].l && a[i].z == a[j].z)
                if (a[i].o > a[i].o)
                    swap(a[i], a[j]);
        }
    }

    q = a[1].o;
    p = a[n].o;
    cout << p << " " << q << '\n';

    return 0;
}
