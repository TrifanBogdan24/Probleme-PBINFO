// #1260 - asii
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;

    int s = a + b;
    int d = a - b;
    int p = a * b;
    int c = a / b;
    
    cout << s << " " << d << " " << p << " " << c << '\n';

    return 0;
}