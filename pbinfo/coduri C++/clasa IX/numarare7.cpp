// #986 - Numarare7
#include <iostream>

using namespace std;

int main()

{
    int n = 0, C = 0;
    float v[205], val1 = 0.0, val2 = 0.0;

    for (int i = 0; i < 205; i++)
        v[i] = 0.0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (v[1] < v[n])
    {
        val1 = v[1];
        val2 = v[n];
    }
    else
    {
        val1 = v[n];
        val2 = v[1];
    }

    C = 0;
    for (int i = 2; i < n; i++)
        if (val1 <= v[i] && v[i] <= val2)
            C++;

    cout << C << '\n';
    return 0;
}
