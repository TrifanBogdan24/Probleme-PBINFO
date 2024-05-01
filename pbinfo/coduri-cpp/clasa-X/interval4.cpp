// #2792 - Interval4
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prime(int x)
{
    // functia intoarce TRUE pentru numere prime

    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return false;

    return true;
}

int interval(int n)
{
    int x = n;
    while (!is_prime(x))
        x++;
    
    while (!is_prime(x + 1))
        x++;

    return x;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;

    cout << interval(n) << '\n';
    return 0;
}
