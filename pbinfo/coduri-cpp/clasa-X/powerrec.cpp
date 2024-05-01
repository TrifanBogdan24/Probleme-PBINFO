// #1809 - PowerREC
#include <iostream>

using namespace std;

int P(int a, int b)
{
    if (b != 0)
        return a * P(a, b - 1);
    else
        return 1;
}

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    cout << P(a, b) << '\n';
    return 0;
}
