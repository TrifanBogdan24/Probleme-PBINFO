// #833 - Varste copii
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, x = 0;

    cin >> a >> b;
    
    if (a > b)
    {
        x = a - b;
        cout << "Primul copil este mai mare cu " << x << " ani";
    }
    else if (a < b)
    {
        x = b - a;
        cout << "Al doilea copil este mai mare cu " << x << " ani";
    }
    else
        cout << "Copiii au varste egale ";
    
    cout << '\n';
    return 0;
}
