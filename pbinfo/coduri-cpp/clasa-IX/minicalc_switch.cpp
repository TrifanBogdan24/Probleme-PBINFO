// #450 - minicalc
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;

    cin >> a >> b >> c;

    switch (c)
    {
    case 1:
        cout << (a + b);
        break;
    case 2:
        cout << ( a - b);
        break;
    case 3:
        cout << (a * b);
        break;
    case 4:
        cout << (a / b);
        break;
    case 5:
        cout << (a % b);
        break;
    default:
        break;
    }

    return 0;
}
