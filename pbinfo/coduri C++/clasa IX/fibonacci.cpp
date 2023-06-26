// #255 - Fibonacci
#include <iostream>

using namespace std;

int main()
{
    int n, v[40];
    cin >> n;
    v[0] = 0;
    v[1] = 1;
    cout << v[1] << " ";

    for (int i=2;i<=n;i++)
    {
        v[i] = v[i - 1] + v[i - 2];
        cout << v[i] << " ";
    }

    return 0;
}
