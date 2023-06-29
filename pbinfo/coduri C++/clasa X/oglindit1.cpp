// #23 - Oglindit1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void oglindit(int n, int &inv)
{
    inv = 0;
    while (n != 0)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, inv = 0;
    cout << "n = "; cin >> n;
    oglindit(n, inv);
    cout << "inv = " << inv << '\n';
    return 0;
}
