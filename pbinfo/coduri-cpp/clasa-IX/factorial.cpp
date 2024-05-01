// #49 - Factorial
#include <iostream>

using namespace std;

int main ()
{
    int n = 0;
    long long p = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
        p = p * i;

    cout << p << '\n';
    return 0;
}
