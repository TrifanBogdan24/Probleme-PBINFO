// #452 - cifimp
#include <iostream>

using namespace std;

int main()
{
    int n = 0, nr = 0;
    cin >> n;
    nr = 0;

    for (int i = 1; i <= 3; i++)
    {
        if (n % 2 != 0)
            nr++;
        n = n / 10;
    }

    cout << nr << '\n';
    return 0;
}
