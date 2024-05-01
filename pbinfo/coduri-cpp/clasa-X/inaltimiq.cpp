// #1156 - InaltimiQ
#include <iostream>

using namespace std;

int n, k;
struct nod {
    int h, p;
};
nod v[100500];

int part(int st, int dr)
{
    int  poz = st - 1;
    long long p = v[dr].h;
    
    for (int i = st; i <= dr; ++i)
        if (v[i].h <= p)
            swap(v[++poz], v[i]);

    return poz;
}

void quickS(int st, int dr)
{
    int poz, nr;
    poz = part(st, dr);

    if (st < poz)
        quickS(1, poz - 1);
    
    if (dr > poz + 1)
        quickS(poz + 1, dr);
}

void citire()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].h;
        v[i].p = i;
    }
}

int main()
{
    citire();
    quickS(1, n);

    for (int i = 1; i <= n; i++)
        cout << v[i].p << ' ';

    cout << '\n';
    return 0;
}
