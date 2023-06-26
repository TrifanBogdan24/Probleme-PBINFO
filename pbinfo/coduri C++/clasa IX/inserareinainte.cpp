// #160 - inserareInainte
#include <iostream>

using namespace std;

int root(int x)
{
    // functia returneaza radacina daca numarul este patrat perfect
    // si valoare -1 altfel
    for (int d = 1; d * d <= x; d++)
        if (d * d == x)
            return d;
    return (-1);    // numarul nu este patrat perfect
}

void insertion(int &n, int v[55], int poz, int x)
{
    for (int i = n; i >= poz; i--)
        v[i + 1] = v[i];
    
    v[poz] = x;
    n++;
}

void afisare(int n, int v[55])
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << ' ';
    cout << '\n';
}

int main()
{
    int n = 0, v[55];

    for (int i = 0; i < 55; i++)
        v[i] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int i = 1;
    while (i <= n)
    {
        int rad = root(v[i]);
        if (rad > 0)
        {
            insertion(n, v, i, rad);
            i = i + 2;
        }
        else
            i++;
    }

    afisare(n, v);

    return 0;
}
