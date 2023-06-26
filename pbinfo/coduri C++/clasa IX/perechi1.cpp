// #357 - Perechi1
#include <iostream>

using namespace std;

struct pereche {
    int h1, h2;
};

int n;
pereche v[1005];

int abs_dif(int x, int y)
{
    // returneaza diferenta in modul
    if (x > y)
        return (x - y);
    else
        return (y - x);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i].h1 >> v[i].h2;

    int max_dif = abs_dif(v[1].h1, v[1].h2);
    int poz = 1;

    for (int i = 2; i <= n; i++)
    {
        int dif = abs_dif(v[i].h1, v[i].h2);

        if (dif > max_dif)
        {
            max_dif = dif;
            poz = i;
        }
    }
    
    cout << poz;
    return 0;
}
