// #3231 - AfisareNumere2
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cout << i << " ";

    cout << '\n';

    for (int i = n; i >= 1; i--)
        cout << i << " ";

    return 0;
}
