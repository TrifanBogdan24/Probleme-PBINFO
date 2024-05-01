#include <iostream>

using namespace std;

int a, b, c, a1, b1, c1, q;

int main()
{
    cin >> a >> b >> c;
    a1 = a / 10 + a % 10;
    b1 = b / 10 + b % 10;
    c1 = c / 10 + c % 10;
    q = max(a1, b1);
    q = max(q, c1);
    if (a1 == q) cout << a <<' ';
    if (b1 == q) cout << b <<' ';
    if (c1 == q) cout << c;
    return 0;
}
