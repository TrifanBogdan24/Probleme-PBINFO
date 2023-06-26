// #354 - n_maxim
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // aflarea elementului minim
    int MAX = v[1];
    for (int i = 2; i <= n; i++)
        if (v[i] < MAX)
            MAX = v[i];

    cout << MAX << '\n';

    return 0;
}
