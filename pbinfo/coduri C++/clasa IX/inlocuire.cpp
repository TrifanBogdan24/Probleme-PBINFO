// #161 - inlocuire
#include <iostream>

using namespace std;

int main()
{
    int n = 0, sum = 0, medie = 0, nr_nenule = 0, v[205];

    for (int i = 0; i < 205; i++)
        v[i] = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    sum = 0;
    nr_nenule = n;
    
    for (int i = 1; i <= n; i++)
    {
        sum = sum + v[i];
        if (v[i] == 0)
            nr_nenule = nr_nenule - 1;
    }
    
    medie = sum / nr_nenule;

    for (int i = 1; i <= n; i++)
        if (!v[i])
            v[i] = medie;

    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";

    cout << '\n';
    return 0;
}
