// #30 - AfisareMultipli
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sub(int n, int k)
{
    for (int i = n; i >= 1; i--)
        cout << (i * k) << ' ';

    cout << '\n';
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0;
    cout << "n = "; cin >> n;
    cout << "k = "; cin >> k;
    sub(n, k);
    return 0;
}
