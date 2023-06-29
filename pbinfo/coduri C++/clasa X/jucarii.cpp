// #1128 - jucarii
#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    long long x = 1;

    cin >> n >> m;
    
    for (int i = m - n + 1; i <= m; i++)
    {
        x = x * i;
        x = x % 224737;
    }
    
    cout << x << '\n';

    return 0;
}
