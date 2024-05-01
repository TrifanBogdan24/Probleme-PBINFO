// #2223 - cifre004
#include <iostream>
using namespace std;
long long n, x;
int s, i;

int main ()
{
    cin >> n;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }

    if (s < 10)
    {
        cout << s;
        for (i = 1; i < s; i++) cout << '0';
    } else
    {
        for (i = 1; i <= s / 9; i++) cout << '9';
        cout << s % 9;
        for (i = 1; i <= s - s / 9 - 1; i++) cout << '0';
    }
    return 0;
}
