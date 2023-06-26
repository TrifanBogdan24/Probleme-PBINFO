// #499 - Numarare5
#include <iostream>

using namespace std;

int sum_cif(int x)
{
    // subprogramul intoarce suma cifrelor unui numar primit drept parametru
    int sum = 0;

    while (x)
    {
        sum += x % 10;
        x /= 10;
    }

    return sum;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, C = 0, v[205], scif[205];
    
    for (int i = 0; i < 205; i++)
        v[i] = scif[i] = 0;

    // citirea vectorului
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    for (int i = 1; i <= n; i++)
        scif[i] = sum_cif(v[i]);

    C = 0;
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (scif[i] == scif[j])
                C++;

    cout << C << '\n';

    return 0;
}