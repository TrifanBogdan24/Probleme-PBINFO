// #633 - Paritate1
#include <iostream>

using namespace std;

int main()
{
    int n = 0, C = 0, nr_pare = 0, nr_impare = 0, v[1005];

    for (int i = 0; i < 1005; i++)
        v[i] = 0;

    
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
            nr_pare++;
        else
            nr_impare++;
    }

    if (nr_pare > nr_impare)
        C = nr_pare - nr_impare;
    else
        C = nr_impare - nr_pare;

    cout << C << '\n';
    return 0;
}
