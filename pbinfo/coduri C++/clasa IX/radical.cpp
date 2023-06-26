// #1282 - radical
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    for (int r = 1; r * r <= n; r++)
        if (r * r == n)
            cout << r << '\n';

    return 0;
}
