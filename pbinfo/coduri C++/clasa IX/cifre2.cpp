// #118 - Cifre2
#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;

    while (n > 99) n = n / 10;

    cout << (n / 10 + n % 10);

    return 0;
}
