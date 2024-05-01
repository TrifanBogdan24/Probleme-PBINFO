// 316 - Suma divizorilor
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int n;
int sum_div(int n)
{
    if (n == 1)
        return 1;

    int sum = n + 1;
    for (int d = 2; d <= n / 2; d++)
        if (n % d == 0)
            sum += d;

    return sum;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cout << "Numarul N = ";
    cin >> n;
    cout << "Suma divizorilor lui " << n << " = " << sum_div(n) << '\n';
    return 0;
}
