// #2805 - Duplicare

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void duplicare(int &n)
{
    int a[11] = {0}, nr = 0;

    while (n != 0)
    {
        nr++;
        a[nr] = n % 10;
        n = n / 10;
    }
    
    for (int i = 1; i <= (nr + 1) / 2; i++)
        swap(a[i], a[nr - i + 1]);
    
    for (int i = 1; i <= nr; i++)
    {
        n = n * 10 + a[i];
        if (n % 2 == 0)
            n = n * 10 + a[i] / 2;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;

    duplicare(n);
    cout << "noul n = " << n << '\n';

    return 0;
}
