// #1258 - scadere2
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, dif = 0;

    cin >> a >> b;

    if (a > b)
        dif = a - b;
    else
        dif = b - a;
    
    cout << dif << '\n';
    return 0;
}
