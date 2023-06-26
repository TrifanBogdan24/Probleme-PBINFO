// #423 - Fibonacci1
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a = 1, b = 1, c = 0;

    cin >> n;

    while (a <= n)
    {
        cout << a << ' ';
        c = a + b;
        a = b;
        b = c;
    }

    cout << '\n';
    return 0;
}
