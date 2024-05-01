// #904 - Concat

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int concat(int a, int b)
{
    int c, p = 1;
    c = b;
    
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
    int a = 0, b = 0;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << concat(a, b) << '\n';

    return 0;
}
