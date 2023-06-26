// #105 - max2
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, maxim = 0;
    cin >> a >> b;

    if (a >= b)
        maxim = a;
    else if (b > a)
        maxim = b;

    cout << maxim << '\n';    
    return 0;
}
