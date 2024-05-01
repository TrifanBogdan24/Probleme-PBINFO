// #1843 - FSumVecRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE MUSIA RECURSIVA

int suma(int v[105], int n, int i, int j)
{
    if (i != 0)
        return v[i - 1] + suma(v, n, i - 1, j);
    else if (j != n)
        return v[j + 1] + suma(v, n, i, j + 1);
    else
        return 0;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[105], x = 0, y = 0;
    for (int i = 0; i < 105; i++)
        v[i] = 0;

    cin >> n >> x >> y;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << "Suma elementelor vectorului = " << suma(v, n, x, y) << '\n';
    return 0;
}
