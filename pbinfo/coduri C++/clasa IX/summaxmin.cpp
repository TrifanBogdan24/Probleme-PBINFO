// #347 - SumMaxMin
#include <iostream>

using namespace std;

int main()
{
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int min_val = v[1];
    int max_val = v[1];

    for (int i = 2; i <= n; i++)
    {
        if (v[i] < min_val)
            min_val = v[i];

        if (v[i] > max_val)
            max_val = v[i];
    }

    int S = min_val + max_val;
    cout << S << '\n';

    return 0;
}
