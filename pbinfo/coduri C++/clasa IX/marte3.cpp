// #3181 - Marte3
#include <iostream>

using namespace std;
int x, y, a, z, h, q;

long long n;

int main()
{
    cin >> x >> y >> n;
    q = x * y;
    a = n / q;
    n = n - x * a * y;
    z = n / y;
    h = n % y;
    cout << a << '\n' << z << '\n' << h;
    return  0;
}
