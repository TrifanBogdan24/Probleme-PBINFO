// #112 - FractieMinima
#include <iostream>

using namespace std;
int n, i;
long long v[10000], Min, Max, e;

int cmmdc(int a, int b)
{
    if (a == b) return a;
    if (a > b) return cmmdc(a - b, b);
    return cmmdc(a, b - a);
}

int main()
{
    cin >> n >> v[1];
    Min = Max = v[1];
    for (i = 2; i <= n; i++)
    {
        cin >> v[i];
        Min = min(Min, v[i]);
        Max = max(Max, v[i]);
    }
    e = cmmdc(Min, Max);
    cout << (Min / e) << '/' << (Max / e);
    return 0;
}
