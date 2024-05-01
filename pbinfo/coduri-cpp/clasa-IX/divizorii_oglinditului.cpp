// #408 - Divizorii Oglinditului
#include <iostream>

using namespace std;

int main()
{
    int nr = 0, n = 0, inv = 0;
    
    cin >> n;
    
    inv = 0;
    while (n)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }
    
    nr = 0;
    for (int d = 1; d <= inv; d++)
        if (inv % d == 0)
            nr++;
    
    cout << nr << '\n';
    return 0;
}
