// #30 - AfisareMultipli

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sub(int n, int k)
{
    int m, v[1000] = {0}, nr = 0, a;
    a = 1;
    m = n;
    
    while (n != 0)
    {
        if (a % k == 0)
        {
            nr++;
            v[m - nr + 1] = a;
            n--;
        }
        a++;
    }
    
    for (int i = 1; i <= m; i++)
        cout << v[i] << " ";
}

// SOLUTIA PBINFO SE TERMINA AICI


int main()
{
    int n = 0, k = 0;
    cout << "n = ";
    cin >> n;
    cout << "k = ";
    cin >> k;

    sub(n, k);

    return 0;
}
