// #729 - Zona
#include <iostream>
#include <fstream>
using namespace std;
int n, i, j, a[250][250], v[125*125], nr = 0;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1 ; j <= n; j++)
        {
            cin >> a[i][j];
            if (i > j && i + j < n + 1)
                v[++nr] = a[i][j];
        }

    }



    for (i = 1; i < nr; i++)
        for (j = i + 1; j <= nr; j++)
            if (v[i] > v[j])
                swap(v[i],v[j]);
    
    for (i = 1; i <= nr; i++)
        if (v[i] != v[i - 1])
            cout << v[i] << ' ';

    return 0;
}
