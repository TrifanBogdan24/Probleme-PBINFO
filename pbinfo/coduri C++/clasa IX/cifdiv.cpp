// #1310 - CifDiv
#include <iostream>
using namespace std;
int n, m, nr, c;

int main()
{
    cin >> n >> m;
    while (n)
    {   
        c = n % 10;
        if (c != 0 && m % c== 0)
            nr++;
        n = n / 10;
    }
    cout << nr;
    return 0;
}
