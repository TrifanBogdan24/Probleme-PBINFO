// #1799 - Dinti1
#include <iostream>

using namespace std;

int n;

long long F(int n)
{
    if (n == 1)
        return 1;

    return 1LL * n + 2LL * F(n - 1);
}

int main()
{
    cin >> n;
    cout << F(n) << '\n';
    return 0;
}