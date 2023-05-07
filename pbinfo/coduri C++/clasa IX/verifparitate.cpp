// #2708 - VerifParitate
#include <iostream>
using namespace std;
unsigned long long  x;
int n, i;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        cout << x % 2 << ' ';
    }
    return 0;
}
