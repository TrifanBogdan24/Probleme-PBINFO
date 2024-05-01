// #429 - CifBin
#include <iostream>

using namespace std;
long long  n;
int nr[3];

int main()
{
    cin >> n;
    while (n)
    {
        nr[n % 2]++;
        n = n / 2;
    }
    cout << nr[0] << ' ' << nr[1];

    return 0;
}
