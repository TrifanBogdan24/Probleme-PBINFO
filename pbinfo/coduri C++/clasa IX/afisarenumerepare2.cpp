// #3232 - AfisareNumerePare2
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    for (int i = 2; i <= n; i = i + 2)
        cout << i << " ";

    return 0;
}