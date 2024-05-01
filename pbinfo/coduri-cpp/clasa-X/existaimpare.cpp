// #1148 - ExistaImpareDivImp
#include <iostream>

using namespace std;

int n, a[10001];

int S(int st, int dr)
{
    int m, nr1, nr2;
    if (st == dr)
        return a[st];
    else
    {
        int mijl = (st + dr) / 2;
        int elem_st = S(st, mijl);
        int elem_dr = S(mijl + 1, dr);
        
        return (elem_st % 2 == 1 || elem_dr % 2 == 1);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    if (S(1, n) == 1)
        cout << "DA";
    else
        cout << "NU";
    
    cout << "\n";
    return 0;
}
