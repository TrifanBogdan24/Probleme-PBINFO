// #904 - Concat
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int a, b;

int concat(int a, int b)
{
    int cp = 1;
    int c = b;

    while (c != 0)
    {
        p = p * 10;
        c = c / 10;
    }

    return a * p + b;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cin >> a >> b;
    cout << concat(a, b) << '\n';
    return 0;
}
