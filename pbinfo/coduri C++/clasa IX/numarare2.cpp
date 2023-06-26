// #487 - Numarare2
#include <iostream>

using namespace std;

int main()
{
    int n = 0, sum = 0, medie = 0, nr = 0, v[205];

    for (int i = 0; i < 205; i++)
        v[i] = 0;
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        sum += v[i];
    
    medie = sum / n;
    for (int i = 1; i <= n; i++)
        if (v[i] > medie)
            nr++;

    cout << nr << '\n';
    return 0;
}
