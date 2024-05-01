// #117 - CreareNumar1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
void numar(int n, int a[101], int &k)
{
    int Max_val, Min_val, aux, p;
    Max_val = Min_val = a[0];

    for (int i = 1; i < n; i++)
    {
        Max_val = max(Max_val, a[i]);
        Min_val = min(Min_val, a[i]);
    }
    
    aux = Min_val;
    p = 1;
    while (aux != 0)
    {
        aux = aux / 10;
        p = p * 10;
    }

    k = Max_val * p + Min_val;
}
// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, a[101], nr = 0;
    for (int i = 0; i < 101; i++)
        a[i] = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    numar(n, a, nr);
    cout << nr << '\n';
    return 0;
}