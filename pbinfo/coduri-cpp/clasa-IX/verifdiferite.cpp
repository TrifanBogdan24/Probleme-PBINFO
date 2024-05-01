// #502 - VerifDiferite
#include <iostream>

using namespace std;

bool all_diff(int n, int v[505])
{
    // subprogramul (functia) intoarce TRUE daca toate elementele vectorului sunt diferite
    // si FALSE daca exista cel putin doua egale

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] == v[j])
                return 0;

    return 1;
}

int main()
{
    int n = 0, v[505];

    for (int i = 0; i < 505; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    

    if (all_diff(n, v))
        cout << "DA\n";
    else
        cout << "NU\n";
    
    return 0;
}
