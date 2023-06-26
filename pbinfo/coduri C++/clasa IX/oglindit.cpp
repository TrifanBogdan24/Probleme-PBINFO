// #69 - Oglindit
#include <iostream>

using namespace std;

int main()
{
    int n = 0, inv = 0;
    cin >> n;

    inv = 0;
    
    while (n)
    {
        inv = inv * 10 + n % 10;
        n = n / 10;
    }

    cout << inv << '\n';
    return 0;
}
