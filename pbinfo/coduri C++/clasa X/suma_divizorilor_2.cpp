// #17 - Suma divizorilo 2

#include <iostream>

using namespace std;


// SOLUTIA PBINFO INCEPE AICI

void sum_div(int n, int &s)
{
    s = 0;

    for (int d = 1; d <= n; d++)
        if (n % d == 0)
            s = s + d;
}


// SOLUTIA PBINFO SE TERMINA AICI


int main()
{
    int n = 0, sum = 0;

    cout << "n = ";
    cin >> n;

    sum_div(n, sum);

    cout << "Suma divizorilor lui " << n << " = " << sum << '\n';

    return 0;
}
