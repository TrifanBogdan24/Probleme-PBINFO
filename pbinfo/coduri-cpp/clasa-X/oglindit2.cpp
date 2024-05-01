// #24 - Oglindit2
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int oglindit(int n)
{
    int inv = 0;
    while (n)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }

    return inv;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << "Inversul lui " << n << " = " << oglindit(n) << '\n';
    return 0;
}
