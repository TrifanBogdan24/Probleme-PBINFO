// #816 - Sticle
#include <iostream>

using namespace std;

int main()
{
    int n = 0, x = 0, y = 0;

    cin >> x >> y;
    if (y % x == 0)
        n = y / x;
    else
        n = y / x + 1;
    
    cout << n << '\n';
    return 0;
}
