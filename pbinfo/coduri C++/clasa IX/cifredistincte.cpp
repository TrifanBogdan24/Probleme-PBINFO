// #293 - CifreDistincte
#include <iostream>

using namespace std;
int n, OK = 1;
long long a[1000];

int cif_distincte(int x)
{
    // subprogramul returneaza 1 daca numarul x are cifre distincte
    // si 0 altfel
    int v[10];
    
    for (int i = 0; i < 10; i++)
        v[i] = 0;

    do {
        v[x % 10]++;
        x /= 10;
    } while (x);

    for (int i = 0; i < 10; i++)
        if (v[i] > 1)
            return 0;

    return 1;
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    OK = 1;
    for (int i = 1; i <= n; i++)
        if (!cif_distincte(a[i]))
            OK = 0;
        
    if (OK == 1) cout << "DA";
    else cout << "NU";
    return 0;
}
