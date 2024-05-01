// #3079 - numere_a_b
#include <iostream>

using namespace std;

long long a, b, c, x, q = 1;

int main()
{
    cin >> a >> b;
    while (a)
    {
        x = (a % 10 + b % 10) / 2;
        c = x * q + c;
        q = q * 10;
        a = a / 10;
        b = b / 10;
    }

    cout<<c;
    return 0;
}
