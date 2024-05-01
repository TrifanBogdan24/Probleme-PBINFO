// #480 - Sum 3 Cons
#include <iostream>
#include <cmath>
using namespace std;
long long n, a;

int main ()
{
    cin >> n;
    if (n % 3) cout << "NU EXISTA";
    else 
    {
        a = n / 3 - 1;
        cout << a << ' ' << a + 1 << ' ' << a + 2;
    }
    return 0;
}
