// #618 - Inaltimi
#include <iostream>
using namespace std;

int main()
{
    int a[1000], v[1000], n, i, j, aux, e;
    cin >> n;
    e = 1;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        v[e] = a[i];
        e++;
    }
    for (i = 1; i < e; i++)
    {
        for (j = i + 1; j<= e; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (j = 1; j <= e; j++)
    {
        for (i = 1; i<= n; i++)
        {
            if (v[j] == a[i])
                cout << i <<" ";
        }
    }
    return 0;
}
