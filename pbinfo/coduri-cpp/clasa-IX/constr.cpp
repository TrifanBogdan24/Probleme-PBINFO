// #493 - Constr
#include <iostream>

using namespace std;

int sum_cif(int x)
{
    // subprogramul intoarce suma cifrelor unui numar primit drept parametru

    int s = 0;

    while (x)
    {
        s += x % 10;
        x /= 10;
    }

    return s;
}

int main()
{
    int n = 0, m = 0, x[205], y[205];

    for (int i = 0; i < 205; i++)
        x[i] = y[i] = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    for (int i = 1; i <= n; i++)
        y[i] = x[i] % sum_cif(x[i]);

    for (int i = 1; i <= n; i++)
        cout << y[i] << " ";
    
    cout << '\n';
    return 0;
}
