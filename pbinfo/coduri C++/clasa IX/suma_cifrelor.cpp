// #10 - Suma Cifrelor
#include <iostream>

using namespace std;

int main()
{
    int n = 0, s = 0;

    cin >> n;

    while (n)
    {
        s = s + n % 10;
        n = n / 10;
    }

    cout << s << '\n';
    return 0;
}