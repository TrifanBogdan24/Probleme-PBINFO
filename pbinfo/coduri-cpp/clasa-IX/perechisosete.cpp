// #2702 - PerechiSosete
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, nr_pairs = 0, v[105], frecv[105];
    
    for (int i = 0; i < 105; i++)
        v[i] = frecv[i] = 0;

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea elementelor vectorului
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        frecv[v[i]]++;

    nr_pairs = 0;
    for (int i = 1; i <= 100; i++)
        nr_pairs = nr_pairs + frecv[i] / 2;
    
    cout << nr_pairs << '\n';
    return 0;
}
