// #29 - MaxPrime
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void sub(int n,int &a,int &b)
{
    a = n - 1;
    while (!is_prime(a))
        a--;

    b = a - 1;
    while (!is_prime(b))
        b--;
}

// SOLUTIA PBINFO SE TERMINA AICI
int main()
{
    int n = 0, a = 0, b = 0;
    cout << "n = "; cin >> n;

    sub(n, a, b);
    cout << "a = " << a << '\n';
    cout << "b = " << b << '\n'; 
 
    return 0;
}