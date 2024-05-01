// #428 - transfB
#include <iostream>
using namespace std;
int n, b, v[150], i;
long long a;

int main()
{
    cin >> b >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        a = a * b + v[i];
    }
    cout << a;
    return 0;
}
