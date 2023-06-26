// #106 - minim3
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    if (a <= b && a <= c) cout << a;
    else if (b <= a && b <= c) cout << b;
    else cout << c;

    cout << '\n';
    return 0;
}
